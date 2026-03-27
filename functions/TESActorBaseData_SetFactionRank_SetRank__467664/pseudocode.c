// positive sp value has been detected, the output may be wrong!
__int64 __userpurge TESActorBaseData_SetFactionRank_::SetRank@<edx:eax>(
        __int64 result@<edx:eax>,
        int a2@<ecx>,
        int a3,
        int a4)
{
  *(_BYTE *)(a2 + 4) = BYTE4(result);
  return result;
}
