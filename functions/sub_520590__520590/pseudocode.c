char __thiscall sub_520590(TESObjectREFR **this, TESObjectREFR **a2)
{
  int v4; // eax
  UInt32 v5; // edi
  UInt32 v6; // esi
  TESObjectREFR *v7; // ecx
  void *v8; // eax
  _DWORD *v9; // eax

  if ( !a2 )
    return 0;
  if ( a2 == this )
    return 1;
  v4 = (int)*(this + 0xF);
  v5 = 0;
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 0xC);
  v6 = 0;
  if ( !v5 )
    return 0;
  while ( 1 )
  {
    v7 = *(this + 0xF);
    if ( v7 )
    {
      v8 = (void *)sub_494ED0(v7, v6);
      v9 = OblivionDynamicCast(
             v8,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESIdleForm `RTTI Type Descriptor',
             0);
      if ( v9 )
      {
        if ( sub_520590(v9, a2) )
          break;
      }
    }
    if ( ++v6 >= v5 )
      return 0;
  }
  return 1;
}
