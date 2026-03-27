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

  v2 = 0;
  _memset((int)a1, 0, 0x90u);
  v3 = Str;
  if ( !*Str )
    return 0;
  if ( *Str == 0x2E && Str[1] )
  {
    HIDWORD(v15) = Str + 1;
    LODWORD(v15) = 0x10;
    v5 = strncpy_s(a1 + 0x80, v15, (const char *)0xF, v20);
    if ( v5 )
      _invoke_watson(v5, v6, v7, 0, (int)a1, (int)Str);
    a1[0x8F] = 0;
    return 0;
  }
  Stra = 0;
  v8 = (const char *)strcspn(Str, "_.,");
  for ( i = v8 == 0; !i; i = v8 == 0 )
  {
    v10 = (int)&v3[(_DWORD)v8];
    LOBYTE(v2) = v3[(_DWORD)v8];
    if ( Stra )
    {
      if ( Stra == (char *)1 )
      {
        if ( (unsigned int)v8 >= 0x40 || (_BYTE)v2 == 0x5F )
          return 0xFFFFFFFF;
        v19 = v8;
        HIDWORD(v17) = v3;
        LODWORD(v17) = 0x40;
        v14 = a1 + 0x40;
      }
      else
      {
        if ( Stra != (char *)2 || (unsigned int)v8 >= 0x10 || (_BYTE)v2 && (_BYTE)v2 != 0x2C )
          return 0xFFFFFFFF;
        v19 = v8;
        HIDWORD(v17) = v3;
        LODWORD(v17) = 0x10;
        v14 = a1 + 0x80;
      }
      v11 = strncpy_s(v14, v17, v19, v20);
    }
    else
    {
      if ( (unsigned int)v8 >= 0x40 || (_BYTE)v2 == 0x2E )
        return 0xFFFFFFFF;
      HIDWORD(v16) = v3;
      LODWORD(v16) = 0x40;
      v11 = strncpy_s(a1, v16, v8, v20);
    }
    if ( v11 )
      _invoke_watson(0, v12, v13, v2, v10, (int)v3);
    if ( (_BYTE)v2 == 0x2C || !(_BYTE)v2 )
      return 0;
    ++Stra;
    v3 = (char *)(v10 + 1);
    v8 = (const char *)strcspn((const char *)(v10 + 1), "_.,");
  }
  return 0xFFFFFFFF;
}
