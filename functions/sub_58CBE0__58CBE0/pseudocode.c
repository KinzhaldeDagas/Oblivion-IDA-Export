int __thiscall sub_58CBE0(float *this, float a2, int a3)
{
  int i; // esi
  int v5; // eax
  int v6; // edi

  for ( i = *((_DWORD *)this + 4); *(_DWORD *)(i + 4); i = *(_DWORD *)(i + 4) )
    ;
  v5 = FormHeapAlloc(0x18u);
  if ( v5 )
  {
    *(_DWORD *)(v5 + 0xC) = a3;
    *(float *)(v5 + 8) = a2;
    v6 = v5;
    *(_DWORD *)v5 = i;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 0x10) = 0;
    *(_DWORD *)(v5 + 0x14) = 0;
    *(_DWORD *)(i + 4) = v5;
    DoActionEnumeration(this, 0);
    return v6;
  }
  else
  {
    *(_DWORD *)(i + 4) = 0;
    DoActionEnumeration(this, 0);
    return 0;
  }
}
