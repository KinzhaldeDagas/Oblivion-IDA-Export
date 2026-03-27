int __usercall BSSimpleList_Clear_::DeleteNextNodeLoop@<eax>(int a1@<esi>)
{
  int v1; // edi

  do
  {
    v1 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    FormHeapFree(*(_DWORD *)(a1 + 4));
    *(_DWORD *)(a1 + 4) = v1;
  }
  while ( v1 );
  return BSSimpleList_Clear_::ClearThisNodeData();
}
