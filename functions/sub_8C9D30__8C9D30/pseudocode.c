int __thiscall sub_8C9D30(_DWORD *this, _BYTE *a2)
{
  int v3; // eax

  if ( *(this + 3) ) /*0x8c9d33*/
  {
    *a2 = 0; /*0x8c9d97*/
    return *(this + 3); /*0x8c9d9a*/
  }
  else
  {
    v3 = FormHeapAlloc(0x14u); /*0x8c9d3b*/
    if ( v3 ) /*0x8c9d45*/
    {
      *(_DWORD *)v3 = 0; /*0x8c9d47*/
      *(float *)(v3 + 4) = flt_B2EFC4; /*0x8c9d53*/
      *(_DWORD *)(v3 + 8) = 0; /*0x8c9d56*/
      *(float *)(v3 + 0xC) = flt_A417B4; /*0x8c9d63*/
      *(float *)(v3 + 0x10) = flt_A31E2C; /*0x8c9d6c*/
      *(this + 3) = v3; /*0x8c9d6f*/
    }
    else
    {
      *(this + 3) = 0; /*0x8c9d82*/
    }
    *a2 = 1; /*0x8c9d76*/
    return *(this + 3); /*0x8c9d79*/
  }
}
