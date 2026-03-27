int __cdecl sub_7A2560(char *a1)
{
  char *v1; // ecx
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v1 = a1;
  if ( a1 )
  {
    if ( 0xFFFFFFFF / (unsigned int)a1 < 0x54 )
    {
      a1 = 0;
      std::exception::exception((std::exception *)v3, (const char *const *)&a1);
      v3[0] = &std::bad_alloc::`vftable';
      ThrowException__((int)v3, &_TI2_AVbad_alloc_std__);
    }
  }
  else
  {
    v1 = 0;
  }
  return FormHeapAlloc(0x54 * (_DWORD)v1);
}
