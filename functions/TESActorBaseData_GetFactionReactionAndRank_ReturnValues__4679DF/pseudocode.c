// positive sp value has been detected, the output may be wrong!
int __userpurge TESActorBaseData_GetFactionReactionAndRank_::ReturnValues@<eax>(int a1@<ebx>, int a2, _DWORD *a3)
{
  int result; // eax
  int v4; // [esp-Ch] [ebp-Ch]
  int v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  if ( a1 ) /*0x4679e4*/
  {
    *a3 = v5; /*0x4679f0*/
    return a1; /*0x4679ee*/
  }
  else
  {
    result = v4; /*0x4679f9*/
    if ( v4 == 0x2710 ) /*0x467a02*/
      return 0; /*0x467a15*/
    else
      *a3 = v6; /*0x467a0c*/
  }
  return result; /*0x4679f6*/
}
