int __thiscall sub_740CF0(char **this, int a2, int a3)
{
  int result; // eax

  sub_700A60(this, (NiObjectNET *)a2, a3); /*0x740cfe*/
  *(_WORD *)(a2 + 0x18) = *((_WORD *)this + 0xC); /*0x740d07*/
  *(float *)(a2 + 0x1C) = *((float *)this + 7); /*0x740d11*/
  *(_DWORD *)(a2 + 0x20) = *(this + 8); /*0x740d19*/
  *(_DWORD *)(a2 + 0x24) = *(this + 9); /*0x740d1e*/
  result = (int)*(this + 0xA); /*0x740d21*/
  *(_DWORD *)(a2 + 0x28) = result; /*0x740d25*/
  return result; /*0x740d24*/
}
