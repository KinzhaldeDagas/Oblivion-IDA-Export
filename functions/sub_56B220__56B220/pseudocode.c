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

  v2 = *a2; /*0x56b225*/
  if ( v2 >= 0x171 ) /*0x56b230*/
    return 0; /*0x56b230*/
  v3 = 0x14 * v2; /*0x56b23f*/
  numParams = Script_CommandList[v3 / 0x14].numParams; /*0x56b241*/
  v5 = 2 * v3; /*0x56b249*/
  if ( a1 >= numParams /*0x56b25c*/
    || !*(_BYTE *)(8 * (*(ParamInfo **)((char *)&Script_CommandList[0].params + v5))[a1].typeID + 0xB0A54D) )
  {
    return 0; /*0x56b25c*/
  }
  v6 = *(void **)&a2[2 * a1 + 2]; /*0x56b266*/
  result = OblivionDynamicCast( /*0x56b277*/
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x56b281*/
    return (_DWORD *)result[1]; /*0x56b288*/
  v8 = OblivionDynamicCast( /*0x56b298*/
         v6,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  if ( !v8 ) /*0x56b2a2*/
    return 0; /*0x56b2ce*/
  v9 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)v8 + 0x170))(v8); /*0x56b2ae*/
  result = OblivionDynamicCast( /*0x56b2bf*/
             v9,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x56b2c9*/
    return (_DWORD *)result[1]; /*0x56b2c9*/
  return result; /*0x56b286*/
}
