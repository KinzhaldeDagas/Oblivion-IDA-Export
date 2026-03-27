int __thiscall sub_6B6D40(int *this, float a2, float a3, int a4)
{
  int result; // eax

  result = *this;
  if ( (*this & 1) == 0 && (result & 2) != 0 )
  {
    result = *(this + 0x15);
    if ( result )
    {
      (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)result + 0x40))(result, LODWORD(a3), a4);
      (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x15) + 0x44))(*(this + 0x15), LODWORD(a2), a4);
      result = (__int64)(a3 * dbl_A76F60);
      *(this + 0xE) = result;
    }
  }
  return result;
}
