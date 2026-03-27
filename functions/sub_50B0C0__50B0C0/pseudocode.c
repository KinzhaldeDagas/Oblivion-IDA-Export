void __cdecl sub_50B0C0(
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

  *(float *)v10 = 0.0;
  v11 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v14, &v15, &v12, &v13) )
  {
    v8 = *(float *)v10;
    if ( *(float *)v10 > 1.0 )
      *(float *)v10 = 1.0;
    if ( *(float *)v10 >= dbl_A2FC68 )
    {
      if ( v8 > 1.0 )
      {
        *(float *)v10 = 1.0;
        v8 = (float)1.0;
      }
    }
    else
    {
      *(float *)v10 = 0.0;
      v8 = (float)0.0;
    }
    v9 = byte_B43074 == 0;
    flt_B42EA8 = v14;
    flt_B42F44 = v15;
    if ( v9 )
    {
      flt_B43200 = v8;
      v15 = fabs(v11);
      flt_B43208 = v15;
      flt_B43210 = v12;
      flt_B43218 = v13;
    }
    else
    {
      flt_B43204 = v8;
      v15 = fabs(v11);
      flt_B4320C = v15;
      flt_B43214 = v12;
      flt_B4321C = v13;
    }
  }
}
