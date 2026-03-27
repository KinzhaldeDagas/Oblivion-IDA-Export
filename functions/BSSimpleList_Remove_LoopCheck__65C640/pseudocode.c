int __userpurge BSSimpleList_Remove_::LoopCheck@<eax>(
        _DWORD *a1@<eax>,
        int a2@<edi>,
        int a3@<ecx>,
        int a4@<esi>,
        int a5@<edx>,
        int a6)
{
  if ( *a1 == a2 )
    return BSSimpleList_Remove_::FoundData((int)a1, a3, a4, a5, a6);
  else
    return BSSimpleList_Remove_::LoopNext((int)a1, a3, a2, a4, a6);
}
