char __thiscall sub_431D10(_DWORD *this, int a2)
{
  int v3; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x10))( /*0x431d27*/
          this,
          *(_DWORD *)(a2 + 0x10),
          *(_DWORD *)(a2 + 0x14)) )
    return 0; /*0x431d53*/
  v3 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x1C))( /*0x431d3c*/
         this,
         *(_DWORD *)(a2 + 0x10),
         *(_DWORD *)(a2 + 0x14));
  InterlockedDecrement((volatile LONG *)(*(this + 0xB) + 4 * v3)); /*0x431d45*/
  return 1; /*0x431d4b*/
}
