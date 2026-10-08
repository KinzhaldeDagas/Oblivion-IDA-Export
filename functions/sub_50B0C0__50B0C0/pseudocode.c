void __cdecl OB_Command_SetHDRParam_Execute_010201A0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  double v8; // st7
  bool v9; // zf
  UInt16 v10[2]; // [esp+0h] [ebp-18h] BYREF
  float v11; // [esp+4h] [ebp-14h] BYREF
  float v12; // [esp+8h] [ebp-10h] BYREF
  float v13; // [esp+Ch] [ebp-Ch] BYREF
  float v14; // [esp+10h] [ebp-8h] BYREF
  float v15; // [esp+14h] [ebp-4h] BYREF

  *(float *)v10 = 0.0; /*0x50b0ca*/
  v11 = 0.0; /*0x50b0d2*/
  v14 = 0.0; /*0x50b0d7*/
  v15 = 0.0; /*0x50b0df*/
  v12 = 0.0; /*0x50b0e4*/
  v13 = 0.0; /*0x50b0ec*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v14, &v15, &v12, &v13) ) /*0x50b11e*/
  {
    v8 = *(float *)v10; /*0x50b12e*/
    if ( *(float *)v10 > 1.0 ) /*0x50b13c*/
      *(float *)v10 = 1.0; /*0x50b13e*/
    if ( *(float *)v10 >= dbl_A2FC68 ) /*0x50b158*/
    {
      if ( v8 > 1.0 ) /*0x50b173*/
      {
        *(float *)v10 = 1.0; /*0x50b177*/
        v8 = (float)1.0; /*0x50b17a*/
      }
    }
    else
    {
      *(float *)v10 = 0.0; /*0x50b162*/
      v8 = (float)0.0; /*0x50b165*/
    }
    v9 = OB_RendererGlobalState_010201A0[0x1DB] == 0; /*0x50b181*/
    *(float *)&OB_RendererGlobalState_010201A0[0xF] = v14;// SetHDRParam command writes fTreeDimmer directly with no clamp. Its local default is 0, so a successful omitted/zero argument can set c10 to zero and remove directional diffuse (ambient remains). /*0x50b18c*/
    *(float *)&OB_RendererGlobalState_010201A0[0xAB] = v15; /*0x50b196*/
    if ( v9 ) /*0x50b19c*/
    {
      unk_B43200 = v8; /*0x50b1d2*/
      v15 = fabs(v11); /*0x50b1e0*/
      unk_B43208 = v15; /*0x50b1e8*/
      unk_B43210 = v12; /*0x50b1f2*/
      unk_B43218 = v13; /*0x50b1fc*/
    }
    else
    {
      unk_B43204 = v8; /*0x50b19e*/
      v15 = fabs(v11); /*0x50b1ac*/
      unk_B4320C = v15; /*0x50b1b4*/
      unk_B43214 = v12; /*0x50b1be*/
      unk_B4321C = v13; /*0x50b1c8*/
    }
  }
}
