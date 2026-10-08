int __thiscall sub_9580D0(float *this, int a2, int a3)
{
  int result; // eax

  *(float *)(a3 + 4) = sub_957E90(this, a2); /*0x9580e4*/
  *(float *)(a3 + 0xC) = sub_957F30(this, a2); /*0x9580ee*/
  *(float *)(a3 + 0x10) = sub_957E30(this, a2); /*0x9580f9*/
  *(float *)a3 = (double)*(int *)(a2 + 0x30) * *(float *)(a2 + 0x1C) * *(this + 2) * flt_A31E2C; /*0x95810b*/
  *(float *)(a3 + 0x14) = (*(float *)(a2 + 0x38) - *(float *)(a2 + 0x20)) * *(float *)(a2 + 0x10) * *(this + 3); /*0x958119*/
  result = *(_DWORD *)(a2 + 8); /*0x95811c*/
  *(_DWORD *)(a3 + 0x18) = result; /*0x95811f*/
  *(_DWORD *)(a3 + 0x1C) = *(_DWORD *)(a2 + 0xC); /*0x958125*/
  return result; /*0x958128*/
}
