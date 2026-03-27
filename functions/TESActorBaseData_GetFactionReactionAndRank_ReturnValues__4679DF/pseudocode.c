// positive sp value has been detected, the output may be wrong!
int __userpurge TESActorBaseData_GetFactionReactionAndRank_::ReturnValues@<eax>(int a1@<ebx>, int a2, _DWORD *a3)
{
  int result; // eax
  int v4; // [esp-Ch] [ebp-Ch]
  int v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  if ( a1 )
  {
    *a3 = v5;
    return a1;
  }
  else
  {
    result = v4;
    if ( v4 == 0x2710 )
      return 0;
    else
      *a3 = v6;
  }
  return result;
}
