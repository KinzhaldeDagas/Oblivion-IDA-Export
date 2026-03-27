int __thiscall sub_634680(_DWORD *this)
{
  int (*v2)(void); // edx
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  v2 = *(int (**)(void))(*this + 0x4CC);
  *(this + 0xB5) = 0;
  *((_BYTE *)this + 0x2DF) = 0;
  result = v2();
  if ( *(this + 0xB9) != result )
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC);
    *((_BYTE *)this + 0x2E8) = 0;
    result = v4(this);
    *(this + 0xB9) = result;
  }
  return result;
}
