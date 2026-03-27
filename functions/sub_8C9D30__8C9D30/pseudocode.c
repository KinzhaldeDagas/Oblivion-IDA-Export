int __thiscall sub_8C9D30(_DWORD *this, _BYTE *a2)
{
  int v3; // eax

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = FormHeapAlloc(0x14u);
    if ( v3 )
    {
      *(_DWORD *)v3 = 0;
      *(float *)(v3 + 4) = flt_B2EFC4;
      *(_DWORD *)(v3 + 8) = 0;
      *(float *)(v3 + 0xC) = flt_A417B4;
      *(float *)(v3 + 0x10) = flt_A31E2C;
      *(this + 3) = v3;
    }
    else
    {
      *(this + 3) = 0;
    }
    *a2 = 1;
    return *(this + 3);
  }
}
