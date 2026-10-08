// MoonSugarEffect decode: SetImageSpaceGlow command handler. In non-HDR path it calls sub_7B4830 to update native BlurShader globals.
bool __cdecl sub_508860(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  int v9; // eax
  int v10; // ecx
  bool v11; // zf
  double v12; // st7
  float v13; // [esp+10h] [ebp-10h] BYREF
  float v14; // [esp+14h] [ebp-Ch] BYREF
  float v15; // [esp+18h] [ebp-8h] BYREF
  UInt16 v16[2]; // [esp+1Ch] [ebp-4h] BYREF

  v15 = 0.0; /*0x508869*/
  v14 = 0.0; /*0x508871*/
  v13 = 0.0; /*0x508876*/
  *(_DWORD *)v16 = 0; /*0x5088a7*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v16, &v15, &v14, &v13); /*0x5088af*/
  if ( result ) /*0x5088b9*/
  {
    v9 = *(_DWORD *)v16; /*0x5088bf*/
    v10 = 0; /*0x5088c3*/
    if ( *(int *)v16 <= 0 ) /*0x5088c7*/
    {
      if ( *(int *)v16 < 0 ) /*0x5088d0*/
      {
        v9 = -*(_DWORD *)v16; /*0x5088d2*/
        v10 = 1; /*0x5088d4*/
        *(_DWORD *)v16 = -*(_DWORD *)v16; /*0x5088d9*/
      }
    }
    else
    {
      v10 = 2; /*0x5088c9*/
    }
    if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x5088dd*/
    {
      v11 = OB_RendererGlobalState_010201A0.pad_1DB[0] == 0; /*0x5088e6*/
      v12 = v15; /*0x5088ed*/
      dword_B2C1E4 = v10; /*0x5088f1*/
      if ( v11 ) /*0x5088f7*/
      {
        unk_B431F8 = v12; /*0x50891d*/
        unk_B43220 = v9; /*0x508923*/
        unk_B431E8 = v14; /*0x50892e*/
        unk_B431F0 = v13; /*0x508937*/
        return 1; /*0x50892c*/
      }
      else
      {
        unk_B431FC = v12; /*0x5088f9*/
        unk_B43224 = v9; /*0x5088ff*/
        unk_B431EC = v14; /*0x50890a*/
        unk_B431F4 = v13; /*0x508913*/
        return 1; /*0x508908*/
      }
    }
    else
    {
      sub_7B4830(v10, v9, v15, v14, v13, dword_B06D54); /*0x508963*/
      return 1; /*0x50896b*/
    }
  }
  return result; /*0x5088bb*/
}
