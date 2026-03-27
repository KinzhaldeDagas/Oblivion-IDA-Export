// positive sp value has been detected, the output may be wrong!
void __userpurge TESActorBaseData_SetFactionRank_::SetExistingEntryRank(_DWORD *a1@<eax>, int a2, int a3)
{
  _DWORD *v3; // ecx

  if ( (_BYTE)a3 == 0xFF )
  {
    v3 = (_DWORD *)a1[1];
    if ( v3 )
    {
      a1[1] = v3[1];
      *a1 = *v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *a1 = 0;
    }
  }
  else
  {
    TESActorBaseData_SetFactionRank_::SetRank(a2, a3);
  }
}
