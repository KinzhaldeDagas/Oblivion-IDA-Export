int __thiscall sub_91C470(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int result; // eax

  if ( this ) /*0x91c477*/
    v3 = this + 0xA; /*0x91c479*/
  else
    v3 = 0; /*0x91c47e*/
  sub_8989E0(**(int ***)(*(this + 0xC) + 4 * a2), (int)v3); /*0x91c48d*/
  sub_898A80(**(int ***)(*(this + 0xC) + 4 * a2), (int)(this + 0xB)); /*0x91c49e*/
  sub_91BEF0(this, a2); /*0x91c4a6*/
  v4 = *(_DWORD *)(*(this + 0xC) + 4 * a2); /*0x91c4ae*/
  if ( v4 ) /*0x91c4b3*/
  {
    v5 = *(_DWORD *)(v4 + 0xC); /*0x91c4b5*/
    if ( v5 >= 0 ) /*0x91c4ba*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91c4cc*/
      if ( !v6 ) /*0x91c4d4*/
        v6 = unk_BA7D9C; /*0x91c4d6*/
      sub_8A75D0(v6, *(_DWORD **)(v4 + 4), 4 * v5, 0x14); /*0x91c4eb*/
    }
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v4, 0x10, 0x32); /*0x91c4fd*/
  }
  result = *(this + 0xD) - 1; /*0x91c503*/
  *(this + 0xD) = result; /*0x91c504*/
  *(_DWORD *)(*(this + 0xC) + 4 * a2) = *(_DWORD *)(*(this + 0xC) + 4 * result); /*0x91c50d*/
  return result; /*0x91c510*/
}
