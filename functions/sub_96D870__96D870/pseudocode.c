int __thiscall sub_96D870(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*(this + 0xD); /*0x96d873*/
  if ( v2 ) /*0x96d878*/
    result = (**v2)(v2, 1); /*0x96d880*/
  *(this + 0xD) = 0; /*0x96d882*/
  return result; /*0x96d889*/
}
