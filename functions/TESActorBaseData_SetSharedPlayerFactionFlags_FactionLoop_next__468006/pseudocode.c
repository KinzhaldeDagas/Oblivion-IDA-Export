int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next@<eax>(
        int a1@<ebp>,
        int a2@<ebx>,
        int a3)
{
  _DWORD **v3; // ebp

  v3 = *(_DWORD ***)(a1 + 4); /*0x468006*/
  if ( v3 ) /*0x46800b*/
    return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop(v3, a2, a3); /*0x46800b*/
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::Done_(a3); /*0x46800c*/
}
