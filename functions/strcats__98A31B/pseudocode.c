void __usercall _strcats(const char *a1@<esi>, char *Dst, rsize_t SizeInBytes)
{
  int v3; // edi
  _DWORD *v4; // esi
  errno_t v5; // eax
  int v6; // edx
  int v7; // ecx
  rsize_t v8; // [esp-Ch] [ebp-14h]
  const char *v9; // [esp-4h] [ebp-Ch]

  v3 = HIDWORD(SizeInBytes); /*0x98a31d*/
  if ( SHIDWORD(SizeInBytes) > 0 ) /*0x98a325*/
  {
    v9 = a1; /*0x98a327*/
    v4 = (_DWORD *)&SizeInBytes + 1; /*0x98a328*/
    do /*0x98a353*/
    {
      HIDWORD(v8) = *++v4; /*0x98a32f*/
      LODWORD(v8) = SizeInBytes; /*0x98a331*/
      v5 = strcat_s(Dst, v8, v9); /*0x98a339*/
      if ( v5 ) /*0x98a343*/
        _invoke_watson(v5, v6, v7, 0, v3, (int)v4); /*0x98a34a*/
      --v3; /*0x98a352*/
    }
    while ( v3 ); /*0x98a353*/
  }
}
