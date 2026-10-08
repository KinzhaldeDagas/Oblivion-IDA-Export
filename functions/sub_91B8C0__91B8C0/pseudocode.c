int __thiscall sub_91B8C0(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int result; // eax

  if ( this ) /*0x91b8c7*/
    v3 = this + 0xA; /*0x91b8c9*/
  else
    v3 = 0; /*0x91b8ce*/
  sub_8989E0(**(int ***)(*(this + 0xC) + 4 * a2), (int)v3); /*0x91b8dd*/
  sub_898A80(**(int ***)(*(this + 0xC) + 4 * a2), (int)(this + 0xB)); /*0x91b8ee*/
  sub_91B5E0(this, a2); /*0x91b8f6*/
  v4 = *(_DWORD *)(*(this + 0xC) + 4 * a2); /*0x91b8fe*/
  if ( v4 ) /*0x91b903*/
  {
    v5 = *(_DWORD *)(v4 + 0xC); /*0x91b905*/
    if ( v5 >= 0 ) /*0x91b90a*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91b91c*/
      if ( !v6 ) /*0x91b924*/
        v6 = unk_BA7D9C; /*0x91b926*/
      sub_8A75D0(v6, *(_DWORD **)(v4 + 4), 4 * v5, 0x14); /*0x91b93b*/
    }
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v4, 0x10, 0x32); /*0x91b94d*/
  }
  result = *(this + 0xD) - 1; /*0x91b953*/
  *(this + 0xD) = result; /*0x91b954*/
  *(_DWORD *)(*(this + 0xC) + 4 * a2) = *(_DWORD *)(*(this + 0xC) + 4 * result); /*0x91b95d*/
  return result; /*0x91b960*/
}
