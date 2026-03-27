int __cdecl sub_9366F0(int a1)
{
  *(float *)a1 = fConstant_1 / sqrt(*(float *)a1 + flt_AA1D50);
  *(float *)(a1 + 4) = fConstant_1 / sqrt(*(float *)(a1 + 4) + flt_AA1D50);
  *(float *)(a1 + 8) = fConstant_1 / sqrt(*(float *)(a1 + 8) + flt_AA1D50);
  *(_DWORD *)(a1 + 0xC) = 0;
  return a1;
}
