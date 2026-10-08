// 3DTheft decode: Actor_SetMovementFlag wrapper calls process vfunc +0x2C4 with enabled=true.
int __thiscall sub_5E0610(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e0610*/
    return (*(int (__thiscall **)(_DWORD, int, int))(**(this + 0x16) + 0x2C4))(*(this + 0x16), a2, 1); /*0x5e0628*/
  return result; /*0x5e062a*/
}
