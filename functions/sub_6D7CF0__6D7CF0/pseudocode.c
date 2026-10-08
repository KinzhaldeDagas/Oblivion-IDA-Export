int __thiscall sub_6D7CF0(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  void (__cdecl *v4)(int, NiPropertyState **, int, signed int *, int); // edx
  unsigned int *p_propertyState; // edi
  NiAccumulator *v6; // eax
  void (__cdecl *v7)(int, NiAccumulator *, unsigned int, signed int *, int); // eax
  int v8; // ebx
  int (__cdecl *v9)(int, NiDynamicEffectState **, int, signed int *, int); // edx
  int v11; // [esp-18h] [ebp-24h]
  int v12; // [esp-14h] [ebp-20h]
  NiAccumulator *v13; // [esp-14h] [ebp-20h]
  unsigned int v14; // [esp-10h] [ebp-1Ch]

  v2 = a2; /*0x6d7cf1*/
  sub_7008A0(this, a2); /*0x6d7cfa*/
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6d7d05*/
  p_propertyState = (unsigned int *)&this->members.propertyState; /*0x6d7d11*/
  v12 = *(_DWORD *)(v2 + 0x21C); /*0x6d7d15*/
  a2 = 4; /*0x6d7d16*/
  v4(v12, &this->members.propertyState, 4, &a2, 1); /*0x6d7d1e*/
  if ( this->members.propertyState ) /*0x6d7d11*/
  {
    v6 = (NiAccumulator *)FormHeapAlloc(*p_propertyState); /*0x6d7d2a*/
    v14 = *p_propertyState; /*0x6d7d38*/
    this->members.accumulator = v6; /*0x6d7d39*/
    v13 = v6; /*0x6d7d42*/
    v7 = *(void (__cdecl **)(int, NiAccumulator *, unsigned int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6d7d43*/
    v11 = *(_DWORD *)(v2 + 0x21C); /*0x6d7d46*/
    a2 = 1; /*0x6d7d47*/
    v7(v11, v13, v14, &a2, 1); /*0x6d7d4f*/
  }
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x6d7d54*/
  v9 = *(int (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v8 + 4); /*0x6d7d5a*/
  a2 = 4; /*0x6d7d6b*/
  return v9(v8, &this->members.dynamicEffectState, 4, &a2, 1); /*0x6d7d78*/
}
