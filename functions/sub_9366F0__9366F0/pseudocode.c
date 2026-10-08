int __cdecl sub_9366F0(int a1)
{
  *(float *)a1 = fConstant_1 / sqrt(*(float *)a1 + flt_AA1D50); /*0x936704*/
  *(float *)(a1 + 4) = fConstant_1 / sqrt(*(float *)(a1 + 4) + flt_AA1D50); /*0x936717*/
  *(float *)(a1 + 8) = fConstant_1 / sqrt(*(float *)(a1 + 8) + flt_AA1D50); /*0x93672b*/
  *(_DWORD *)(a1 + 0xC) = 0; /*0x93672e*/
  return a1; /*0x936735*/
}
