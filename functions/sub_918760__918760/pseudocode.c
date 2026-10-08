_BYTE *__thiscall sub_918760(int *this, int a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // ecx

  v3 = *(this + 0xC); /*0x918765*/
  v4 = 0; /*0x918768*/
  if ( v3 > 0 ) /*0x91876c*/
  {
    v5 = a2; /*0x91876f*/
    do /*0x918782*/
    {
      v6 = *(_DWORD *)(*(this + 0xB) + 4 * v4); /*0x918776*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x14))(v6, v5); /*0x91877c*/
      ++v4; /*0x91877f*/
    }
    while ( v4 < v3 ); /*0x918782*/
  }
  return sub_947FA0(this + 6, &a2, (_DWORD **)*(this + 2)); /*0x918796*/
}
