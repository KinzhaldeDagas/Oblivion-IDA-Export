char __thiscall sub_51CB80(int this)
{
  unsigned __int8 v1; // bl
  __int16 Level; // ax

  v1 = *(_BYTE *)(this + 0x106);
  if ( (*(_DWORD *)(this + 0x28) & 0x80) == 0 )
    return *(_BYTE *)(this + 0x106);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0x24));
  if ( Level < 1 )
    Level = 1;
  return (int)(flt_B362AC * (double)Level + (double)v1);
}
