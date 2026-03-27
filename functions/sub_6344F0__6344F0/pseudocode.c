int __thiscall sub_6344F0(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int (__thiscall *v5)(_DWORD *); // eax

  *(this + a2 + 0xB2) = a3;
  *((_BYTE *)this + a2 + 0x2DC) = 1;
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x4CC))(this);
  if ( *(this + 0xB9) != result )
  {
    v5 = *(int (__thiscall **)(_DWORD *))(*this + 0x4CC);
    *((_BYTE *)this + 0x2E8) = 0;
    result = v5(this);
    *(this + 0xB9) = result;
  }
  return result;
}
