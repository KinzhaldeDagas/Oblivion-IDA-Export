char __thiscall TESActorBase_CanFightInWater(int this)
{
  if ( *(_BYTE *)(this + 4) == 0x24 /*0x519cb7*/
    && ((*(_DWORD *)(this + 0x28) & 0x10) == 0 && (*(_BYTE *)(this + 0x28) & 1) == 0
     || (*(_DWORD *)(this + 0x28) & 0x40000) != 0) )
  {
    return TESActorBase_CanFightInWater_::Return_0(); /*0x519ca7*/
  }
  else
  {
    return TESActorBase_CanFightInWater_::Return_1(); /*0x519cb8*/
  }
}
