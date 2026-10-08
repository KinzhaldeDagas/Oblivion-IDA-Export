_DWORD *__thiscall sub_42B090(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax

  *((_BYTE *)this + 4) = 0x57; /*0x42b0ba*/
  *(this + 2) = 0; /*0x42b0be*/
  *this = &ExtraEditorRefMoveData::`vftable'; /*0x42b0cb*/
  if ( a2 ) /*0x42b0d1*/
  {
    *(this + 3) = a2[8]; /*0x42b0d6*/
    *(this + 4) = a2[9]; /*0x42b0dc*/
    *(this + 5) = a2[0xA]; /*0x42b0e2*/
    v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2); /*0x42b0ed*/
    *(this + 6) = *v3; /*0x42b0f1*/
    *(this + 7) = v3[1]; /*0x42b0f7*/
    *(this + 8) = v3[2]; /*0x42b0fd*/
    *(this + 9) = *v3; /*0x42b102*/
    *(this + 0xA) = v3[1]; /*0x42b108*/
    *(this + 0xB) = v3[2]; /*0x42b10e*/
  }
  return this; /*0x42b113*/
}
