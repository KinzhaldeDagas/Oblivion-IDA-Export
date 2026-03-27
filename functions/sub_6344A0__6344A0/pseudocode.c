int __thiscall sub_6344A0(_DWORD *this, int a2)
{
  int v3; // edx
  int (*v4)(void); // eax
  int result; // eax
  int (__thiscall *v6)(_DWORD *); // eax

  v3 = *this;
  *(this + 0xB5) = a2;
  v4 = *(int (**)(void))(v3 + 0x4CC);
  *((_BYTE *)this + 0x2DF) = 1;
  result = v4();
  if ( *(this + 0xB9) != result )
  {
    v6 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC);
    *((_BYTE *)this + 0x2E8) = 0;
    result = v6(this);
    *(this + 0xB9) = result;
  }
  return result;
}
