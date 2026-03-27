char __thiscall sub_6ECA30(float *this, int a2)
{
  char result; // al

  result = sub_715820(this, a2);
  if ( result )
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x10) + 0x2C))(
             *((_DWORD *)this + 0x10),
             *(_DWORD *)(a2 + 0x40)) != 0;
  return result;
}
