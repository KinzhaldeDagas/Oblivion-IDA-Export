int __thiscall sub_8C8D40(char **this, _BYTE *a2)
{
  int v3; // eax
  bool v4; // zf

  if ( *(this + 3) )
  {
    *a2 = 0;
    return (int)*(this + 3);
  }
  else
  {
    v3 = FormHeapAlloc(0x20u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(float *)(v3 + 4) = flt_B2EFC4;
      *(_DWORD *)(v3 + 8) = 0;
      *(_DWORD *)(v3 + 0xC) = 0;
      *(_DWORD *)(v3 + 0x10) = 0x80000000;
      *(_DWORD *)(v3 + 0x14) = 0;
      *(_DWORD *)(v3 + 0x18) = 0;
      *(_DWORD *)(v3 + 0x1C) = 0x80000000;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(this + 2) == 0;
    *(this + 3) = (char *)v3;
    if ( !v4 )
      sub_8C8C50(this, v3);
    *a2 = 1;
    return (int)*(this + 3);
  }
}
