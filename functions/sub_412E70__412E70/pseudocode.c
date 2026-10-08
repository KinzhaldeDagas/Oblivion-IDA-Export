_DWORD *__cdecl sub_412E70(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1; /*0x412e70*/
  if ( a1 ) /*0x412e79*/
  {
    if ( !(0xFFFFFFFF / (unsigned int)a1) ) /*0x412e8f*/
    {
      a1 = 0; /*0x412e9f*/
      std::exception::exception((std::exception *)v3, (const char **)&a1); /*0x412ea7*/
      v3[0] = &std::bad_alloc::`vftable'; /*0x412eb6*/
      ThrowException__((DWORD)v3, &_TI2_AVbad_alloc_std__); /*0x412ebe*/
    }
  }
  else
  {
    v1 = 0; /*0x412e7b*/
  }
  return (_DWORD *)FormHeapAlloc((unsigned int)v1); /*0x412e86*/
}
