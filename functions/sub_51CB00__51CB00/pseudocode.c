char __thiscall sub_51CB00(int this)
{
  unsigned __int8 v1; // bl
  __int16 Level; // ax

  v1 = *(_BYTE *)(this + 0x107); /*0x51cb0c*/
  if ( (*(_DWORD *)(this + 0x28) & 0x80) == 0 ) /*0x51cb12*/
    return *(_BYTE *)(this + 0x107); /*0x51cb6d*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0x24)); /*0x51cb17*/
  if ( Level < 1 ) /*0x51cb23*/
    Level = 1; /*0x51cb25*/
  return (int)(*(float *)&dword_B361CC[0x3A] * (double)Level + (double)v1); /*0x51cb69*/
}
