int __thiscall sub_7120F0(_DWORD *this, int a2)
{
  int result; // eax
  int (__thiscall *v4)(_DWORD *); // edx

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( (_BYTE)result )
  {
    v4 = *(int (__thiscall **)(_DWORD *))(*this + 0x3C);
    *(this + 0x87) = a2;
    result = v4(this);
  }
  *(this + 0x87) = 0;
  return result;
}
