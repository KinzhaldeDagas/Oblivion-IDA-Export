char __cdecl sub_9602C0(
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
  float v14; // [esp+10h] [ebp-54h]
  float v15; // [esp+14h] [ebp-50h]
  float v16; // [esp+18h] [ebp-4Ch]
  NiRenderTargetGroup v17[2]; // [esp+1Ch] [ebp-48h] BYREF

  sub_96F3C0((float *)v17, a2, a4, a1, flt_A37080, flt_A79DB4, 0x20); /*0x9602f1*/
  sub_96F170((float *)v17, a3, a5); /*0x960304*/
  *a6 = sub_680CC0((float *)v17); /*0x960316*/
  if ( NiRenderTargetGroup::GetRenderTargetsNum(v17) != 3 && NiRenderTargetGroup::GetRenderTargetsNum(v17) != 2 ) /*0x960332*/
    return 0; /*0x960334*/
  Connections = PathGraphNode_GetConnections(v17); /*0x96033e*/
  *a7 = *Connections; /*0x96034e*/
  a7[1].firstNode.data = Connections[1].firstNode.data; /*0x960359*/
  if ( a8 ) /*0x96035c*/
  {
    Position = TESObjectREFR_GetPosition((TESChildCELL *)v17); /*0x960362*/
    *a9 = *Position; /*0x96036d*/
    a9[1] = Position[1]; /*0x960372*/
    a9[2] = Position[2]; /*0x960378*/
    v14 = -*a9; /*0x960383*/
    v15 = -a9[1]; /*0x96038b*/
    v13 = -a9[2]; /*0x960399*/
    *a10 = v14; /*0x96039b*/
    v16 = v13; /*0x96039d*/
    a10[1] = v15; /*0x9603a5*/
    a10[2] = v16; /*0x9603a8*/
  }
  return 1; /*0x960336*/
}
