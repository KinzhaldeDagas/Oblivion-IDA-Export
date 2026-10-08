_DWORD *__thiscall sub_759860(_WORD *this, unsigned __int16 a2)
{
  unsigned __int16 v3; // si
  _DWORD *result; // eax

  v3 = *(this + 0x24) - 1; /*0x759872*/
  result = sub_73EFB0((int)this, a2); /*0x759875*/
  if ( a2 != v3 ) /*0x75987d*/
  {
    result = (_DWORD *)v3; /*0x759882*/
    qmemcpy((void *)(*((_DWORD *)this + 0x17) + 0x1C * a2), (const void *)(*((_DWORD *)this + 0x17) + 0x1C * v3), 0x1Cu); /*0x7598a5*/
    if ( *((_DWORD *)this + 0x18) ) /*0x7598a7*/
      *(float *)(*((_DWORD *)this + 0x18) + 4 * a2) = *(float *)(*((_DWORD *)this + 0x18) + 4 * v3); /*0x7598b3*/
  }
  return result; /*0x7598b6*/
}
