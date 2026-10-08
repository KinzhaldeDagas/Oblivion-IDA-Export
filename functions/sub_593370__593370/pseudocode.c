double __userpurge sub_593370@<st0>(int a1@<ecx>, double st7_0@<st0>, signed int arg0, _DWORD *a4)
{
  bool v6; // zf
  double Float; // st6
  Tile *v8; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  double a3; // [esp+Ch] [ebp-8h]
  int v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+1Ch] [ebp+8h]
  float v15; // [esp+1Ch] [ebp+8h]
  float v16; // [esp+1Ch] [ebp+8h]

  if ( a4 ) /*0x59337d*/
  {
    if ( arg0 >= 8 && arg0 <= 0xB || arg0 == 2 ) /*0x593394*/
    {
      v6 = *(_DWORD *)(a1 + 0x54) == 0; /*0x59339a*/
      *(_DWORD *)(a1 + 0x90) = 0; /*0x59339e*/
      if ( !v6 ) /*0x5933a8*/
      {
        Float = Tile_GetFloat(a4, 0xFE0); /*0x5933b5*/
        v12 = Double_To_SInt32(st7_0); /*0x5933c1*/
        a3 = sub_588D90(a4, st7_0); /*0x5933ca*/
        v14 = a3 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x54), 0xFBD); /*0x5933e3*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFABu, v14); /*0x5933f3*/
        a2 = Tile_GetFloat(a4, 0xFCB); /*0x593408*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFCBu, a2); /*0x593410*/
        a2a = Tile_GetFloat(a4, 0xFCA); /*0x593425*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFCAu, a2a); /*0x59342d*/
        v15 = (float)v12; /*0x593438*/
        v13 = sub_588C50(a4) + v15; /*0x593449*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFADu, v13); /*0x593459*/
        st7_0 = sub_588CF0(a4); /*0x593460*/
        v16 = Float + v15; /*0x59346d*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFACu, v16); /*0x59347d*/
        Tile_SetFloat(*(Tile **)(a1 + 0x54), 0xFA1u, fConstant_2); /*0x593494*/
        *(_DWORD *)(a1 + 0x90) = a4; /*0x593499*/
      }
    }
    else
    {
      v8 = *(Tile **)(a1 + 0x54); /*0x5934a7*/
      if ( v8 ) /*0x5934ac*/
        Tile_SetFloat(v8, 0xFA1u, 1.0); /*0x5934b9*/
    }
  }
  return st7_0; /*0x59349f*/
}
