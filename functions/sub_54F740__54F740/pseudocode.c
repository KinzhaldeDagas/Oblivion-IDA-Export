_DWORD *__cdecl sub_54F740(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1; /*0x54f740*/
  if ( a1 ) /*0x54f749*/
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 < 0x34 ) /*0x54f767*/
    {
      a1 = 0; /*0x54f772*/
      std::exception::exception((std::exception *)v3, (const char **)&a1); /*0x54f77a*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x54f789*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x54f791*/
    }
  }
  else
  {
    v1 = 0; /*0x54f74b*/
  }
  return (_DWORD *)FormHeapAlloc(0x34 * (_DWORD)v1); /*0x54f759*/
}
