#!/bin/sh
cat /etc/passwd | cut -d: -f5 --complement | sed -n 'n;p' | cut -d: -f1 | rev | sort -r | sed -n "$FT_LINE1 , $FT_LINE2 p" | awk 1 ORS=', ' | sed "s/, $/./"