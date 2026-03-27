int __thiscall sub_96D870(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*(this + 0xD);
  if ( v2 )
    result = (**v2)(v2, 1);
  *(this + 0xD) = 0;
  return result;
}
