int __thiscall TESActorBaseData_GetFactionRank(void *this, int a2, int a3)
{
  if ( this == (void *)0xFFFFFFE8 )
    return TESActorBaseData_GetFactionRank_::Return_Neg1(a2, a3);
  else
    return TESActorBaseData_GetFactionRank_::FactionLoop((int)this + 0x18, a3, a2, a2, a3);
}
