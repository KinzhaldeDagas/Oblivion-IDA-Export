UInt32 __thiscall sub_6ED420(NiRenderer *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, NiPropertyState **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, NiDynamicEffectState **, int, signed int *, int); // eax
  int v6; // eax
  UInt32 v7; // ebx
  UInt32 v8; // ebp
  UInt32 result; // eax
  UInt32 v10; // edi
  UInt32 v11; // ebx
  int v12; // [esp-28h] [ebp-38h]
  int v13; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x6ed424*/
  sub_6EBA80(this, a2); /*0x6ed42b*/
  v13 = v2[0x87]; /*0x6ed447*/
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(v13 + 4); /*0x6ed448*/
  a2 = 4; /*0x6ed44b*/
  v4(v13, &this->members.propertyState, 4, &a2, 1); /*0x6ed44f*/
  v12 = v2[0x87]; /*0x6ed463*/
  v5 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v12 + 4); /*0x6ed464*/
  a2 = 4; /*0x6ed467*/
  v5(v12, &this->members.dynamicEffectState, 4, &a2, 1); /*0x6ed46b*/
  v6 = sub_712A90(v2); /*0x6ed472*/
  v7 = this->members.pad014[0]; /*0x6ed477*/
  v8 = v6; /*0x6ed47a*/
  if ( v7 != v6 ) /*0x6ed47e*/
  {
    if ( v7 ) /*0x6ed482*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6ed488*/
        (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1); /*0x6ed49e*/
    }
    this->members.pad014[0] = v8; /*0x6ed4a2*/
    if ( v8 ) /*0x6ed4a5*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6ed4ab*/
  }
  result = sub_712A90(v2); /*0x6ed4b3*/
  v10 = this->members.pad014[1]; /*0x6ed4b8*/
  v11 = result; /*0x6ed4bb*/
  if ( v10 != result ) /*0x6ed4bf*/
  {
    if ( v10 ) /*0x6ed4c3*/
    {
      result = InterlockedDecrement((volatile LONG *)(v10 + 4)); /*0x6ed4c9*/
      if ( !result ) /*0x6ed4d1*/
        result = (**(int (__thiscall ***)(UInt32, int))v10)(v10, 1); /*0x6ed4df*/
    }
    this->members.pad014[1] = v11; /*0x6ed4e3*/
    if ( v11 ) /*0x6ed4e6*/
      return InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x6ed4ec*/
  }
  return result; /*0x6ed4f2*/
}
