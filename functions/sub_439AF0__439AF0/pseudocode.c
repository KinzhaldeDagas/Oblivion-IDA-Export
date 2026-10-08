int __thiscall sub_439AF0(_DWORD *this, int a2)
{
  QueuedTreeModel_ReleaseBuildResources(this, a2); /*0x439af8*/
  return (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)MEMORY[0xB33A1C] + 3) + 0x10))(
           *((_DWORD *)MEMORY[0xB33A1C] + 3),
           *(this + 0xD));
}
