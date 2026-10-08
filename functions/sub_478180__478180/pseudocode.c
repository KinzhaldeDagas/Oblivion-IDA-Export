int __thiscall sub_478180(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 0x4B); /*0x478180*/
  if ( v1 && *(_BYTE *)(v1 + 4) == 0x1A ) /*0x47818e*/
    return *(this + 0x4D); /*0x478190*/
  else
    return 0; /*0x478197*/
}
