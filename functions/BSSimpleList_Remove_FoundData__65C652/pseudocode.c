void __userpurge BSSimpleList_Remove_::FoundData(
        _DWORD *a1@<eax>,
        _DWORD *a2@<ecx>,
        _DWORD *a3@<esi>,
        int a4@<edx>,
        int a5)
{
  if ( a1 == a2 ) /*0x65c654*/
  {
    if ( a3 ) /*0x65c658*/
      BSSimpleList_Remove_::DeleteFirstEntry(a2, a3, a5); /*0x65c659*/
    else
      BSSimpleList_Remove_::ClearFirstData(a2, a5); /*0x65c658*/
  }
  else
  {
    BSSimpleList_Remove_::DeleteEntry((unsigned int)a1, a4, a5); /*0x65c654*/
  }
}
