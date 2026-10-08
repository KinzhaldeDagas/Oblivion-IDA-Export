_DWORD *__cdecl sub_5563E0(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1; /*0x5563e0*/
  if ( a1 ) /*0x5563e9*/
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 < 0x20 ) /*0x556407*/
    {
      a1 = 0; /*0x556412*/
      std::exception::exception((std::exception *)v3, (const char **)&a1); /*0x55641a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x556429*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x556431*/
    }
  }
  else
  {
    v1 = 0; /*0x5563eb*/
  }
  return (_DWORD *)FormHeapAlloc(0x20 * (_DWORD)v1); /*0x5563f9*/
}
