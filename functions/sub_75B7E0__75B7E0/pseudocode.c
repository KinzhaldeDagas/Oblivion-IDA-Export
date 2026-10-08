void __thiscall sub_75B7E0(int *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  _DWORD **v4; // ebx

  v2 = a2; /*0x75b7e3*/
  sub_752D80(this, a2); /*0x75b7ea*/
  NiTMap_GetAt(*v2, (int)this, &a2); /*0x75b7f7*/
  v4 = a2; /*0x75b7ff*/
  if ( NiTMap_GetAt(*v2, *(this + 6), &a2) ) /*0x75b80b*/
    v4[6] = a2; /*0x75b81a*/
  else
    v4[6] = (_DWORD *)*(this + 6); /*0x75b826*/
}
