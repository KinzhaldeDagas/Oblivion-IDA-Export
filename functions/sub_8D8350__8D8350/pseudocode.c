int __thiscall sub_8D8350(_DWORD *this)
{
  int (__thiscall ***v1)(_DWORD, int); // ecx
  int result; // eax

  v1 = (int (__thiscall ***)(_DWORD, int))*(this + 0x40); /*0x8d8350*/
  if ( v1 ) /*0x8d8358*/
    return (**v1)(v1, 1); /*0x8d835e*/
  return result; /*0x8d8360*/
}
