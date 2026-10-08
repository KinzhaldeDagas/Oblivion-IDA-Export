unsigned int __thiscall TESActorBaseData_GetFactionRank(int *this, int a2, int a3)
{
  if ( this == (int *)0xFFFFFFE8 ) /*0x467518*/
    return TESActorBaseData_GetFactionRank_::Return_Neg1(a2, a3); /*0x467518*/
  else
    return TESActorBaseData_GetFactionRank_::FactionLoop(this + 6, a3, a2, a2, a3); /*0x46751f*/
}
