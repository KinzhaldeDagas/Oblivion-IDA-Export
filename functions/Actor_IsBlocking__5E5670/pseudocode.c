// Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
bool __thiscall Actor_IsBlocking(_DWORD *this)
{
  return *(this + 0x16) && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0x16) + 0x2D0))(*(this + 0x16)) == 6; /*0x5e568a*/
}
