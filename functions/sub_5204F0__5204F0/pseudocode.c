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

  v3 = *(this + 0xF); /*0x5204f3*/
  if ( v3 ) /*0x5204f8*/
  {
    v4 = (void *)sub_494ED0(v3, a2 + 1); /*0x520516*/
    v5 = OblivionDynamicCast( /*0x52051c*/
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESIdleForm `RTTI Type Descriptor',
           0);
    v6 = *(this + 0xF); /*0x520521*/
    v7 = v5; /*0x520524*/
    v8 = 0; /*0x520529*/
    if ( v6 ) /*0x52052d*/
    {
      v9 = (void *)sub_494ED0(v6, a2 - 1); /*0x52053f*/
      v8 = OblivionDynamicCast( /*0x520545*/
             v9,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESIdleForm `RTTI Type Descriptor',
             0);
    }
    if ( v7 ) /*0x52054f*/
      v7[0x11] = v8; /*0x520551*/
    v10 = *(this + 0xF); /*0x520554*/
    if ( a2 < v10[3] ) /*0x52055a*/
    {
      v11 = v10[1]; /*0x52055c*/
      v12 = *(_DWORD *)(v11 + 4 * a2); /*0x52055f*/
      *(_DWORD *)(v11 + 4 * a2) = 0; /*0x520567*/
      if ( v12 ) /*0x52056d*/
        --v10[4]; /*0x52056f*/
      v13 = v10[3] - 1; /*0x520576*/
      if ( a2 == v13 ) /*0x52057b*/
        v10[3] = v13; /*0x52057d*/
    }
    sub_5A56F0((unsigned int *)*(this + 0xF)); /*0x520583*/
  }
}
