char __cdecl sub_9649B0(
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
  float v14; // [esp+10h] [ebp-5Ch]
  float v15; // [esp+14h] [ebp-58h]
  float v16; // [esp+18h] [ebp-54h]
  NiRenderTargetGroup v17[2]; // [esp+1Ch] [ebp-50h] BYREF

  sub_974250((float *)v17, a2, a4, a1, flt_A37080, flt_A79DB4, 0x20); /*0x9649e1*/
  sub_96F170((float *)v17, a3, a5); /*0x9649f4*/
  *a6 = sub_680CC0((float *)v17); /*0x964a06*/
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v17) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v17) != 2 ) /*0x964a22*/
    return 0; /*0x964a24*/
  Connections = PathGraphNode_GetConnections(v17); /*0x964a2e*/
  *a7 = *Connections; /*0x964a3e*/
  a7[1].firstNode.data = Connections[1].firstNode.data; /*0x964a49*/
  if ( a8 ) /*0x964a4c*/
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v17); /*0x964a52*/
    *a9 = *Position; /*0x964a60*/
    a9[1] = Position[1]; /*0x964a65*/
    a9[2] = Position[2]; /*0x964a6b*/
    v14 = -*a9; /*0x964a79*/
    v15 = -a9[1]; /*0x964a81*/
    v13 = -a9[2]; /*0x964a8f*/
    *a10 = v14; /*0x964a91*/
    v16 = v13; /*0x964a93*/
    a10[1] = v15; /*0x964a9b*/
    a10[2] = v16; /*0x964a9e*/
  }
  return 1; /*0x964a26*/
}
