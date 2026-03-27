void __cdecl sub_508980(
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
  double v9; // st7
  double v10; // st7
  UInt16 v11[2]; // [esp+0h] [ebp-20h] BYREF
  float v12; // [esp+4h] [ebp-1Ch] BYREF
  float v13; // [esp+8h] [ebp-18h] BYREF
  float v14; // [esp+Ch] [ebp-14h] BYREF
  int v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  int v17; // [esp+1Ch] [ebp-4h]

  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v12, &v13, &v14) )
  {
    v8 = v12;
    dword_B2C728 = *(_DWORD *)v11;
    *(float *)&v15 = v8;
    v9 = v13;
    dword_B2C72C = v15;
    *(float *)&v16 = v9;
    v10 = v14;
    dword_B2C730 = v16;
    *(float *)&v17 = v10;
    dword_B2C734 = v17;
  }
}
