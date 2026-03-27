void __thiscall sub_5204F0(TESObjectREFR **this, unsigned int a2)
{
  TESObjectREFR *v3; // ecx
  void *v4; // eax
  _DWORD *v5; // eax
  TESObjectREFR *v6; // ecx
  _DWORD *v7; // edi
  void *v8; // eax
  void *v9; // eax
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx

  v3 = *(this + 0xF);
  if ( v3 )
  {
    v4 = (void *)sub_494ED0(v3, a2 + 1);
    v5 = OblivionDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESIdleForm `RTTI Type Descriptor',
           0);
    v6 = *(this + 0xF);
    v7 = v5;
    v8 = 0;
    if ( v6 )
    {
      v9 = (void *)sub_494ED0(v6, a2 - 1);
      v8 = OblivionDynamicCast(
             v9,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESIdleForm `RTTI Type Descriptor',
             0);
    }
    if ( v7 )
      v7[0x11] = v8;
    v10 = *(this + 0xF);
    if ( a2 < v10[3] )
    {
      v11 = v10[1];
      v12 = *(_DWORD *)(v11 + 4 * a2);
      *(_DWORD *)(v11 + 4 * a2) = 0;
      if ( v12 )
        --v10[4];
      v13 = v10[3] - 1;
      if ( a2 == v13 )
        v10[3] = v13;
    }
    sub_5A56F0(*(this + 0xF));
  }
}
