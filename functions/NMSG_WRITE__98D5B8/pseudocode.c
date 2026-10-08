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

  for ( i = 0; i < 0x17; ++i ) /*0x98d5c2*/
  {
    if ( a2 == dword_B311E8[2 * i] ) /*0x98d5cb*/
      break; /*0x98d5cb*/
  }
  if ( (unsigned int)i < 0x17 )
  {
    *(_DWORD *)&v22[8] = a1; /*0x98d5dc*/
    if ( _set_error_mode(3) == 1 || !_set_error_mode(3) && dword_B30DA8 == 1 )
    {
      StdHandle = GetStdHandle(0xFFFFFFF4); /*0x98d721*/
      v19 = StdHandle; /*0x98d727*/
      if ( StdHandle ) /*0x98d72b*/
      {
        if ( StdHandle != (HANDLE)0xFFFFFFFF ) /*0x98d730*/
        {
          v20 = strlen((&off_B311EC)[2 * i]); /*0x98d742*/
          WriteFile(v19, (&off_B311EC)[2 * i], v20, &NumberOfBytesWritten, 0); /*0x98d74c*/
        }
      }
    }
    else if ( a2 != 0xFC )
    {
      v3 = strcpy_s((char *)&dword_BA9E10[0x128], 0x314u, "Runtime Error!\n\nProgram: ");
      if ( v3 ) /*0x98d62e*/
        _invoke_watson(v3, v4, v5, 0x314, i, 0); /*0x98d635*/
      BYTE1(dword_BA9E10[0x16F]) = 0; /*0x98d64a*/
      if ( !GetModuleFileNameA(0, (LPSTR)&dword_BA9E10[0x12E] + 1, 0x104u) ) /*0x98d651*/
      {
        if ( strcpy_s((char *)&dword_BA9E10[0x12E] + 1, 0x2FBu, "<program name unknown>") ) /*0x98d666*/
          _invoke_watson(0, v6, v7, 0x314, i, (int)&dword_BA9E10[0x12E] + 1); /*0x98d679*/
      }
      if ( (unsigned int)strlen((const char *)&dword_BA9E10[0x12E] + 1) + 1 > 0x3C ) /*0x98d68c*/
      {
        v8 = (char *)&dword_BA9E10[0x11F] + strlen((const char *)&dword_BA9E10[0x12E] + 1) + 2; /*0x98d697*/
        HIDWORD(v21) = "..."; /*0x98d6a0*/
        LODWORD(v21) = (char *)&dword_BA9E10[0x1ED] - v8; /*0x98d6a7*/
        v9 = strncpy_s(v8, v21, (const char *)3, *(rsize_t *)&v22[4]); /*0x98d6a9*/
        if ( v9 ) /*0x98d6b3*/
          _invoke_watson(v9, v10, v11, 0x314, i, 0); /*0x98d6bc*/
      }
      *(_DWORD *)&v22[4] = "\n\n"; /*0x98d6c8*/
      *(_DWORD *)v22 = 0x314; /*0x98d6cd*/
      v12 = strcat_s((char *)&dword_BA9E10[0x128], *(rsize_t *)v22, *(const char **)&v22[8]); /*0x98d6cf*/
      if ( v12 ) /*0x98d6d9*/
        _invoke_watson(v12, v13, v14, 0x314, i, 0); /*0x98d6e0*/
      HIDWORD(v23) = (&off_B311EC)[2 * i]; /*0x98d6e8*/
      LODWORD(v23) = 0x314; /*0x98d6ef*/
      v15 = strcat_s((char *)&dword_BA9E10[0x128], v23, v24); /*0x98d6f1*/
      if ( v15 ) /*0x98d6fb*/
        _invoke_watson(v15, v16, v17, 0x314, i, 0); /*0x98d702*/
      sub_99CB44((HMODULE)i, (int)&dword_BA9E10[0x128], (int)"Microsoft Visual C++ Runtime Library", 0x12010); /*0x98d715*/
    }
  }
}
