int __thiscall sub_9580D0(float *this, int a2, int a3)
{
  int result; // eax

  *(float *)(a3 + 4) = sub_957E90(this, a2);
  *(float *)(a3 + 0xC) = sub_957F30(this, a2);
  *(float *)(a3 + 0x10) = sub_957E30(this, a2);
  *(float *)a3 = (double)*(int *)(a2 + 0x30) * *(float *)(a2 + 0x1C) * *(this + 2) * flt_A31E2C;
  *(float *)(a3 + 0x14) = (*(float *)(a2 + 0x38) - *(float *)(a2 + 0x20)) * *(float *)(a2 + 0x10) * *(this + 3);
  result = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a3 + 0x18) = result;
  *(_DWORD *)(a3 + 0x1C) = *(_DWORD *)(a2 + 0xC);
  return result;
}
