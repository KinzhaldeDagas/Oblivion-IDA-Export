int __thiscall sub_8B05D0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // edi

  result = sub_8B0280(this, (_DWORD *)a2); /*0x8b05e1*/
  v4 = *(this + 2); /*0x8b05e6*/
  if ( v4 ) /*0x8b05eb*/
  {
    v5 = *(_DWORD *)(v4 + 0xC); /*0x8b05ed*/
    if ( v5 ) /*0x8b05f2*/
    {
      result = *(_DWORD *)(v5 + 0x10); /*0x8b05f4*/
      if ( result ) /*0x8b05f9*/
      {
        *(float *)(a2 + 0x2C) = *(float *)(result + 0x58) + *(float *)(result + 0x14); /*0x8b0601*/
        *(float *)(a2 + 0x28) = *(float *)(result + 0x14) - *(float *)(result + 0x58); /*0x8b060a*/
        *(_OWORD *)(a2 + 0x10) = *(_OWORD *)(result + 0x20); /*0x8b0611*/
        *(_DWORD *)(a2 + 0x20) = *(_DWORD *)(result + 0xC); /*0x8b0618*/
        *(_DWORD *)(a2 + 0x24) = *(_DWORD *)(result + 0x10); /*0x8b061e*/
        result = *(_DWORD *)(result + 0x60); /*0x8b0621*/
        *(_DWORD *)(a2 + 0x30) = result; /*0x8b0624*/
      }
    }
  }
  return result; /*0x8b0627*/
}
