void __usercall ContainerExtraData_destr_::MarkOwnerAsModified(unsigned int *a1@<edi>, _DWORD *a2@<esi>)
{
  *a2 = 0; /*0x48957f*/
  if ( a1[1] ) /*0x489585*/
    (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)a1[1] + 0x44))(a1[1], 0x8000000); /*0x489598*/
  ContainerExtraData_destr_::DeallocEntryList(a1); /*0x489599*/
}
