char __thiscall sub_51CB80(int this)
{
  unsigned __int8 v1; // bl
  __int16 Level; // ax

  v1 = *(_BYTE *)(this + 0x106); /*0x51cb8c*/
  if ( (*(_DWORD *)(this + 0x28) & 0x80) == 0 ) /*0x51cb92*/
    return *(_BYTE *)(this + 0x106); /*0x51cbed*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0x24)); /*0x51cb97*/
  if ( Level < 1 ) /*0x51cba3*/
    Level = 1; /*0x51cba5*/
  return (int)(*(float *)&dword_B361CC[0x38] * (double)Level + (double)v1); /*0x51cbe9*/
}
