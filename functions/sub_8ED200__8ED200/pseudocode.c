void __thiscall sub_8ED200(const void **this, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  const void **v5; // esi
  const void *v6; // eax
  _DWORD *v7; // ecx

  if ( *a2 )
  {
    if ( !sub_88D780(this, (int)a2) )
    {
      v3 = (int)*(this + 0x4A);
      v4 = (int)*(this + 0x49);
      v5 = this + 0x48;
      if ( v4 == (v3 & 0x3FFFFFFF) )
        sub_8A6EE0(v5, 4);
      v6 = v5[1];
      v7 = (char *)*v5 + 4 * (_DWORD)v6;
      v5[1] = (char *)v6 + 1;
      *v7 = a2;
    }
  }
}
