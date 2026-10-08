void __thiscall sub_642A40(_DWORD *this, int a2)
{
  QueuedTreeModel_ReleaseBuildResources(this, a2); /*0x642a49*/
  if ( !(_BYTE)a2 ) /*0x642a50*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0xC) + 0x10))(*(this + 0xC), *(this + 0xA)); /*0x642a63*/
}
