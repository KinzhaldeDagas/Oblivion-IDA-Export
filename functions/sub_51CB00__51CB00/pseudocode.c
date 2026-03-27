char __thiscall sub_51CB00(int this)
{
  unsigned __int8 v1; // bl
  __int16 Level; // ax

  v1 = *(_BYTE *)(this + 0x107);
  if ( (*(_DWORD *)(this + 0x28) & 0x80) == 0 )
    return *(_BYTE *)(this + 0x107);
  Level = TESActorBaseData_GetLevel((TESActorBaseData *)(this + 0x24));
  if ( Level < 1 )
    Level = 1;
  return (int)(fCreatureCalcStealth * (double)Level + (double)v1);
}
