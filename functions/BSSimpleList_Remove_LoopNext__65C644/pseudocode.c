int __userpurge BSSimpleList_Remove_::LoopNext@<eax>(int a1@<eax>, int a2@<ecx>, int a3@<edi>, int a4@<esi>, int a5)
{
  _DWORD *v6; // eax

  v6 = *(_DWORD **)(a1 + 4);
  if ( v6 )
    return BSSimpleList_Remove_::LoopCheck(v6, a3, a2, a4, a1, a5);
  else
    return BSSimpleList_Remove_::Done__(a5);
}
