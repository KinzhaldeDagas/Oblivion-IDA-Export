__int16 __thiscall sub_715F40(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, NiAccumulator **, int, signed int *, int); // edx
  int *p_accumulator; // ebx
  void (__cdecl *v6)(int, NiPropertyState **, int, signed int *, int); // eax
  void (__cdecl *v7)(int, NiDynamicEffectState **, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, UInt32 *, int, signed int *, int); // edx
  __int16 result; // ax
  int v11; // [esp-50h] [ebp-60h]
  int v12; // [esp-3Ch] [ebp-4Ch]
  int v13; // [esp-28h] [ebp-38h]
  int v14; // [esp-14h] [ebp-24h]
  int v15; // [esp-14h] [ebp-24h]

  v2 = a2;
  sub_7008A0(this, a2);
  sub_712A20((unsigned int *)v2);
  v4 = *(void (__cdecl **)(int, NiAccumulator **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  p_accumulator = (int *)&this->members.accumulator;
  v14 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  v4(v14, &this->members.accumulator, 2, &a2, 1);
  v13 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(v13 + 4);
  a2 = 4;
  v6(v13, &this->members.propertyState, 4, &a2, 1);
  v12 = *(_DWORD *)(v2 + 0x21C);
  v7 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v7(v12, &this->members.dynamicEffectState, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x21C);
  v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v11 + 4);
  a2 = 4;
  v8(v11, this->members.pad014, 4, &a2, 1);
  v9 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v15 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  v9(v15, &this->members.pad014[1], 4, &a2, 1);
  result = sub_712A20((unsigned int *)v2);
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000101u )
  {
    result = *(_WORD *)p_accumulator & 0xF | (2 * (*(_WORD *)p_accumulator & 0xFFF0));
    *(_WORD *)p_accumulator = result;
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA000103u )
  {
    result = *(_WORD *)p_accumulator;
    *(_WORD *)(v2 + 0x25A) = *(_WORD *)p_accumulator;
    *(_WORD *)p_accumulator &= 0x1Fu;
  }
  if ( *(_DWORD *)(v2 + 0xD8) < 0xA01006Du )
    *(_WORD *)p_accumulator &= ~0x20u;
  return result;
}
