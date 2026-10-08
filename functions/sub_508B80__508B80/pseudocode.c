void __cdecl sub_508B80(
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

  *(_DWORD *)v10 = 0; /*0x508b85*/
  v11 = 0; /*0x508b88*/
  v12 = 0; /*0x508b8c*/
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v12) ) /*0x508bc2*/
  {
    v8 = dbl_A4C2D0; /*0x508bdd*/
    v13 = (double)*(int *)v10 * v8; /*0x508bdf*/
    v9 = (double)v11; /*0x508be7*/
    flt_B4616C[0] = v13; /*0x508beb*/
    v14 = v9 * v8; /*0x508bf3*/
    flt_B4616C[1] = v14; /*0x508bfb*/
    v15 = v8 * (double)v12; /*0x508c05*/
    flt_B4616C[2] = v15; /*0x508c0f*/
    flt_B4616C[3] = 1.0; /*0x508c1e*/
  }
}
