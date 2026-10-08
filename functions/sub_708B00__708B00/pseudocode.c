char __thiscall sub_708B00(char **this, int a2, _DWORD **a3)
{
  char result; // al

  sub_707E90(this, (NiGeometry *)a2, a3); /*0x708b0e*/
  *(_DWORD *)(a2 + 0xB4) = *(this + 0x2D); /*0x708b19*/
  *(_DWORD *)(a2 + 0xB8) = *(this + 0x2E); /*0x708b25*/
  result = *((_BYTE *)this + 0xAC); /*0x708b2b*/
  *(_BYTE *)(a2 + 0xAC) = result; /*0x708b31*/
  return result; /*0x708b37*/
}
