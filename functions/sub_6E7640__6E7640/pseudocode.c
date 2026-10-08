int __thiscall sub_6E7640(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, NiDynamicEffectState **, int, signed int *, int); // edx
  int result; // eax
  NiAccumulator *v6; // eax
  int (__cdecl *v7)(int, NiAccumulator *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, UInt32 *, int, signed int *, int); // edx
  NiPropertyState *v9; // eax
  int v10; // edi
  unsigned int (__cdecl *v11)(int, NiPropertyState *, UInt32, signed int *, int); // eax
  int v12; // [esp-18h] [ebp-24h]
  int v13; // [esp-14h] [ebp-20h]
  NiAccumulator *v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-14h] [ebp-20h]
  NiPropertyState *v16; // [esp-14h] [ebp-20h]
  int v17; // [esp-10h] [ebp-1Ch]
  UInt32 v18; // [esp-10h] [ebp-1Ch]

  v2 = a2; /*0x6e7643*/
  sub_7008A0(this, a2); /*0x6e764a*/
  v4 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e7655*/
  v13 = *(_DWORD *)(v2 + 0x21C); /*0x6e7665*/
  a2 = 4; /*0x6e7666*/
  v4(v13, &this->members.dynamicEffectState, 4, &a2, 1); /*0x6e766e*/
  result = (int)this->members.dynamicEffectState; /*0x6e7670*/
  if ( result )
  {
    v6 = (NiAccumulator *)FormHeapAlloc((unsigned __int64)(unsigned int)result >> 0x1E != 0 ? 0xFFFFFFFF : 4 * result);
    v17 = 4 * (int)this->members.dynamicEffectState; /*0x6e769e*/
    this->members.accumulator = v6; /*0x6e769f*/
    v14 = v6; /*0x6e76a8*/
    v7 = *(int (__cdecl **)(int, NiAccumulator *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e76a9*/
    v12 = *(_DWORD *)(v2 + 0x21C); /*0x6e76ac*/
    a2 = 4; /*0x6e76ad*/
    result = v7(v12, v14, v17, &a2, 1); /*0x6e76b5*/
  }
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14000001u )
  {
    v8 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e76cc*/
    v15 = *(_DWORD *)(v2 + 0x21C); /*0x6e76dc*/
    a2 = 4; /*0x6e76dd*/
    v8(v15, this->members.pad014, 4, &a2, 1); /*0x6e76e5*/
    result = this->members.pad014[0]; /*0x6e76e7*/
    if ( result )
    {
      v9 = (NiPropertyState *)FormHeapAlloc((unsigned __int64)(unsigned int)result >> 0x1F != 0 ? 0xFFFFFFFF : 2 * result);
      v18 = 2 * this->members.pad014[0]; /*0x6e7713*/
      this->members.propertyState = v9; /*0x6e7714*/
      v10 = *(_DWORD *)(v2 + 0x21C); /*0x6e7717*/
      v16 = v9; /*0x6e771d*/
      v11 = *(unsigned int (__cdecl **)(int, NiPropertyState *, UInt32, signed int *, int))(v10 + 4); /*0x6e771e*/
      a2 = 2; /*0x6e7722*/
      return v11(v10, v16, v18, &a2, 1); /*0x6e772a*/
    }
  }
  return result; /*0x6e772f*/
}
