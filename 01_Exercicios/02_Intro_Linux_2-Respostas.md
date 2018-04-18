## Para todas as questões, escreva os comandos correspondentes no terminal.

### 1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.
```
$ echo "Ola mundo cruel!" > Ola_mundo.txt
$ cat Ola_mundo.txt
Ola mundo cruel!
```

### 2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.
```
$ sudo su
# ls /
bin       boot-sav  etc         lib         media  proc  sbin  tmp  vmlinuz
boot      cdrom     home        lib64       mnt    root  srv   usr
BootInfo  dev       initrd.img  lost+found  opt    run   sys   var
```

### 3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.
```
# ls -l /
total 116
drwxr-xr-x   2 root root  4096 Abr 13 15:15 bin
drwxr-xr-x   4 root root  4096 Abr 13 15:19 boot
drwxr-xr-x   5 root root  4096 Abr 13 00:11 BootInfo
drwxr-xr-x   4 root root  4096 Abr 13 00:10 boot-sav
drwxr-xr-x   2 root root  4096 Abr 12 23:27 cdrom
drwxr-xr-x  21 root root  4200 Abr 18 10:20 dev
drwxr-xr-x 151 root root 12288 Abr 13 16:07 etc
drwxr-xr-x   3 root root  4096 Abr 12 23:27 home
lrwxrwxrwx   1 root root    33 Abr 12 23:29 initrd.img -> boot/initrd.img-4.10.0-38-generic
drwxr-xr-x  25 root root  4096 Abr 13 15:15 lib
drwxr-xr-x   2 root root  4096 Abr 13 15:10 lib64
drwx------   2 root root 16384 Abr 12 23:24 lost+found
drwxr-xr-x   3 root root  4096 Abr 13 09:06 media
drwxr-xr-x   2 root root  4096 Nov 24 11:59 mnt
drwxr-xr-x   5 root root  4096 Abr 13 15:51 opt
dr-xr-xr-x 238 root root     0 Abr 18 07:19 proc
drwx------   5 root root  4096 Abr 18 11:54 root
drwxr-xr-x  34 root root  1080 Abr 18 11:53 run
drwxr-xr-x   2 root root 12288 Abr 13 15:15 sbin
drwxr-xr-x   2 root root  4096 Nov 24 11:59 srv
dr-xr-xr-x  13 root root     0 Abr 18 11:55 sys
drwxrwxrwt  11 root root 16384 Abr 18 11:54 tmp
drwxr-xr-x  10 root root  4096 Nov 24 11:59 usr
drwxr-xr-x  12 root root  4096 Nov 24 12:33 var
lrwxrwxrwx   1 root root    30 Abr 12 23:29 vmlinuz -> boot/vmlinuz-4.10.0-38-generic
```

### 4. Apresente somente as pastas dentro da pasta 'root'.
```
# cd /
# ls -d */
bin/       boot-sav/  etc/   lib64/       mnt/   root/  srv/  usr/
boot/      cdrom/     home/  lost+found/  opt/   run/   sys/  var/
BootInfo/  dev/       lib/   media/       proc/  sbin/  tmp/
# exit
```

### 5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.
```
$ date -d "6 jan 2018"
Sáb Jan  6 00:00:00 -02 2018
$ date -d "6 jan 2017"
Sex Jan  6 00:00:00 -02 2017
$ date -d "6 jan 2016"
Qua Jan  6 00:00:00 -02 2016
$ date -d "6 jan 2015"
Ter Jan  6 00:00:00 -02 2015
$ date -d "6 jan 2014"
Seg Jan  6 00:00:00 -02 2014
$ date -d "6 jan 2013"
Dom Jan  6 00:00:00 -02 2013
$ date -d "6 jan 2012"
Sex Jan  6 00:00:00 -02 2012
$ date -d "6 jan 2011"
Qui Jan  6 00:00:00 -02 2011
$ date -d "6 jan 2010"
Qua Jan  6 00:00:00 -02 2010
$ date -d "6 jan 2009"
Ter Jan  6 00:00:00 -02 2009
```

### 6. Liste somente os arquivos com extensão .txt.
```
$ ls *.txt
arquivo.txt   cal_1996.txt  cal_2003.txt  cal_2010.txt  cal_2017.txt
cal_1990.txt  cal_1997.txt  cal_2004.txt  cal_2011.txt  cal_2018.txt
cal_1991.txt  cal_1998.txt  cal_2005.txt  cal_2012.txt  cal_2019.txt
cal_1992.txt  cal_1999.txt  cal_2006.txt  cal_2013.txt  cal_2020.txt
cal_1993.txt  cal_2000.txt  cal_2007.txt  cal_2014.txt  cal.txt
cal_1994.txt  cal_2001.txt  cal_2008.txt  cal_2015.txt  cal_types.txt
cal_1995.txt  cal_2002.txt  cal_2009.txt  cal_2016.txt
```

### 7. Liste somente os arquivos com extensão .png.
```
$ ls *.png
BusinessTux.png               linux.png
linux1.png                    Tux-in-a-suit.png
linux2.png                    tux-linux-professional_0-100520358-orig.png
linux3.png                    TUX.png
linux_inside.png              xanderrun-tux-construction-8454.png
linux-penguin-icon-39742.png

```

### 8. Liste somente os arquivos com extensão .jpg.
```
$ ls *.jpg
d36f1a2be6a927ac3e2e1e4eacdedded.jpg  oRva1OGD.jpg
oRva1OGD_400x400.jpg                  zz39112bb5.jpg
```

### 9. Liste somente os arquivos com extensão .gif.
```
$ ls *.gif
1086970.gif
```

### 10. Liste somente os arquivos que contenham o nome 'cal'.
```
ls *cal*
cal_1990.txt  cal_1997.txt  cal_2004.txt  cal_2011.txt  cal_2018.txt
cal_1991.txt  cal_1998.txt  cal_2005.txt  cal_2012.txt  cal_2019.txt
cal_1992.txt  cal_1999.txt  cal_2006.txt  cal_2013.txt  cal_2020.txt
cal_1993.txt  cal_2000.txt  cal_2007.txt  cal_2014.txt  cal.txt
cal_1994.txt  cal_2001.txt  cal_2008.txt  cal_2015.txt  cal_types.txt
cal_1995.txt  cal_2002.txt  cal_2009.txt  cal_2016.txt
cal_1996.txt  cal_2003.txt  cal_2010.txt  cal_2017.txt
```


### 11. Liste somente os arquivos que contenham o nome 'tux'.
```
$ ls *tux*
tux-linux-professional_0-100520358-orig.png
xanderrun-tux-construction-8454.png
```

### 12. Liste somente os arquivos que comecem com o nome 'tux'.
```
$ ls tux*
tux-linux-professional_0-100520358-orig.png
```
