int __thiscall TESActorBase_SetAutoCalc(_BYTE *this, char a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  if ( *(this + 4) == 0x23 ) /*0x519d64*/
  {
    v2 = this + 0x24; /*0x519d66*/
    if ( a2 ) /*0x519d6e*/
      v2[1] |= 0x10u; /*0x519d70*/
    else
      v2[1] &= ~0x10u; /*0x519d76*/
    return (*(int (__thiscall **)(_DWORD *, int))(*v2 + 0x50))(v2, 0x10); /*0x519d87*/
  }
  return result; /*0x519d89*/
}
