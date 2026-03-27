int __thiscall sub_8B9F00(int *this, _BYTE *a2)
{
  float *v3; // eax
  float *v4; // edi
  int v5; // eax
  int v6; // ecx

  if ( *(this + 3) )
  {
    *a2 = 0;
    return *(this + 3);
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x70u);
    v4 = v3;
    if ( v3 )
    {
      sub_890B00(v3);
      v5 = (int)v4;
    }
    else
    {
      v5 = 0;
    }
    v6 = *(this + 2);
    *(this + 3) = v5;
    if ( v6 )
      sub_8AC0F0(v6, v5);
    *a2 = 1;
    return *(this + 3);
  }
}
