#!/bin/sh
cat /etc/passwd | awk -F':' '{ print $1}' | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1;$FT_LINE2 p" | tr '\n' ',' | sed 's\,\, \g' | sed 's\, $\.\'