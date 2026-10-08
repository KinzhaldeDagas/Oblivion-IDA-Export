__int16 __thiscall sub_92DC50(_DWORD *this)
{
  _WORD *v1; // edx
  int v2; // eax
  int v3; // eax
  _WORD *v4; // edx
  int v5; // eax

  v1 = (_WORD *)*(this + 5); /*0x92dc53*/
  if ( *(_WORD *)*(this + 4) > *v1 ) /*0x92dc5c*/
  {
    v2 = *(this + 4); /*0x92dc5e*/
    *(this + 4) = v1; /*0x92dc61*/
    *(this + 5) = v2; /*0x92dc64*/
  }
  if ( *(_WORD *)*(this + 5) > *(_WORD *)*(this + 6) ) /*0x92dc73*/
  {
    v3 = *(this + 5); /*0x92dc78*/
    *(this + 5) = *(this + 6); /*0x92dc7b*/
    *(this + 6) = v3; /*0x92dc7e*/
  }
  v4 = (_WORD *)*(this + 5); /*0x92dc84*/
  LOWORD(v5) = *(_WORD *)*(this + 4); /*0x92dc87*/
  if ( (unsigned __int16)v5 > *v4 ) /*0x92dc8d*/
  {
    v5 = *(this + 4); /*0x92dc8f*/
    *(this + 4) = v4; /*0x92dc92*/
    *(this + 5) = v5; /*0x92dc95*/
  }
  return v5; /*0x92dc98*/
}
