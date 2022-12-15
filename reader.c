#include "music.h"

int noteplayer_set1(char note)
{
    if (note == '1')
    {
        printf("plin ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes1\\1.wav", NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (note == '2')
    {
        printf("plon ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes1\\2.wav", NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (note == '3')
    {
        printf("plei ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes1\\3.wav", NULL, SND_ASYNC | SND_FILENAME);
    }
    else if (note == '4')
    {
        printf("paly ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes1\\4.wav", NULL, SND_ASYNC | SND_FILENAME);
    }
    return (0);
}

int noteplayer_set2(char note)
{
    if (note == '1')
    {
        printf("plin ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\1.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    else if (note == '2')
    {
        printf("plon ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\2.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    else if (note == '3')
    {
        printf("plei ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\3.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    else if (note == '4')
    {
        printf("paly ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\4.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    else if (note == '5')
    {
        printf("paly ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\5.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    else if (note == '6')
    {
        printf("paly ");
        PlaySound("C:\\Users\\kikev\\Desktop\\programmingfolder\\c\\music\\notes2\\6.wav", NULL, SND_SYNC | SND_FILENAME);
    }
    return (0);
}

int jukebox(char *msc)
{
    int i;

    i = 0;
    while (i < ft_strlen(msc))
    {
        if (msc[i] == '#')
            noteplayer_set1(msc[i + 1]);
        else if (msc[i] == ',')
            usleep(500000);
        else if (msc[i] == '@')
            jukebox(msc);
        else if (msc[i] == ';')
            usleep(1800000);
        else if (msc[i] == '%')
            noteplayer_set2(msc[i + 1]);
        i++;
    }
    return (1);
}