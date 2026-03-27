char __thiscall TESActorBase_CanFightInWater(int this)
{
  if ( *(_BYTE *)(this + 4) == 0x24
    && ((*(_DWORD *)(this + 0x28) & 0x10) == 0 && (*(_BYTE *)(this + 0x28) & 1) == 0
     || (*(_DWORD *)(this + 0x28) & 0x40000) != 0) )
  {
    return TESActorBase_CanFightInWater_::Return_0();
  }
  else
  {
    return TESActorBase_CanFightInWater_::Return_1();
  }
}
