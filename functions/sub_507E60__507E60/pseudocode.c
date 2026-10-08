// MoonSugarEffect decode: SetTargetRefraction command; for actors routes to Actor refraction/transparency, for non-actors toggles NiProperty refraction flags through sub_7D92C0.
bool __cdecl sub_507E60(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *arg8,
        TESObjectREFR *argC,
        Script *arg10,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // edi
  bool result; // al
  double v10; // st7
  void *v11; // eax
  NiNode *v12; // eax
  NiNode *v13; // esi
  char *Name; // eax
  double a5; // [esp+8h] [ebp-14h]
  UInt16 power[2]; // [esp+14h] [ebp-8h] BYREF
  int a2; // [esp+18h] [ebp-4h]

  if ( !OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x507e85*/
    || !OB_ShaderPassControl_010201A0.refractionPassEnabled
    || *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 )
  {
    return 1; /*0x507e85*/
  }
  *(float *)power = 0.0; /*0x507e95*/
  v8 = arg8; /*0x507e99*/
  result = Script_ExtractArgs(a1, arg4, a3, arg8, argC, arg10, l, power); /*0x507eb9*/
  if ( !result ) /*0x507ec3*/
    return result; /*0x507ec3*/
  if ( !arg8 ) /*0x507ecc*/
    v8 = (TESObjectREFR *)reference; /*0x507ece*/
  v10 = flt_A31C80; /*0x507ed4*/
  if ( *(float *)power < v10 && *(float *)power <= 0.0 ) /*0x507ef0*/
  {
    *(float *)power = 0.0; /*0x507f10*/
LABEL_12:
    LOBYTE(a2) = 0; /*0x507f14*/
    goto LABEL_13; /*0x507f14*/
  }
  if ( *(float *)power < v10 ) /*0x507efb*/
  {
    if ( *(float *)power > 0.0 ) /*0x507f58*/
    {
      LOBYTE(a2) = 1; /*0x507f5a*/
      goto LABEL_13; /*0x507f5f*/
    }
    goto LABEL_12; /*0x507f58*/
  }
  LOBYTE(a2) = 1; /*0x507eff*/
  *(float *)power = v10; /*0x507f06*/
LABEL_13:
  v11 = OblivionDynamicCast( /*0x507f19*/
          v8,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  if ( v11 ) /*0x507f32*/
  {
    (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v11 + 0x270))(v11, a2, *(_DWORD *)power); /*0x507f4b*/
  }
  else
  {
    v12 = v8->vtbl->GetNiNode(v8); /*0x507f6c*/
    v13 = v12; /*0x507f6e*/
    if ( v12 ) /*0x507f72*/
    {
      NiAVObject_SetShaderRefractionStateRecursive(v12, 0, 0.0, 0, 0.0); /*0x507f83*/
      NiAVObject_SetShaderRefractionStateRecursive(v13, 0, 0.0, 1, 0.0); /*0x507f99*/
      NiAVObject_SetShaderRefractionStateRecursive(v13, a2, *(float *)power, 0, 0.0); /*0x507fb7*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x507fc0*/
  {
    a5 = *(float *)power; /*0x507fd2*/
    Name = TESObjectREFR_GetName(v8); /*0x507fd5*/
    Interface_ConsolePrint("%s refraction has been set to %f", Name, a5); /*0x507fe0*/
  }
  return 1; /*0x507ec5*/
}
