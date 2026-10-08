int __thiscall sub_7B0070(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( *(int *)(this + 0xAC) < 5 ) /*0x7b0077*/
  {
    *(float *)(this + 0xB0) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C1F0) * flt_B2C1EC; /*0x7b0092*/
    *(float *)(this + 0xC0) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C250) * flt_B2C1EC; /*0x7b00ad*/
    *(float *)(this + 0xB4) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C1F4) * flt_B2C1EC; /*0x7b00c8*/
    *(float *)(this + 0xC4) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C254) * flt_B2C1EC; /*0x7b00e3*/
    *(float *)(this + 0xB8) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C1F8) * flt_B2C1EC; /*0x7b00fe*/
    *(float *)(this + 0xC8) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C258) * flt_B2C1EC; /*0x7b0119*/
    *(float *)(this + 0xBC) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C1FC) * flt_B2C1EC; /*0x7b0134*/
    *(float *)(this + 0xCC) = *(float *)(0x10 * *(_DWORD *)(this + 0xAC) + 0xB2C25C) * flt_B2C1EC; /*0x7b014f*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 0x18) + 0x24))( /*0x7b0165*/
    *(_DWORD *)(this + 0x18),
    *(_DWORD *)(a5 + 0x28));
  return 0; /*0x7b0169*/
}
