int __thiscall sub_58CB70(float *this, int a2, int a3)
{
  int i; // esi
  int v5; // eax
  int v6; // esi

  for ( i = *((_DWORD *)this + 4); *(_DWORD *)(i + 4); i = *(_DWORD *)(i + 4) )
    ;
  v5 = FormHeapAlloc(0x18u);
  if ( v5 )
  {
    *(float *)(v5 + 8) = 0.0;
    *(_DWORD *)v5 = i;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 0xC) = a3;
    *(_DWORD *)(v5 + 0x10) = 0;
    *(_DWORD *)(v5 + 0x14) = 0;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(i + 4) = v5;
  *(_DWORD *)(v5 + 8) = a2;
  v6 = *(_DWORD *)(i + 4);
  DoActionEnumeration(this, 0);
  return v6;
}
