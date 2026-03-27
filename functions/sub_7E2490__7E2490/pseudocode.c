void __thiscall sub_7E2490(char **this, int a2, int a3)
{
  sub_73DA70(this, a2, a3);
  *(_DWORD *)(a2 + 0x1C) = *(this + 7);
  *(float *)(a2 + 0x20) = *((float *)this + 8);
  *(_DWORD *)(a2 + 0x24) = 0;
}
