__int16 __thiscall sub_51CAA0(int this)
{
  __int16 v1; // si
  __int16 Level; // ax

  v1 = *(_WORD *)(this + 8); /*0x51caa9*/
  if ( (*(_DWORD *)(this + 4) & 0x80) == 0 ) /*0x51caad*/
    return *(_WORD *)(this + 8); /*0x51caca*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)this); /*0x51cab4*/
  if ( Level < 1 ) /*0x51cabb*/
    Level = 1; /*0x51cabd*/
  return v1 * Level; /*0x51cac8*/
}
