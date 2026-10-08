int __thiscall sub_659BC0(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*(this + 0x16); /*0x659bc3*/
  if ( v2 ) /*0x659bc8*/
    result = (**v2)(v2, 1); /*0x659bd0*/
  *(this + 0x16) = 0; /*0x659bd2*/
  return result; /*0x659bd9*/
}
