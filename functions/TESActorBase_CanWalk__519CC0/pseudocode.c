bool __thiscall TESActorBase_CanWalk(_BYTE *this)
{
  bool result; // al

  result = 1; /*0x519cc4*/
  if ( *(this + 4) == 0x24 && (*((_DWORD *)this + 0xA) & 0x40) == 0 ) /*0x519cd0*/
    return (*(this + 0x28) & 1) != 0; /*0x519cd7*/
  return result; /*0x519cd9*/
}
