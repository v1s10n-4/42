find . -name "*.sh" -type f -print | sed 's/...$//' | sed "s/.*\///"
