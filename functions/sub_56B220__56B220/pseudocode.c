_DWORD *__cdecl sub_56B220(unsigned int a1, unsigned __int16 *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int numParams; // edx
  int v5; // eax
  void *v6; // esi
  _DWORD *result; // eax
  void *v8; // eax
  void *v9; // eax

  v2 = *a2;
  if ( v2 >= 0x171 )
    return 0;
  v3 = 0x14 * v2;
  numParams = Script_CommandList_[v3 / 0x14].numParams;
  v5 = 2 * v3;
  if ( a1 >= numParams
    || !*(_BYTE *)(8 * (*(ParamInfo **)((char *)&Script_CommandList_[0].params + v5))[a1].typeID + 0xB0A54D) )
  {
    return 0;
  }
  v6 = *(void **)&a2[2 * a1 + 2];
  result = OblivionDynamicCast(
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result )
    return (_DWORD *)result[1];
  v8 = OblivionDynamicCast(
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  if ( !v8 )
    return 0;
  v9 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 0x170))(v8);
  result = OblivionDynamicCast(
             v9,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result )
    return (_DWORD *)result[1];
  return result;
}
