#! /bin/bash
OF=/var/my-backup-$(date +%Y%m%d).tgz
tar -cZf $OF /Users/bjung/shell 
