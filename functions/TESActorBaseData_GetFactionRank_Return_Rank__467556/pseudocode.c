// positive sp value has been detected, the output may be wrong!
int __userpurge TESActorBaseData_GetFactionRank_::Return_Rank@<eax>(int a1@<eax>, int a2, int a3)
{
  return *(char *)(a1 + 4);
}
