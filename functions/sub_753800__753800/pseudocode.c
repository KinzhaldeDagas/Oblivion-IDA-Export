void __thiscall sub_753800(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  _DWORD **v5; // ebx

  v2 = a2; /*0x753803*/
  sub_752D80(this, a2); /*0x75380a*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x753817*/
  v4 = *(this + 6); /*0x75381c*/
  v5 = a2; /*0x753821*/
  if ( v4 ) /*0x753825*/
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) ) /*0x75382f*/
      v5[6] = a2; /*0x75383e*/
    else
      v5[6] = (_DWORD *)*(this + 6); /*0x753848*/
  }
}
