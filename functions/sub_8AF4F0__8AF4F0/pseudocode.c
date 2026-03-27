int __thiscall sub_8AF4F0(_DWORD *this, _BYTE *a2)
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
    v3 = FormHeapAlloc(8u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(float *)(v3 + 4) = flt_B2EFC4;
    }
    else
    {
      v3 = 0;
    }
    v4 = *(this + 2) == 0;
    *(this + 3) = v3;
    if ( !v4 )
      sub_8AEA60(this, v3);
    *a2 = 1;
    return *(this + 3);
  }
}
