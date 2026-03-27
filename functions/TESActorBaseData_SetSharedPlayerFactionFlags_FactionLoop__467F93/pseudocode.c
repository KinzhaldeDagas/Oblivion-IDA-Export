int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop@<eax>(int **a1@<ebp>, int a2)
{
  int v2; // esi
  UInt32 *p_refID; // eax

  if ( !*a1 )
    return TESActorBaseData_SetSharedPlayerFactionFlags_::Done_(a2);
  v2 = **a1;
  p_refID = &Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0)[2].member.refID;
  if ( p_refID )
    return TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop((int)a1, (int)p_refID, v2, a2);
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next((int)a1, a2);
}
