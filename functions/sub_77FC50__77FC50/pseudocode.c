int __thiscall sub_77FC50(_DWORD *this, int a2)
{
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 )
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 0x64))(this, 0x34, 1, 0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
      this,
      0x38,
      *(this + (*(unsigned __int16 *)(a2 + 0x18) >> 0xC) + 0x27),
      0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(this, 0x39, *(_DWORD *)(a2 + 0x1C), 0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(this, 0x3A, *(_DWORD *)(a2 + 0x20), 0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
      this,
      0x35,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 1) & 7) + 0x2F),
      0);
    (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
      this,
      0x36,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 4) & 7) + 0x2F),
      0);
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(
      0x37,
      *(this + ((*(unsigned __int16 *)(a2 + 0x18) >> 7) & 7) + 0x2F),
      0);
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(0x34, 0, 0);
  }
  return (*(int (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*this + 0x64))(
           this,
           0x16,
           *(this + 2 * ((*(unsigned __int16 *)(a2 + 0x18) >> 0xA) & 3) + *(this + 0x3D) + 0x35),
           0);
}
