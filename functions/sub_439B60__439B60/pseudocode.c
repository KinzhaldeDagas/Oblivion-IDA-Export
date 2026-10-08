int __thiscall sub_439B60(_DWORD *this, int a2)
{
  QueuedTreeModel_ReleaseBuildResources(this, a2); /*0x439b68*/
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 4) + 0x10))(
           *((_DWORD *)MEMORY[0xB33A1C] + 4),
           *(this + 0xC));
}
