int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop_next@<eax>(
        int a1@<ebp>,
        int eax0@<eax>,
        int a3@<ebx>,
        _BYTE *a4@<esi>,
        int a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(eax0 + 4); /*0x467fc8*/
  if ( v5 ) /*0x467fcd*/
    return TESActorBaseData_SetSharedPlayerFactionFlags_::PlayerFactionLoop(a1, v5, a4, a3, a5); /*0x467fcd*/
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next(a1, a5); /*0x467fcf*/
}
