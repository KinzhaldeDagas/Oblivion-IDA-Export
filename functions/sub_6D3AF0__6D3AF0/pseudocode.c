int __thiscall sub_6D3AF0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0xB); /*0x6d3af0*/
  if ( v4 ) /*0x6d3af5*/
  {
    *a2 = *(unsigned __int16 *)(v4 + 0xC); /*0x6d3aff*/
    *a3 = *(_DWORD *)(v4 + 0x18); /*0x6d3b08*/
    *a4 = *(_BYTE *)(v4 + 0x1E); /*0x6d3b11*/
    return *(_DWORD *)(v4 + 0x28); /*0x6d3b13*/
  }
  else
  {
    *a2 = 0; /*0x6d3b25*/
    *a3 = 0; /*0x6d3b2b*/
    *a4 = 0; /*0x6d3b31*/
    return 0; /*0x6d3b34*/
  }
}
