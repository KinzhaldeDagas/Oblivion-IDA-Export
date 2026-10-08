_DWORD *__cdecl sub_556440(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1; /*0x556440*/
  if ( a1 ) /*0x556449*/
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 < 0x2C ) /*0x556467*/
    {
      a1 = 0; /*0x556472*/
      std::exception::exception((std::exception *)v3, (const char **)&a1); /*0x55647a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x556489*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x556491*/
    }
  }
  else
  {
    v1 = 0; /*0x55644b*/
  }
  return (_DWORD *)FormHeapAlloc(0x2C * (_DWORD)v1); /*0x556459*/
}
