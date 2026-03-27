void __userpurge sub_464060(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10,
        unsigned int a11,
        _BYTE *a12,
        char *a13,
        char *Str)
{
  int v14; // ebx
  _DWORD *v16; // edi
  char *v17; // eax
  int v18; // ebp
  unsigned int v19; // eax
  const char *v20; // esi
  char *v21; // ecx
  _BYTE *v22; // edx
  char v23; // al
  char *v24; // ecx
  _BYTE *v25; // edx
  char v26; // al
  _DWORD *v27; // edi
  const char *v28; // eax
  const char *v29; // esi
  unsigned int v30; // eax
  char v31; // cl
  size_t v32; // [esp-Ch] [ebp-30h]
  int v33; // [esp+10h] [ebp-14h] BYREF
  int v34[4]; // [esp+14h] [ebp-10h] BYREF

  v14 = (int)a12;
  if ( a12 )
    *a12 = 0;
  v16 = (_DWORD *)a11;
  if ( !sub_459570(a10, (int *)a11, (int)a13, Str) )
  {
    v17 = (char *)Savegame_Rename(a1, a9, a6, a7, a8, a5, a2, a3, a4, a10, 0, 2);
    v18 = (int)v17;
    if ( v17 && v17[0x24] && (v19 = sub_45DBC0((int)a1, a9, a6, a7, a8, a5, a2, a3, a4, v17, 0)) != 0 )
    {
      a12 = 0;
      sub_45D5F0(a1, v18, a10, v19, v16, 0, &a12, 0, (float *)&v33, v34, &a11, 0);
      if ( a13 )
        _sprintf(a13, "%s %i", (const char *)dword_B38720, (unsigned __int16)a12);
      if ( Str )
        _sprintf(Str, "%02i:%02i:%02i", a11 / 0x36EE80, a11 % 0x36EE80 / 0xEA60, a11 % 0x36EE80 % 0xEA60 / 0x3E8);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v18 + 0xC))(v18, 0, BSFile_FilePos_Beg);
    }
    else
    {
      if ( v16 )
        *v16 = 0;
      if ( a13 )
        *a13 = 0;
      if ( Str )
        *Str = 0;
      if ( !v18 )
        goto LABEL_21;
    }
    BSFile_Flush(v18);
LABEL_21:
    if ( v14 )
    {
      v20 = (const char *)(a10 + 0x3C);
      if ( strstr((const char *)(a10 + 0x3C), "quicksave") )
      {
        v21 = (char *)dword_B38710;
        v22 = (_BYTE *)v14;
        do
        {
          v23 = *v21;
          *v22++ = *v21++;
        }
        while ( v23 );
        *(_DWORD *)(v14 + strlen((const char *)v14)) = dword_A3B140;
        strcat((char *)v14, a13);
      }
      else if ( strstr(v20, "autosave") )
      {
        v24 = (char *)dword_B38718;
        v25 = (_BYTE *)v14;
        do
        {
          v26 = *v24;
          *v25++ = *v24++;
        }
        while ( v26 );
        v27 = (_DWORD *)(v14 + strlen((const char *)v14));
        v28 = a13;
        *v27 = dword_A3B140;
        strcat((char *)v14, v28);
      }
      else
      {
        LODWORD(v32) = 5;
        v29 = strrchr(v20, 0x5C) + 1;
        if ( _strnicmp(v29, "Save ", v32) )
        {
          strcpy((char *)v14, v29);
          v30 = strlen((const char *)v14);
          if ( v30 > 4 )
            *(_BYTE *)(v30 + v14 - 4) = v31;
          if ( v30 > 0x12 )
            *(_BYTE *)(v14 + 0x12) = 0;
        }
      }
    }
  }
}
