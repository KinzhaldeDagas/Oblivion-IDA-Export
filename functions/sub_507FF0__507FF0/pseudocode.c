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
  double v13; // [esp+0h] [ebp-20h]
  float a5; // [esp+8h] [ebp-18h]
  int a5a; // [esp+8h] [ebp-18h]
  UInt16 v16[2]; // [esp+14h] [ebp-Ch] BYREF
  int v17; // [esp+18h] [ebp-8h] BYREF
  int a2; // [esp+1Ch] [ebp-4h]

  if ( ImageSpaceEffectEnabled && enableRefraction && ShaderPackage >= 2 )
  {
    *(float *)v16 = 0.0;
    v17 = 0;
    result = Script_ExtractArgs(a1, arg4, a3, arg8, a4, arg10, l, v16, &v17);
    if ( !result )
      return result;
    if ( !OblivionDynamicCast(
            arg8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0) )
    {
      v9 = flt_A31C80;
      if ( *(float *)v16 < v9 && *(float *)v16 <= 0.0 )
      {
        *(float *)v16 = 0.0;
      }
      else
      {
        if ( *(float *)v16 >= v9 )
        {
          LOBYTE(a2) = 1;
          *(float *)v16 = v9;
          goto LABEL_12;
        }
        if ( *(float *)v16 > 0.0 )
        {
          LOBYTE(a2) = 1;
LABEL_12:
          v10 = arg8->vtbl->GetNiNode(arg8);
          v11 = v10;
          if ( v10 )
          {
            sub_7D92C0(v10, 0, 0.0, 0, 0.0);
            sub_7D92C0(v11, 0, 0.0, 1, 0.0);
            a5 = (float)v17;
            sub_7D92C0(v11, a2, *(float *)v16, 1, a5);
            if ( IsConsoleMode )
            {
              a5a = v17;
              v13 = *(float *)v16;
              Name = TESObjectREFR_GetName(arg8);
              Interface_ConsolePrint("%s refraction fire has been set to %f, period of %d", Name, v13, a5a);
            }
          }
          return 1;
        }
      }
      LOBYTE(a2) = 0;
      goto LABEL_12;
    }
  }
  return 1;
}
