// MoonSugarEffect decode: SetTargetRefractionFire command; non-actor only, toggles fire/period refraction flags through sub_7D92C0.
bool __cdecl sub_507FF0(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *arg10,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  double v9; // st7
  NiNode *v10; // eax
  NiNode *v11; // esi
  char *Name; // eax
  double power; // [esp+0h] [ebp-20h]
  float a5; // [esp+8h] [ebp-18h]
  int a5a; // [esp+8h] [ebp-18h]
  UInt16 v16[2]; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h] BYREF
  int a2; // [esp+1Ch] [ebp-4h]

  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] /*0x508015*/
    && OB_ShaderPassControl_010201A0.refractionPassEnabled
    && *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 )
  {
    *(float *)v16 = 0.0; /*0x508025*/
    v17 = 0; /*0x50804e*/
    result = Script_ExtractArgs(a1, arg4, a3, arg8, a4, arg10, l, v16, &v17); /*0x508056*/
    if ( !result ) /*0x508060*/
      return result; /*0x508060*/
    if ( !OblivionDynamicCast( /*0x508076*/
            arg8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0) )
    {
      v9 = flt_A31C80; /*0x508086*/
      if ( *(float *)v16 < v9 && *(float *)v16 <= 0.0 ) /*0x5080a2*/
      {
        *(float *)v16 = 0.0; /*0x5080c6*/
      }
      else
      {
        if ( *(float *)v16 >= v9 ) /*0x5080ad*/
        {
          LOBYTE(a2) = 1; /*0x5080b5*/
          *(float *)v16 = v9; /*0x5080bc*/
          goto LABEL_12; /*0x5080c0*/
        }
        if ( *(float *)v16 > 0.0 ) /*0x50816c*/
        {
          LOBYTE(a2) = 1; /*0x508172*/
LABEL_12:
          v10 = arg8->vtbl->GetNiNode(arg8); /*0x5080cf*/
          v11 = v10; /*0x5080dc*/
          if ( v10 ) /*0x5080e0*/
          {
            NiAVObject_SetShaderRefractionStateRecursive(v10, 0, 0.0, 0, 0.0); /*0x5080f1*/
            NiAVObject_SetShaderRefractionStateRecursive(v11, 0, 0.0, 1, 0.0); /*0x508107*/
            a5 = (float)v17; /*0x508113*/
            NiAVObject_SetShaderRefractionStateRecursive(v11, a2, *(float *)v16, 1, a5); /*0x508126*/
            if ( MEMORY[0xB361AC] ) /*0x50812e*/
            {
              a5a = v17; /*0x50813f*/
              power = *(float *)v16; /*0x508145*/
              Name = TESObjectREFR_GetName(arg8); /*0x508148*/
              Interface_ConsolePrint("%s refraction fire has been set to %f, period of %d", Name, power, a5a); /*0x508153*/
            }
          }
          return 1; /*0x508153*/
        }
      }
      LOBYTE(a2) = 0; /*0x5080ca*/
      goto LABEL_12; /*0x5080ca*/
    }
  }
  return 1; /*0x508062*/
}
