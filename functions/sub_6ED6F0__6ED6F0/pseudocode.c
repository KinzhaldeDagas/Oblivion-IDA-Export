int __thiscall sub_6ED6F0(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*(this + 0x10); /*0x6ed6f3*/
  if ( v2 ) /*0x6ed6f8*/
    result = (**v2)(v2, 1); /*0x6ed700*/
  *(this + 0x10) = 0; /*0x6ed702*/
  return result; /*0x6ed709*/
}
