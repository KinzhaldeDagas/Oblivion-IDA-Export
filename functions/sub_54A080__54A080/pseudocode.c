int __thiscall sub_54A080(_DWORD *this)
{
  int (__thiscall ***v2)(_DWORD, int); // ecx
  int result; // eax

  v2 = (int (__thiscall ***)(_DWORD, int))*(this + 3); /*0x54a083*/
  if ( v2 ) /*0x54a088*/
    result = (**v2)(v2, 1); /*0x54a090*/
  *(this + 3) = 0; /*0x54a092*/
  return result; /*0x54a099*/
}
