int __thiscall sub_439B90(_DWORD *this, int a2)
{
  int v3; // eax

  v3 = *(this + 0xC); /*0x439b93*/
  if ( v3 ) /*0x439b98*/
    *(_DWORD *)(v3 + 0xC) = 6; /*0x439b9a*/
  QueuedTreeModel_ReleaseBuildResources(this, a2); /*0x439ba6*/
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 2) + 0x10))(
           *((_DWORD *)MEMORY[0xB33A1C] + 2),
           *(this + 8));
}
