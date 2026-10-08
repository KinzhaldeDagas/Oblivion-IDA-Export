int __cdecl __lc_strtolc(char *a1, char *Str)
{
  int v2; // ebx
  char *v3; // esi
  errno_t v5; // eax
  int v6; // edx
  int v7; // ecx
  const char *v8; // eax
  bool i; // zf
  int v10; // edi
  errno_t v11; // eax
  int v12; // edx
  int v13; // ecx
  char *v14; // eax
  rsize_t v15; // [esp-Ch] [ebp-18h]
  rsize_t v16; // [esp-Ch] [ebp-18h]
  rsize_t v17; // [esp-Ch] [ebp-18h]
  const char *v19; // [esp-4h] [ebp-10h]
  rsize_t v20; // [esp+0h] [ebp-Ch]
  char *Stra; // [esp+18h] [ebp+Ch]

  v2 = 0; /*0x98a367*/
  _memset((int)a1, 0, 0x90u); /*0x98a36b*/
  v3 = Str; /*0x98a370*/
  if ( !*Str ) /*0x98a373*/
    return 0; /*0x98a37a*/
  if ( *Str == 0x2E && Str[1] ) /*0x98a38a*/
  {
    HIDWORD(v15) = Str + 1; /*0x98a390*/
    LODWORD(v15) = 0x10; /*0x98a397*/
    v5 = strncpy_s(a1 + 0x80, v15, (const char *)0xF, v20); /*0x98a39a*/
    if ( v5 ) /*0x98a3a4*/
      _invoke_watson(v5, v6, v7, 0, (int)a1, (int)Str); /*0x98a3ab*/
    a1[0x8F] = 0; /*0x98a3b3*/
    return 0; /*0x98a37e*/
  }
  Stra = 0; /*0x98a3c1*/
  v8 = (const char *)strcspn(Str, "_.,"); /*0x98a3c4*/
  for ( i = v8 == 0; !i; i = v8 == 0 ) /*0x98a3c9*/
  {
    v10 = (int)&v3[(_DWORD)v8]; /*0x98a3d4*/
    LOBYTE(v2) = v3[(_DWORD)v8]; /*0x98a3d7*/
    if ( Stra ) /*0x98a3d9*/
    {
      if ( Stra == (char *)1 ) /*0x98a3fa*/
      {
        if ( (unsigned int)v8 >= 0x40 || (_BYTE)v2 == 0x5F ) /*0x98a404*/
          return 0xFFFFFFFF; /*0x98a404*/
        v19 = v8; /*0x98a406*/
        HIDWORD(v17) = v3; /*0x98a40a*/
        LODWORD(v17) = 0x40; /*0x98a40b*/
        v14 = a1 + 0x40; /*0x98a40d*/
      }
      else
      {
        if ( Stra != (char *)2 || (unsigned int)v8 >= 0x10 || (_BYTE)v2 && (_BYTE)v2 != 0x2C ) /*0x98a424*/
          return 0xFFFFFFFF; /*0x98a424*/
        v19 = v8; /*0x98a426*/
        HIDWORD(v17) = v3; /*0x98a42a*/
        LODWORD(v17) = 0x10; /*0x98a42b*/
        v14 = a1 + 0x80; /*0x98a42d*/
      }
      v11 = strncpy_s(v14, v17, v19, v20); /*0x98a433*/
    }
    else
    {
      if ( (unsigned int)v8 >= 0x40 || (_BYTE)v2 == 0x2E ) /*0x98a3e7*/
        return 0xFFFFFFFF; /*0x98a3e7*/
      HIDWORD(v16) = v3; /*0x98a3ee*/
      LODWORD(v16) = 0x40; /*0x98a3ef*/
      v11 = strncpy_s(a1, v16, v8, v20); /*0x98a3f4*/
    }
    if ( v11 ) /*0x98a43d*/
      _invoke_watson(0, v12, v13, v2, v10, (int)v3); /*0x98a446*/
    if ( (_BYTE)v2 == 0x2C || !(_BYTE)v2 ) /*0x98a459*/
      return 0; /*0x98a459*/
    ++Stra; /*0x98a45f*/
    v3 = (char *)(v10 + 1); /*0x98a462*/
    v8 = (const char *)strcspn((const char *)(v10 + 1), "_.,"); /*0x98a46b*/
  }
  return 0xFFFFFFFF; /*0x98a47d*/
}
