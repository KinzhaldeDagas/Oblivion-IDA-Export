int __thiscall sub_6D3AA0(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0xB); /*0x6d3aa0*/
  if ( v4 ) /*0x6d3aa5*/
  {
    *a2 = *(unsigned __int16 *)(v4 + 0xA); /*0x6d3aaf*/
    *a3 = *(_DWORD *)(v4 + 0x14); /*0x6d3ab8*/
    *a4 = *(_BYTE *)(v4 + 0x1D); /*0x6d3ac1*/
    return *(_DWORD *)(v4 + 0x24); /*0x6d3ac3*/
  }
  else
  {
    *a2 = 0; /*0x6d3ad5*/
    *a3 = 0; /*0x6d3adb*/
    *a4 = 0; /*0x6d3ae1*/
    return 0; /*0x6d3ae4*/
  }
}
