int __thiscall sub_6D7CF0(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  void (__cdecl *v4)(int, NiPropertyState **, int, signed int *, int); // edx
  unsigned int *p_propertyState; // edi
  int v6; // eax
  void (__cdecl *v7)(int, int, unsigned int, signed int *, int); // eax
  int v8; // ebx
  int (__cdecl *v9)(int, NiDynamicEffectState **, int, signed int *, int); // edx
  int v11; // [esp-18h] [ebp-24h]
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp-14h] [ebp-20h]
  unsigned int v14; // [esp-10h] [ebp-1Ch]

  v2 = a2;
  sub_7008A0(this, a2);
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  p_propertyState = (unsigned int *)&this->members.propertyState;
  v12 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  v4(v12, &this->members.propertyState, 4, &a2, 1);
  if ( this->members.propertyState )
  {
    v6 = FormHeapAlloc(*p_propertyState);
    v14 = *p_propertyState;
    this->members.accumulator = (NiAccumulator *)v6;
    v13 = v6;
    v7 = *(void (__cdecl **)(int, int, unsigned int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v11 = *(_DWORD *)(v2 + 0x21C);
    a2 = 1;
    v7(v11, v13, v14, &a2, 1);
  }
  v8 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(int (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v8 + 4);
  a2 = 4;
  return v9(v8, &this->members.dynamicEffectState, 4, &a2, 1);
}
