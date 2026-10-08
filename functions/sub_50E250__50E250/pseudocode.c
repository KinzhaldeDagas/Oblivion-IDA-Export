void __cdecl sub_50E250(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  double v8; // rt0
  double v9; // st6
  UInt16 v10[2]; // [esp+0h] [ebp-1Ch] BYREF
  int v11; // [esp+4h] [ebp-18h] BYREF
  int v12; // [esp+8h] [ebp-14h] BYREF
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v12) /*0x50e2c1*/
    && *(int *)v10 >= 0
    && v11 >= 0
    && v12 >= 0
    && *(int *)v10 <= 0xFF
    && v11 <= 0xFF
    && v12 <= 0xFF )
  {
    v8 = dbl_A3DDD8; /*0x50e2ce*/
    v13 = (double)*(int *)v10 / v8; /*0x50e2d0*/
    v9 = (double)v11; /*0x50e2d4*/
    OB_ShaderConstantStorage_010201A0[0] = v13; /*0x50e2dc*/
    v14 = v9 / v8; /*0x50e2e4*/
    OB_ShaderConstantStorage_010201A0[1] = v14; /*0x50e2ec*/
    v15 = (double)v12 / v8; /*0x50e2f6*/
    v16 = 1.0; /*0x50e300*/
    OB_ShaderConstantStorage_010201A0[2] = v15; /*0x50e304*/
    OB_ShaderConstantStorage_010201A0[3] = v16; /*0x50e30d*/
  }
}
