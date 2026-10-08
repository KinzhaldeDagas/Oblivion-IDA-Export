int __thiscall sub_8B0B50(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) ) /*0x8b0b53*/
  {
    *a2 = 0; /*0x8b0bc9*/
    return *(this + 3); /*0x8b0bcc*/
  }
  else
  {
    v3 = FormHeapAlloc(0x40u); /*0x8b0b5b*/
    if ( v3 ) /*0x8b0b65*/
    {
      *(_DWORD *)v3 = 0; /*0x8b0b69*/
      *(_DWORD *)(v3 + 4) = 0; /*0x8b0b6f*/
      *(float *)(v3 + 0x10) = 1.0; /*0x8b0b76*/
      *(float *)(v3 + 0x14) = 1.0; /*0x8b0b79*/
      *(float *)(v3 + 0x18) = 1.0; /*0x8b0b81*/
      *(_DWORD *)(v3 + 0x20) = 2; /*0x8b0b84*/
      *(_DWORD *)(v3 + 0x24) = 2; /*0x8b0b89*/
      *(float *)(v3 + 0x1C) = 0.0; /*0x8b0b8c*/
      *(_DWORD *)(v3 + 0x30) = 0; /*0x8b0b8f*/
      *(float *)(v3 + 0x28) = 0.0; /*0x8b0b96*/
      *(float *)(v3 + 0x2C) = kTerrainLODQuadRayDirectionZ; /*0x8b0b9f*/
    }
    else
    {
      v3 = 0; /*0x8b0ba4*/
    }
    v4 = *(this + 2) == 0; /*0x8b0ba6*/
    *(this + 3) = v3; /*0x8b0baa*/
    if ( !v4 ) /*0x8b0bad*/
      sub_8B05D0(this, v3); /*0x8b0bb2*/
    *a2 = 1; /*0x8b0bbb*/
    return *(this + 3); /*0x8b0bbe*/
  }
}
