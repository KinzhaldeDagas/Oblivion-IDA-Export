void __thiscall sub_8CAFF0(_DWORD *this, int *a2)
{
  int v3; // ecx
  int v4; // ebp
  int **i; // eax
  _DWORD *v6; // eax
  int j; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  v3 = *(this + 0x18); /*0x8caff4*/
  v4 = 0; /*0x8caff7*/
  if ( v3 > 0 ) /*0x8caffb*/
  {
    for ( i = (int **)*(this + 0x17); *i != a2; ++i ) /*0x8caffd*/
    {
      if ( ++v4 >= v3 ) /*0x8cb00f*/
        return; /*0x8cb00f*/
    }
    if ( v4 >= 0 ) /*0x8cb019*/
    {
      if ( this ) /*0x8cb01d*/
        v6 = this + 0x12; /*0x8cb01f*/
      else
        v6 = 0; /*0x8cb024*/
      sub_898B20(a2, (int)v6); /*0x8cb02a*/
      for ( j = 0; j < *(this + 0x1B); ++j ) /*0x8cb036*/
      {
        v8 = *(_DWORD *)(*(this + 0x1A) + 4 * j); /*0x8cb03b*/
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v8 + 4))(v8, a2); /*0x8cb041*/
      }
      v9 = *(this + 0x17); /*0x8cb04f*/
      v10 = *(this + 0x18) - 1; /*0x8cb052*/
      *(this + 0x18) = v10; /*0x8cb053*/
      *(_DWORD *)(v9 + 4 * v4) = *(_DWORD *)(v9 + 4 * v10); /*0x8cb059*/
      sub_8CAE40(this, a2); /*0x8cb05f*/
    }
  }
}
