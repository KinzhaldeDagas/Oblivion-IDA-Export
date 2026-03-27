void __usercall __lc_lctostr(int a1@<edi>, char *Dst, rsize_t SizeInBytes)
{
  errno_t v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = strcpy_s(Dst, SizeInBytes, (const char *)HIDWORD(SizeInBytes));
  if ( v3 )
    _invoke_watson(v3, v4, v5, 0, a1, SHIDWORD(SizeInBytes));
  if ( *(_BYTE *)(HIDWORD(SizeInBytes) + 0x40) )
    _strcats((const char *)HIDWORD(SizeInBytes), Dst, (unsigned int)SizeInBytes | 0x200000000LL);
  if ( *(_BYTE *)(HIDWORD(SizeInBytes) + 0x80) )
    _strcats((const char *)HIDWORD(SizeInBytes), Dst, (unsigned int)SizeInBytes | 0x200000000LL);
}
