void __thiscall TESRegion::~TESRegion(TESRegion *this)
{
  unsigned int v2; // esi
  int v3; // eax
  _DWORD *i; // esi
  _DWORD *v5; // ecx

  *(_DWORD *)this = &TESRegion::`vftable';
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    sub_4A44C0(v2);
    FormHeapFree(v2);
  }
  v3 = *((_DWORD *)this + 7);
  if ( v3 )
  {
    for ( i = *(_DWORD **)v3; *(_DWORD *)v3; i = *(_DWORD **)v3 )
    {
      v5 = *(_DWORD **)(v3 + 4);
      if ( v5 )
      {
        *(_DWORD *)(v3 + 4) = v5[1];
        *(_DWORD *)v3 = *v5;
        FormHeapFree((unsigned int)v5);
      }
      else
      {
        *(_DWORD *)v3 = 0;
      }
      if ( i )
      {
        sub_4A76F0(i);
        FormHeapFree((unsigned int)i);
      }
      v3 = *((_DWORD *)this + 7);
    }
    FormHeapFree(*((_DWORD *)this + 7));
  }
  TESForm_destr((TESForm *)this);
}
