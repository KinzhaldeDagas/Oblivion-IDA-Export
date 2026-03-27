int __userpurge TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop_next@<eax>(int a1@<ebp>, int a2)
{
  int **v2; // ebp

  v2 = *(int ***)(a1 + 4);
  if ( v2 )
    return TESActorBaseData_SetSharedPlayerFactionFlags_::FactionLoop(v2, a2);
  else
    return TESActorBaseData_SetSharedPlayerFactionFlags_::Done_(a2);
}
