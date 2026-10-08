_OWORD *__thiscall sub_8A2F10(_DWORD *this, _OWORD *a2)
{
  int v2; // eax
  __int128 v3; // xmm0

  if ( this && (v2 = *(this + 2)) != 0 ) /*0x8a2f1f*/
  {
    v3 = *(_OWORD *)(*(_DWORD *)(v2 + 0x50) + 0x80); /*0x8a2f24*/
    *a2 = v3; /*0x8a2f33*/
    return a2; /*0x8a2f30*/
  }
  else
  {
    *a2 = *(_OWORD *)&flt_B2F080; /*0x8a2f47*/
    return a2; /*0x8a2f44*/
  }
}
