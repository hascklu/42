#include "get_next_line.h"

void	ft_swap(char **backup, char **line, char *buf, int i)
{
	char	*tmp;

	if (i == -1)
	{
		tmp = *backup;
		*backup = ft_strjoin(tmp, buf);
	}
	else
	{
		*line = ft_strsub(*backup, 0, i);
		tmp = *backup;
		*backup = ft_strsub(tmp, ++i, ft_strlen(*backup));
	}
	ft_strdel(&tmp);
}

int		ft_newline(char *buf, char **line, int ret, int fd)
{
	int					i;
	static char			*backup[10140];

	i = -1;
	if (backup[fd] == NULL)
		backup[fd] = ft_strnew(1);
	if (ret > 0)
		ft_swap(&backup[fd], line, buf, i);
	while (backup[fd][++i])
	{
		if (backup[fd][i] == '\n')
		{
			ft_swap(&backup[fd], line, buf, i);
			return (1);
		}
	}
	if (ret == 0 && ft_strlen(buf) < (BUFF_SIZE + 1)
			&& ft_strlen(backup[fd]) > 0)
	{
		*line = ft_strsub(backup[fd], 0, i);
		ft_strdel(&backup[fd]);
		return (1);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	char				buf[BUFF_SIZE + 1];
	int					ret;

	if (fd < 0 || line == NULL || BUFF_SIZE < 1)
		return (-1);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (ft_newline(buf, line, ret, fd) == 1)
			return (1);
	}
	if (ret == 0)
	{
		if (ft_newline(buf, line, ret, fd) == 1)
			return (1);
		return (0);
	}
	if (ret == -1)
		return (-1);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
