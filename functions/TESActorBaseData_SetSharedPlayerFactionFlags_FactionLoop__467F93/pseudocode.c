int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop@<eax>(
        _DWORD **a1@<ebp>,
        int a2@<ebx>,
        int a3)
{
  _BYTE *v3; // esi
  UInt32 *p_refID; // eax

  if ( !*a1 ) /*0x467f93*/
    return TESActorBaseData_SetSharedPlayerFactionFlags_::Done_(a3); /*0x467f98*/
  v3 = (_BYTE *)**a1; /*0x467fa0*/
  p_refID = &Actor_GetActorBaseForm((Actor *)reference, 0)[2].member.refID; /*0x467fa9*/
  if ( p_refID ) /*0x467fac*/
    return TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop((int)a1, (int)p_refID, v3, a2, a3); /*0x467faf*/
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next((int)a1, a3); /*0x467fac*/
}
