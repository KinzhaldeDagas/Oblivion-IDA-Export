void __userpurge BSSimpleList_Remove_::LoopNext(int a1@<eax>, _DWORD *a2@<ecx>, int a3@<edi>, _DWORD *a4@<esi>, int a5)
{
  _DWORD *v6; // eax

  v6 = *(_DWORD **)(a1 + 4); /*0x65c646*/
  if ( v6 ) /*0x65c64b*/
    BSSimpleList_Remove_::LoopCheck(v6, a3, a2, a4, a1, a5); /*0x65c64b*/
  else
    BSSimpleList_Remove_::Done__(a5); /*0x65c64c*/
}
