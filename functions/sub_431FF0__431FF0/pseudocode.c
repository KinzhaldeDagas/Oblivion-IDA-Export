char __thiscall sub_431FF0(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // esi

  *(_DWORD *)(a2 + 0xC) = 1;
  InterlockedIncrement((volatile LONG *)(a2 + 8));
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD, int, _DWORD))(*this + 0xC))(
          this,
          *(_DWORD *)(a2 + 0x10),
          *(_DWORD *)(a2 + 0x14),
          a2,
          0) )
    return 0;
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x1C))(
         this,
         *(_DWORD *)(a2 + 0x10),
         *(_DWORD *)(a2 + 0x14));
  InterlockedIncrement((volatile LONG *)(*(this + 0xB) + 4 * v3));
  v4 = *(_DWORD *)(*(this + 0xA) + 4 * (*(int (__thiscall **)(_DWORD *, int))(*this + 0x4C))(this, a2));
  v5 = v4 + 0xC;
  if ( !*(_DWORD *)(v4 + 0xC) )
  {
    InterlockedIncrement((volatile LONG *)(v4 + 0xC));
    ReleaseSemaphore(*(HANDLE *)(v5 + 8), 1, 0);
  }
  return 1;
}
