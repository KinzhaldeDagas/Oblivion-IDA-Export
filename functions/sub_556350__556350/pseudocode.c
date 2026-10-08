_DWORD *__cdecl sub_556350(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1; /*0x556350*/
  if ( a1 ) /*0x556359*/
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 < 0x40 ) /*0x556377*/
    {
      a1 = 0; /*0x556382*/
      std::exception::exception((std::exception *)v3, (const char **)&a1); /*0x55638a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x556399*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x5563a1*/
    }
  }
  else
  {
    v1 = 0; /*0x55635b*/
  }
  return (_DWORD *)FormHeapAlloc((_DWORD)v1 << 6); /*0x556369*/
}
