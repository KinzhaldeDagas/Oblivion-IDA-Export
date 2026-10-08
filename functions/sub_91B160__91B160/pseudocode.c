int __thiscall sub_91B160(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int result; // eax

  if ( this ) /*0x91b167*/
    v3 = this + 0xA; /*0x91b169*/
  else
    v3 = 0; /*0x91b16e*/
  sub_8989E0(**(int ***)(*(this + 0xC) + 4 * a2), (int)v3); /*0x91b17d*/
  sub_898A80(**(int ***)(*(this + 0xC) + 4 * a2), (int)(this + 0xB)); /*0x91b18e*/
  sub_91ABA0(this, a2); /*0x91b196*/
  v4 = *(_DWORD *)(*(this + 0xC) + 4 * a2); /*0x91b19e*/
  if ( v4 ) /*0x91b1a3*/
  {
    v5 = *(_DWORD *)(v4 + 0xC); /*0x91b1a5*/
    if ( v5 >= 0 ) /*0x91b1aa*/
    {
      v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91b1bc*/
      if ( !v6 ) /*0x91b1c4*/
        v6 = unk_BA7D9C; /*0x91b1c6*/
      sub_8A75D0(v6, *(_DWORD **)(v4 + 4), 4 * v5, 0x14); /*0x91b1db*/
    }
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v4, 0x10, 0x32); /*0x91b1ed*/
  }
  result = *(this + 0xD) - 1; /*0x91b1f3*/
  *(this + 0xD) = result; /*0x91b1f4*/
  *(_DWORD *)(*(this + 0xC) + 4 * a2) = *(_DWORD *)(*(this + 0xC) + 4 * result); /*0x91b1fd*/
  return result; /*0x91b200*/
}
