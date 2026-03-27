void __usercall _NMSG_WRITE(int a1@<ebp>, int a2)
{
  int i; // edi
  errno_t v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  char *v8; // eax
  errno_t v9; // eax
  int v10; // edx
  int v11; // ecx
  errno_t v12; // eax
  int v13; // edx
  int v14; // ecx
  errno_t v15; // eax
  int v16; // edx
  int v17; // ecx
  HANDLE StdHandle; // eax
  void *v19; // ebp
  DWORD v20; // eax
  rsize_t v21; // [esp-14h] [ebp-24h]
  _BYTE v22[12]; // [esp-Ch] [ebp-1Ch]
  rsize_t v23; // [esp-Ch] [ebp-1Ch]
  const char *v24; // [esp-4h] [ebp-14h]
  DWORD NumberOfBytesWritten; // [esp+Ch] [ebp-4h] BYREF

  for ( i = 0; i < 0x17; ++i )
  {
    if ( a2 == dword_B311E8[2 * i] )
      break;
  }
  if ( (unsigned int)i < 0x17 )
  {
    *(_DWORD *)&v22[8] = a1;
    if ( _set_error_mode(3) == 1 || !_set_error_mode(3) && dword_B30DA8 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4);
      v19 = StdHandle;
      if ( StdHandle )
      {
        if ( StdHandle != (HANDLE)0xFFFFFFFF )
        {
          v20 = strlen((&off_B311EC)[2 * i]);
          WriteFile(v19, (&off_B311EC)[2 * i], v20, &NumberOfBytesWritten, 0);
        }
      }
    }
    else if ( a2 != 0xFC )
    {
      v3 = strcpy_s(Dst, 0x314u, "Runtime Error!\n\nProgram: ");
      if ( v3 )
        _invoke_watson(v3, v4, v5, 0x314, i, 0);
      byte_BAA3CD = 0;
      if ( !GetModuleFileNameA(0, Filename, 0x104u) )
      {
        if ( strcpy_s(Filename, 0x2FBu, "<program name unknown>") )
          _invoke_watson(0, v6, v7, 0x314, i, (int)Filename);
      }
      if ( (unsigned int)strlen(Filename) + 1 > 0x3C )
      {
        v8 = &Filename[0xFFFFFFC5 + strlen(Filename)];
        HIDWORD(v21) = "...";
        LODWORD(v21) = (char *)&dword_BAA5C4 - v8;
        v9 = strncpy_s(v8, v21, (const char *)3, *(rsize_t *)&v22[4]);
        if ( v9 )
          _invoke_watson(v9, v10, v11, 0x314, i, 0);
      }
      *(_DWORD *)&v22[4] = "\n\n";
      *(_DWORD *)v22 = 0x314;
      v12 = strcat_s(Dst, *(rsize_t *)v22, *(const char **)&v22[8]);
      if ( v12 )
        _invoke_watson(v12, v13, v14, 0x314, i, 0);
      HIDWORD(v23) = (&off_B311EC)[2 * i];
      LODWORD(v23) = 0x314;
      v15 = strcat_s(Dst, v23, v24);
      if ( v15 )
        _invoke_watson(v15, v16, v17, 0x314, i, 0);
      sub_99CB44((int)Dst, (int)"Microsoft Visual C++ Runtime Library", 0x12010);
    }
  }
}
