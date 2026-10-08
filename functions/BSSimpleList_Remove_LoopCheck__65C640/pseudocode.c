void __userpurge BSSimpleList_Remove_::LoopCheck(
        _DWORD *a1@<eax>,
        int a2@<edi>,
        _DWORD *a3@<ecx>,
        _DWORD *a4@<esi>,
        int a5@<edx>,
        int a6)
{
  if ( *a1 == a2 ) /*0x65c642*/
    BSSimpleList_Remove_::FoundData(a1, a3, a4, a5, a6); /*0x65c642*/
  else
    BSSimpleList_Remove_::LoopNext((int)a1, (int)a3, a2, (int)a4, a6); /*0x65c643*/
}
