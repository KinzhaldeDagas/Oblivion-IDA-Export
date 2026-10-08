// Idle inactive predicate used by IsIdlePlaying. False while a queued/current idle remains active or pending; true when no current idle remains or the current idle reached terminal state 3.
bool __thiscall sub_472EA0(_DWORD *this)
{
  _DWORD *v2; // eax

  if ( *(this + 0x34) ) /*0x472ea0*/
    return 0; /*0x472ea7*/
  v2 = (_DWORD *)*(this + 0x33); /*0x472eac*/
  if ( !v2 ) /*0x472eb4*/
    return 1; /*0x472eb6*/
  if ( !v2[4] ) /*0x472ebd*/
    return 0; /*0x472eab*/
  return *v2 == 3; /*0x472eab*/
}
