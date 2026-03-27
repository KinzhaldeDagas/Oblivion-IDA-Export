__int16 __thiscall sub_51CAA0(int this)
{
  __int16 v1; // si
  __int16 Level; // ax

  v1 = *(_WORD *)(this + 8);
  if ( (*(_DWORD *)(this + 4) & 0x80) == 0 )
    return *(_WORD *)(this + 8);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)this);
  if ( Level < 1 )
    Level = 1;
  return v1 * Level;
}
