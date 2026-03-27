unsigned int __thiscall sub_6E7640(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, NiDynamicEffectState **, int, signed int *, int); // edx
  unsigned int result; // eax
  int v6; // eax
  int (__cdecl *v7)(int, int, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // edx
  int v9; // eax
  int v10; // edi
  int (__cdecl *v11)(int, int, int, signed int *, int); // eax
  int v12; // [esp-18h] [ebp-24h]
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-14h] [ebp-20h]
  int v16; // [esp-14h] [ebp-20h]
  int v17; // [esp-10h] [ebp-1Ch]
  int v18; // [esp-10h] [ebp-1Ch]

  v2 = a2;
  sub_7008A0(this, a2);
  v4 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v13 = *(_DWORD *)(v2 + 0x21C);
  a2 = 4;
  v4(v13, &this->members.dynamicEffectState, 4, &a2, 1);
  result = (unsigned int)this->members.dynamicEffectState;
  if ( result )
  {
    v6 = FormHeapAlloc((unsigned __int64)result >> 0x1E != 0 ? 0xFFFFFFFF : 4 * result);
    v17 = 4 * (int)this->members.dynamicEffectState;
    this->members.accumulator = (NiAccumulator *)v6;
    v14 = v6;
    v7 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v12 = *(_DWORD *)(v2 + 0x21C);
    a2 = 4;
    result = v7(v12, v14, v17, &a2, 1);
  }
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14000001u )
  {
    v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v15 = *(_DWORD *)(v2 + 0x21C);
    a2 = 4;
    v8(v15, this->members.pad014, 4, &a2, 1);
    result = this->members.pad014[0];
    if ( result )
    {
      v9 = FormHeapAlloc((unsigned __int64)result >> 0x1F != 0 ? 0xFFFFFFFF : 2 * result);
      v18 = 2 * this->members.pad014[0];
      this->members.propertyState = (NiPropertyState *)v9;
      v10 = *(_DWORD *)(v2 + 0x21C);
      v16 = v9;
      v11 = *(int (__cdecl **)(int, int, int, signed int *, int))(v10 + 4);
      a2 = 2;
      return v11(v10, v16, v18, &a2, 1);
    }
  }
  return result;
}
