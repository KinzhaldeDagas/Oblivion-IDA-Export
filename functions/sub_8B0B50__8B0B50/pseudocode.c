int __thiscall sub_8B0B50(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = FormHeapAlloc(0x40u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(_DWORD *)(v3 + 4) = 0;
      *(float *)(v3 + 0x10) = 1.0;
      *(float *)(v3 + 0x14) = 1.0;
      *(float *)(v3 + 0x18) = 1.0;
      *(_DWORD *)(v3 + 0x20) = 2;
      *(_DWORD *)(v3 + 0x24) = 2;
      *(float *)(v3 + 0x1C) = 0.0;
      *(_DWORD *)(v3 + 0x30) = 0;
      *(float *)(v3 + 0x28) = 0.0;
      *(float *)(v3 + 0x2C) = flt_A30634;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(this + 2) == 0;
    *(this + 3) = v3;
    if ( !v4 )
      sub_8B05D0(this, v3);
    *a2 = 1;
    return *(this + 3);
  }
}
