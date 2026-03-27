LONG __thiscall sub_6ED420(NiRenderer *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, NiPropertyState **, int, signed int *, int); // eax
  void (__cdecl *v5)(int, NiDynamicEffectState **, int, signed int *, int); // eax
  int v6; // eax
  UInt32 v7; // ebx
  int v8; // ebp
  LONG result; // eax
  UInt32 v10; // edi
  int v11; // ebx
  int v12; // [esp-28h] [ebp-38h]
  int v13; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2;
  sub_6EBA80(this, a2);
  v13 = v2[0x87];
  v4 = *(void (__cdecl **)(int, NiPropertyState **, int, signed int *, int))(v13 + 4);
  a2 = 4;
  v4(v13, &this->members.propertyState, 4, &a2, 1);
  v12 = v2[0x87];
  v5 = *(void (__cdecl **)(int, NiDynamicEffectState **, int, signed int *, int))(v12 + 4);
  a2 = 4;
  v5(v12, &this->members.dynamicEffectState, 4, &a2, 1);
  v6 = sub_712A90(v2);
  v7 = this->members.pad014[0];
  v8 = v6;
  if ( v7 != v6 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1);
    }
    this->members.pad014[0] = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)(v8 + 4));
  }
  result = sub_712A90(v2);
  v10 = this->members.pad014[1];
  v11 = result;
  if ( v10 != result )
  {
    if ( v10 )
    {
      result = InterlockedDecrement((volatile LONG *)(v10 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(UInt32, int))v10)(v10, 1);
    }
    this->members.pad014[1] = v11;
    if ( v11 )
      return InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  return result;
}
