char __cdecl sub_9603C0(
        float a1,
        int a2,
        float *a3,
        int a4,
        float *a5,
        float *a6,
        BSSimpleList_VoidPtr *a7,
        char a8,
        float *a9,
        float *a10)
{
  BSSimpleList_VoidPtr *Connections; // eax
  float *Position; // eax
  double v13; // st7
  float v14; // [esp+10h] [ebp-58h]
  float v15; // [esp+14h] [ebp-54h]
  float v16; // [esp+18h] [ebp-50h]
  NiRenderTargetGroup v17[2]; // [esp+1Ch] [ebp-4Ch] BYREF

  sub_96F7A0((float *)v17, a2, a4, a1, flt_A37080, flt_A79DB4, 0x20); /*0x9603f1*/
  sub_96F170((float *)v17, a3, a5); /*0x960404*/
  *a6 = sub_680CC0((float *)v17); /*0x960416*/
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v17) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v17) != 2 ) /*0x960432*/
    return 0; /*0x960434*/
  Connections = PathGraphNode_GetConnections(v17); /*0x96043e*/
  *a7 = *Connections; /*0x96044e*/
  a7[1].firstNode.data = Connections[1].firstNode.data; /*0x960459*/
  if ( a8 ) /*0x96045c*/
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v17); /*0x960462*/
    *a9 = *Position; /*0x96046d*/
    a9[1] = Position[1]; /*0x960472*/
    a9[2] = Position[2]; /*0x960478*/
    v14 = -*a9; /*0x960486*/
    v15 = -a9[1]; /*0x96048e*/
    v13 = -a9[2]; /*0x96049c*/
    *a10 = v14; /*0x96049e*/
    v16 = v13; /*0x9604a0*/
    a10[1] = v15; /*0x9604a8*/
    a10[2] = v16; /*0x9604ab*/
  }
  return 1; /*0x960436*/
}
