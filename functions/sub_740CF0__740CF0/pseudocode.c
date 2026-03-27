int __thiscall sub_740CF0(char **this, int a2, int a3)
{
  int result; // eax

  sub_700A60(this, (NiObjectNET *)a2, a3);
  *(_WORD *)(a2 + 0x18) = *((_WORD *)this + 0xC);
  *(float *)(a2 + 0x1C) = *((float *)this + 7);
  *(_DWORD *)(a2 + 0x20) = *(this + 8);
  *(_DWORD *)(a2 + 0x24) = *(this + 9);
  result = (int)*(this + 0xA);
  *(_DWORD *)(a2 + 0x28) = result;
  return result;
}
