char __cdecl sub_503A50(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *value,
        UInt32 *a3)
{
  void *v8; // eax
  float v10; // [esp+0h] [ebp-10h]
  UInt16 v11[2]; // [esp+8h] [ebp-8h] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x503a81*/
  v12 = 0; /*0x503a89*/
  if ( !Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v12) ) /*0x503a91*/
    return 0; /*0x503a91*/
  v8 = OblivionDynamicCast( /*0x503aac*/
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  if ( !v8 || !*(_DWORD *)v11 ) /*0x503abe*/
    return 0; /*0x503aef*/
  v10 = (float)v12; /*0x503ac7*/
  (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)v8 + 0x374))(v8, *(_DWORD *)v11, LODWORD(v10)); /*0x503ad3*/
  return GetDisposition_Eval(a4, *(TESObjectREFR **)v11, 0, value); /*0x503aea*/
}
