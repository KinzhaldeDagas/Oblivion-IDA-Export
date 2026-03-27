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
  int v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]

  *(_DWORD *)v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11, &v12) )
  {
    v8 = dbl_A4C2D0;
    *(float *)&v13 = (double)*(int *)v10 * v8;
    v9 = (double)v11;
    dword_B4616C = v13;
    *(float *)&v14 = v9 * v8;
    dword_B46170 = v14;
    *(float *)&v15 = v8 * (double)v12;
    dword_B46174 = v15;
    *(float *)&dword_B46178 = 1.0;
  }
}
