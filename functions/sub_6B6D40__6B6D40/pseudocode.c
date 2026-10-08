int __thiscall sub_6B6D40(int *this, float a2, float a3, int a4)
{
  int result; // eax

  result = *this; /*0x6b6d46*/
  if ( (*this & 1) == 0 && (result & 2) != 0 ) /*0x6b6d4e*/
  {
    result = *(this + 0x15); /*0x6b6d50*/
    if ( result ) /*0x6b6d55*/
    {
      (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)result + 0x40))(result, LODWORD(a3), a4); /*0x6b6d6b*/
      (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x15) + 0x44))(*(this + 0x15), LODWORD(a2), a4); /*0x6b6d7f*/
      result = (__int64)(a3 * dbl_A76F60); /*0x6b6da6*/
      *(this + 0xE) = result; /*0x6b6daa*/
    }
  }
  return result; /*0x6b6db1*/
}
