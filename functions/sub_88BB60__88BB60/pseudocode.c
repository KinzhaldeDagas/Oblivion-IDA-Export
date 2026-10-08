int __thiscall sub_88BB60(const void **this, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  int *v5; // esi
  int v6; // ecx
  int result; // eax

  if ( a2 && (v3 = *(_DWORD *)(a2 + 8)) != 0 ) /*0x88bb74*/
    v4 = v3 + 0x14; /*0x88bb76*/
  else
    v4 = 0; /*0x88bb7b*/
  v5 = (int *)(this + 0x1B); /*0x88bb80*/
  if ( *(this + 0x1C) == (const void *)((unsigned int)*(this + 0x1D) & 0x3FFFFFFF) ) /*0x88bb8b*/
    sub_8A6EE0(this + 0x1B, 8); /*0x88bb90*/
  v6 = v5[1]; /*0x88bb98*/
  result = *v5; /*0x88bb9b*/
  *(_DWORD *)(result + 8 * v6) = v4; /*0x88bb9d*/
  *(_DWORD *)(result + 8 * v6 + 4) = a3; /*0x88bba0*/
  ++v5[1]; /*0x88bba4*/
  return result; /*0x88bba8*/
}
