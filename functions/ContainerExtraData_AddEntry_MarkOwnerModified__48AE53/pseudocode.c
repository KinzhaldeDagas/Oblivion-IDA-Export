int __usercall ContainerExtraData_AddEntry_::MarkOwnerModified@<eax>(
        int *a1@<ebx>,
        _DWORD *a2@<ebp>,
        _DWORD **edi0@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  _DWORD *v10; // ecx

  v10 = edi0[1];
  if ( v10 != a2 )
    (*(void (__thiscall **)(_DWORD *, int))(*v10 + 0x40))(v10, 0x8000000);
  return ContainerExtraData_AddEntry_::GetExistingEntry(a1, (int)a2, edi0, a4, a5, a6, a7, a8, a9, a10);
}
