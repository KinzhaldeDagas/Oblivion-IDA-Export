// Oblivion comparison: absent faction always allocates an entry, including rank -1 removal requests; allocation is unchecked.
void __userpurge TESActorBaseData_SetFactionRank_::NewFactionEntry(
        int a1@<edi>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        char a6)
{
  int v6; // eax

  v6 = FormHeapAlloc(8u); /*0x467613*/
  *(_BYTE *)(v6 + 4) = a6;                      // Oblivion runtime counterpart of editor faction-entry null-write; comparison only, not patched by CSUP. /*0x46761f*/
  *(_DWORD *)v6 = a1; /*0x467625*/
  BSSimpleList_PushFront(a2, v6); /*0x467627*/
  TESActorBaseData_SetFactionRank_::Done(a3, a4); /*0x467628*/
}
