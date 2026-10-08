_DWORD *__thiscall sub_700010(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = (_DWORD *)*(this + 3); /*0x700011*/
  if ( !v2 ) /*0x700017*/
    return 0; /*0x700042*/
  while ( 1 ) /*0x700027*/
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2); /*0x700027*/
    if ( v3 ) /*0x70002b*/
      break; /*0x70002b*/
LABEL_5:
    v2 = (_DWORD *)v2[0xD]; /*0x70003b*/
    if ( !v2 ) /*0x700040*/
      return 0; /*0x700040*/
  }
  while ( v3 != a2 ) /*0x700032*/
  {
    v3 = *(_DWORD *)(v3 + 4); /*0x700034*/
    if ( !v3 ) /*0x700039*/
      goto LABEL_5; /*0x700039*/
  }
  return v2; /*0x700042*/
}
