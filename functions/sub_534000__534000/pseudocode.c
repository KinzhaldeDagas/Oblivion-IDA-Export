_BYTE *__thiscall sub_534000(_DWORD *this, _BYTE *a2)
{
  int v2; // eax

  v2 = *(this + 2); /*0x534000*/
  if ( v2 ) /*0x534005*/
  {
    *a2 = *(_BYTE *)(v2 + 0x24); /*0x53400e*/
    return a2; /*0x534010*/
  }
  else
  {
    *a2 = 0; /*0x53401b*/
    return a2; /*0x534015*/
  }
}
