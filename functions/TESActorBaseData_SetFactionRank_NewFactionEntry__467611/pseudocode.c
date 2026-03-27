int __userpurge TESActorBaseData_SetFactionRank_::NewFactionEntry@<eax>(
        int a1@<edi>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        char a6)
{
  int v6; // eax

  v6 = FormHeapAlloc(8u);
  *(_BYTE *)(v6 + 4) = a6;
  *(_DWORD *)v6 = a1;
  BSSimpleList_PushFront(a2, v6);
  return TESActorBaseData_SetFactionRank_::Done(a3, a4);
}
