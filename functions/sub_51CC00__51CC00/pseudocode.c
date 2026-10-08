char __thiscall sub_51CC00(int this)
{
  unsigned __int8 v1; // bl
  __int16 Level; // ax

  v1 = *(_BYTE *)(this + 0x105); /*0x51cc0c*/
  if ( (*(_DWORD *)(this + 0x28) & 0x80) == 0 ) /*0x51cc12*/
    return *(_BYTE *)(this + 0x105); /*0x51cc6d*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0x24)); /*0x51cc17*/
  if ( Level < 1 ) /*0x51cc23*/
    Level = 1; /*0x51cc25*/
  return (int)(*(float *)&dword_B361CC[0x36] * (double)Level + (double)v1); /*0x51cc69*/
}
