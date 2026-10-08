void __thiscall sub_753180(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  _DWORD **v5; // ebx

  v2 = a2; /*0x753183*/
  sub_752D80(this, a2); /*0x75318a*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x753197*/
  v4 = *(this + 0x14); /*0x75319c*/
  v5 = a2; /*0x7531a1*/
  if ( v4 ) /*0x7531a5*/
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) ) /*0x7531af*/
      v5[0x14] = a2; /*0x7531be*/
    else
      v5[0x14] = (_DWORD *)*(this + 0x14); /*0x7531c8*/
  }
}
