int __thiscall sub_5E0CE0(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, _DWORD **, _DWORD, _DWORD, _DWORD))(**(this + 0x16) + 0x2CC))(
           *(this + 0x16),
           this,
           LODWORD(Vector3_InitValue_),
           *((_DWORD *)&Vector3_InitValue_ + 1),
           LODWORD(dword_B3F9B0));
}
