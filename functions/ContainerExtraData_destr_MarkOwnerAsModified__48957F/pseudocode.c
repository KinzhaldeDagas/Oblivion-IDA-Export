int __usercall ContainerExtraData_destr_::MarkOwnerAsModified@<eax>(int a1@<edi>, _DWORD *a2@<esi>)
{
  *a2 = 0;
  if ( *(_DWORD *)(a1 + 4) )
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 0x44))(*(_DWORD *)(a1 + 4), 0x8000000);
  return ContainerExtraData_destr_::DeallocEntryList();
}
