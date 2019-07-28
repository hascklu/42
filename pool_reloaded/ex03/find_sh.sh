find . -type f -name "*.sh" -execdir echo {} ';' | rev | cut -c 4- | rev
