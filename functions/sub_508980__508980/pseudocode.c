// SetSTBBColorConstants console command handler: stores one UInt16/word-like value plus three floats into globals B2C728..B2C734 for STBB color constants. This is flat STBB shader state, not SpeedTreeRT 360 selection.
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

  if ( Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v12, &v13, &v14) ) /*0x5089ba*/
  {
    v8 = v12; /*0x5089d5*/
    dword_B2C728 = *(_DWORD *)v11; /*0x5089d9*/
    *(float *)&v15 = v8; /*0x5089df*/
    v9 = v13; /*0x5089e7*/
    dword_B2C72C = v15; /*0x5089eb*/
    *(float *)&v16 = v9; /*0x5089f0*/
    v10 = v14; /*0x5089f8*/
    dword_B2C730 = v16; /*0x5089fc*/
    *(float *)&v17 = v10; /*0x508a02*/
    dword_B2C734 = v17; /*0x508a0a*/
  }
}
