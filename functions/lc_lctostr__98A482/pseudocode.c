void __usercall __lc_lctostr(int a1@<edi>, char *Dst, rsize_t SizeInBytes)
{
  errno_t v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = strcpy_s(Dst, SizeInBytes, (const char *)HIDWORD(SizeInBytes)); /*0x98a491*/
  if ( v3 ) /*0x98a49d*/
    _invoke_watson(v3, v4, v5, 0, a1, SHIDWORD(SizeInBytes)); /*0x98a4a4*/
  if ( *(_BYTE *)(HIDWORD(SizeInBytes) + 0x40) ) /*0x98a4af*/
    _strcats((const char *)HIDWORD(SizeInBytes), Dst, (unsigned int)SizeInBytes | 0x200000000LL); /*0x98a4c1*/
  if ( *(_BYTE *)(HIDWORD(SizeInBytes) + 0x80) ) /*0x98a4cf*/
    _strcats((const char *)HIDWORD(SizeInBytes), Dst, (unsigned int)SizeInBytes | 0x200000000LL); /*0x98a4e3*/
}
