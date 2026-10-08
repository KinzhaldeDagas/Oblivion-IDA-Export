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
  _BYTE *v14; // ebx
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

  v14 = a12; /*0x464064*/
  if ( a12 ) /*0x46406f*/
    *a12 = 0; /*0x464071*/
  v16 = (_DWORD *)a11; /*0x46407c*/
  if ( !sub_459570(a10, (int *)a11, (int)a13, Str) ) /*0x46408a*/
  {
    v17 = (char *)TESSaveLoadGame_ResolveSaveFile(a1, a9, a6, a7, a8, a5, a2, a3, a4, a10, 0, 2); /*0x46409e*/
    v18 = (int)v17; /*0x4640a3*/
    if ( v17 /*0x4640bb*/
      && v17[0x24]
      && (v19 = TESSaveLoadGame_OpenAndValidateSave((int)a1, a9, a6, a7, a8, a5, a2, a3, a4, v17, 0)) != 0 )
    {
      a12 = 0; /*0x46410d*/
      TESSaveLoadGame_ReadSaveHeader(a1, v18, a10, v19, v16, 0, &a12, 0, (float *)&v33, v34, &a11, 0); /*0x464115*/
      if ( a13 ) /*0x464120*/
        _sprintf(a13, "%s %i", (const char *)unk_B38720, (unsigned __int16)a12); /*0x464135*/
      if ( Str ) /*0x464142*/
        _sprintf(Str, "%02i:%02i:%02i", a11 / 0x36EE80, a11 % 0x36EE80 / 0xEA60, a11 % 0x36EE80 % 0xEA60 / 0x3E8); /*0x46418b*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v18 + 0xC))(v18, 0, BSFile_FilePos_Beg); /*0x4641a3*/
    }
    else
    {
      if ( v16 ) /*0x4640bf*/
        *v16 = 0; /*0x4640c1*/
      if ( a13 ) /*0x4640cd*/
        *a13 = 0; /*0x4640cf*/
      if ( Str ) /*0x4640d8*/
        *Str = 0; /*0x4640da*/
      if ( !v18 ) /*0x4640df*/
        goto LABEL_21; /*0x4640df*/
    }
    BSFile_Flush(v18); /*0x4641a7*/
LABEL_21:
    if ( v14 ) /*0x4641ae*/
    {
      v20 = (const char *)(a10 + 0x3C); /*0x4641b8*/
      if ( strstr((const char *)(a10 + 0x3C), "quicksave") ) /*0x4641c1*/
      {
        v21 = (char *)unk_B38710; /*0x4641cd*/
        v22 = v14; /*0x4641d3*/
        do /*0x4641e1*/
        {
          v23 = *v21; /*0x4641d5*/
          *v22++ = *v21++; /*0x4641d7*/
        }
        while ( v23 ); /*0x4641e1*/
        *(_DWORD *)&v14[strlen(v14)] = dword_A3B140; /*0x4641f7*/
        strcat(v14, a13); /*0x464221*/
      }
      else if ( strstr(v20, "autosave") ) /*0x46423a*/
      {
        v24 = (char *)unk_B38718; /*0x464246*/
        v25 = v14; /*0x46424c*/
        do /*0x46425c*/
        {
          v26 = *v24; /*0x464250*/
          *v25++ = *v24++; /*0x464252*/
        }
        while ( v26 ); /*0x46425c*/
        v27 = &v14[strlen(v14)]; /*0x464260*/
        v28 = a13; /*0x464273*/
        *v27 = dword_A3B140; /*0x464277*/
        strcat(v14, v28); /*0x4642a1*/
      }
      else
      {
        LODWORD(v32) = 5; /*0x4642be*/
        v29 = strrchr(v20, 0x5C) + 1; /*0x4642c0*/
        if ( _strnicmp(v29, "Save ", v32) ) /*0x4642c9*/
        {
          strcpy(v14, v29); /*0x4642d7*/
          v30 = strlen(v14); /*0x4642ee*/
          if ( v30 > 4 ) /*0x4642ff*/
            v14[v30 - 4] = v31; /*0x464301*/
          if ( v30 > 0x12 ) /*0x464308*/
            v14[0x12] = 0; /*0x46430a*/
        }
      }
    }
  }
}
