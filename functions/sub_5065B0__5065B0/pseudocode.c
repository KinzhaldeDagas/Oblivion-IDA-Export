void __cdecl sub_5065B0(
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

  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v12) /*0x506621*/
    && *(int *)v10 >= 0
    && v11 >= 0
    && v12 >= 0
    && *(int *)v10 <= 0xFF
    && v11 <= 0xFF
    && v12 <= 0xFF )
  {
    v8 = dbl_A3DDD8; /*0x50662e*/
    v13 = (double)*(int *)v10 / v8; /*0x506630*/
    v9 = (double)v11; /*0x506634*/
    OB_ShaderConstantStorage_010201A0[4] = v13; /*0x50663c*/
    v14 = v9 / v8; /*0x506644*/
    OB_ShaderConstantStorage_010201A0[5] = v14; /*0x50664c*/
    v15 = (double)v12 / v8; /*0x506656*/
    v16 = 1.0; /*0x506660*/
    OB_ShaderConstantStorage_010201A0[6] = v15; /*0x506664*/
    OB_ShaderConstantStorage_010201A0[7] = v16; /*0x50666d*/
  }
}
