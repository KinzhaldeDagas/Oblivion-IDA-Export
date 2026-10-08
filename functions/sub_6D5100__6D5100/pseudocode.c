int __thiscall sub_6D5100(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14); /*0x6d5100*/
  if ( v4 ) /*0x6d5105*/
  {
    *a2 = *(_DWORD *)(v4 + 0x14); /*0x6d510e*/
    *a3 = *(_DWORD *)(v4 + 0x1C); /*0x6d5117*/
    *a4 = *(_BYTE *)(v4 + 0x49); /*0x6d5120*/
    return *(_DWORD *)(v4 + 0x18); /*0x6d5122*/
  }
  else
  {
    *a2 = 0; /*0x6d5134*/
    *a3 = 0; /*0x6d513a*/
    *a4 = 0; /*0x6d5140*/
    return 0; /*0x6d5143*/
  }
}
