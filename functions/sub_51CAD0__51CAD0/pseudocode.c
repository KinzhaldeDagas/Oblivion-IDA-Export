__int16 __thiscall sub_51CAD0(int this)
{
  __int16 v1; // si
  __int16 Level; // ax

  v1 = *(_WORD *)(this + 0xA); /*0x51cad9*/
  if ( (*(_DWORD *)(this + 4) & 0x80) == 0 ) /*0x51cadd*/
    return *(_WORD *)(this + 0xA); /*0x51cafa*/
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)this); /*0x51cae4*/
  if ( Level < 1 ) /*0x51caeb*/
    Level = 1; /*0x51caed*/
  return v1 * Level; /*0x51caf8*/
}
