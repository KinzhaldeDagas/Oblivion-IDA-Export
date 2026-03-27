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
  int v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int v16; // [esp+18h] [ebp-4h]

  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v12)
    && *(int *)v10 >= 0
    && v11 >= 0
    && v12 >= 0
    && *(int *)v10 <= 0xFF
    && v11 <= 0xFF
    && v12 <= 0xFF )
  {
    v8 = dbl_A3DDD8;
    *(float *)&v13 = (double)*(int *)v10 / v8;
    v9 = (double)v11;
    dword_B45E14 = v13;
    *(float *)&v14 = v9 / v8;
    dword_B45E18 = v14;
    *(float *)&v15 = (double)v12 / v8;
    *(float *)&v16 = 1.0;
    dword_B45E1C = v15;
    dword_B45E20 = v16;
  }
}
