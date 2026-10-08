// positive sp value has been detected, the output may be wrong!
void __userpurge TESActorBaseData_SetFactionRank_::SetExistingEntryRank(
        __int64 a1@<edx:eax>,
        int a2@<ecx>,
        int a3,
        int a4)
{
  _DWORD *v4; // ecx

  BYTE4(a1) = a4; /*0x467631*/
  if ( (_BYTE)a4 == 0xFF ) /*0x467638*/
  {
    v4 = *(_DWORD **)(a1 + 4); /*0x46763a*/
    if ( v4 ) /*0x46763f*/
    {
      *(_DWORD *)(a1 + 4) = v4[1]; /*0x467644*/
      *(_DWORD *)a1 = *v4; /*0x46764a*/
      FormHeapFree((unsigned int)v4); /*0x46764c*/
    }
    else
    {
      *(_DWORD *)a1 = 0; /*0x46765a*/
    }
  }
  else
  {
    TESActorBaseData_SetFactionRank_::SetRank(a1, a2, a3, a4); /*0x467638*/
  }
}
