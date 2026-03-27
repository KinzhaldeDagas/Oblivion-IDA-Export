void __usercall _strcats(const char *a1@<esi>, char *Dst, rsize_t SizeInBytes)
{
  int v3; // edi
  _DWORD *v4; // esi
  errno_t v5; // eax
  int v6; // edx
  int v7; // ecx
  rsize_t v8; // [esp-Ch] [ebp-14h]
  const char *v9; // [esp-4h] [ebp-Ch]

  v3 = HIDWORD(SizeInBytes);
  if ( SHIDWORD(SizeInBytes) > 0 )
  {
    v9 = a1;
    v4 = (_DWORD *)&SizeInBytes + 1;
    do
    {
      HIDWORD(v8) = *++v4;
      LODWORD(v8) = SizeInBytes;
      v5 = strcat_s(Dst, v8, v9);
      if ( v5 )
        _invoke_watson(v5, v6, v7, 0, v3, (int)v4);
      --v3;
    }
    while ( v3 );
  }
}
