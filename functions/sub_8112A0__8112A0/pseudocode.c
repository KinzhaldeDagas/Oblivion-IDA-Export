// MoonSugarEffect decode: DistantLODShader transform slot (+0x34). Calls sub_765480 with passed NiTransform, sets shadow/lighting constants, then falls through to base transform handling.
int __thiscall sub_8112A0(
        char **this,
        int a2,
        NiSkinInstance *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        NiTransform *a8,
        int a9)
{
  int v11; // ebx
  BOOL v12; // eax
  int v13; // eax
  int ShadowSceneNode; // eax
  int v15; // ebx
  void (__thiscall ***v16)(_DWORD, int); // ebp
  float v17; // edx
  float v18; // eax
  char *v19; // edx
  char *v20; // eax
  double v21; // st6
  double v22; // st6
  double v23; // st6
  float v25; // [esp+10h] [ebp-ACh]
  float v26; // [esp+14h] [ebp-A8h]
  float v27; // [esp+18h] [ebp-A4h]
  char *v28; // [esp+24h] [ebp-98h]
  char *v29; // [esp+28h] [ebp-94h]
  float v30; // [esp+2Ch] [ebp-90h] BYREF
  float v31; // [esp+30h] [ebp-8Ch]
  float v32; // [esp+34h] [ebp-88h]
  int v33; // [esp+38h] [ebp-84h] BYREF
  float v34[16]; // [esp+3Ch] [ebp-80h] BYREF
  _BYTE v35[64]; // [esp+7Ch] [ebp-40h] BYREF

  NiDX9Renderer_SetModelTransform((NiDX9Renderer *)*(this + 5), (float *)a8, 0); /*0x8112b8*/
  v34[0] = a8->scale * a8->rot.data[0][0]; /*0x8112c9*/
  v34[1] = a8->rot.data[1][0] * a8->scale; /*0x8112db*/
  v34[2] = a8->rot.data[2][0] * a8->scale; /*0x8112e5*/
  v34[4] = a8->rot.data[0][1] * a8->scale; /*0x8112ef*/
  v34[5] = a8->rot.data[1][1] * a8->scale; /*0x8112f9*/
  v34[6] = a8->rot.data[2][1] * a8->scale; /*0x811303*/
  v34[8] = a8->rot.data[0][2] * a8->scale; /*0x81130d*/
  v34[9] = a8->rot.data[1][2] * a8->scale; /*0x811317*/
  v34[0xA] = a8->rot.data[2][2] * a8->scale; /*0x811321*/
  v34[0xC] = a8->pos.x; /*0x811328*/
  v34[0xD] = a8->pos.y; /*0x81132f*/
  v34[0xE] = a8->pos.z; /*0x811336*/
  v34[3] = 0.0; /*0x81133c*/
  v34[7] = 0.0; /*0x811340*/
  v34[0xB] = 0.0; /*0x811344*/
  v34[0xF] = 1.0; /*0x81134a*/
  D3DXMatrixInverse_0((int)v35, 0, (int)v34); /*0x811351*/
  v11 = *(_DWORD *)(a6 + 0x18); /*0x81135d*/
  if ( v11 ) /*0x811362*/
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 0x54))(*(_DWORD *)(a6 + 0x18)) == 2; /*0x811379*/
  else
    v12 = 0; /*0x811364*/
  v13 = v12 ? v11 : 0;
  if ( v13 ) /*0x811381*/
  {
    ShadowSceneNode = GetShadowSceneNode(*(_DWORD *)(v13 + 0x1C) >> 0x1C); /*0x811391*/
    v15 = *ShadowSceneLight_GetLightRef(*(_DWORD **)(ShadowSceneNode + 0x118), &v33); /*0x8113a9*/
    if ( v33 ) /*0x8113b1*/
    {
      v16 = (void (__thiscall ***)(_DWORD, int))v33; /*0x8113b4*/
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) ) /*0x8113ba*/
        (**v16)(v16, 1); /*0x8113d1*/
    }
    if ( v15 ) /*0x8113d6*/
    {
      v17 = *(float *)(v15 + 0x10C); /*0x8113e2*/
      v18 = *(float *)(v15 + 0x110); /*0x8113e8*/
      v30 = *(float *)(v15 + 0x108); /*0x8113ee*/
      v31 = v17; /*0x8113f6*/
      v32 = v18; /*0x8113fa*/
      Vector3_NormalizeInPlace(&v30); /*0x8113fe*/
      v19 = *(char **)(v15 + 0xE4); /*0x81140b*/
      v20 = *(char **)(v15 + 0xE8); /*0x811411*/
      *(this + 0x2C) = *(char **)(v15 + 0xE0); /*0x811449*/
      *(this + 0x2D) = v19; /*0x811453*/
      *(this + 0x2E) = v20; /*0x81145d*/
      *((float *)this + 0x2F) = 1.0; /*0x811463*/
      v28 = *(char **)(v15 + 0xF0); /*0x81148b*/
      v29 = *(char **)(v15 + 0xF4); /*0x81149b*/
      *(this + 0x34) = *(char **)(v15 + 0xEC); /*0x8114ab*/
      v21 = v30; /*0x8114b9*/
      *(this + 0x35) = v28; /*0x8114bd*/
      *(this + 0x36) = v29; /*0x8114c5*/
      v25 = -v21; /*0x8114cb*/
      v22 = v31; /*0x8114d3*/
      *((float *)this + 0x30) = v25; /*0x8114d7*/
      *((float *)this + 0x37) = 1.0; /*0x8114df*/
      v26 = -v22; /*0x8114e5*/
      v23 = v32; /*0x8114ed*/
      *((float *)this + 0x31) = v26; /*0x8114f1*/
      v27 = -v23; /*0x8114f9*/
      *((float *)this + 0x32) = v27; /*0x811501*/
      *((float *)this + 0x33) = 1.0; /*0x81150f*/
    }
    *(this + 0x3C) = (char *)LODWORD(flt_B46638[0xC]); /*0x81151b*/
    *(this + 0x3D) = (char *)LODWORD(flt_B46638[0xD]); /*0x811527*/
    *(this + 0x3E) = (char *)LODWORD(flt_B46638[0xE]); /*0x811532*/
    *(this + 0x3F) = (char *)LODWORD(flt_B46638[0xF]); /*0x81153e*/
    *(this + 0x40) = (char *)LODWORD(flt_B46638[8]); /*0x81154a*/
    *(this + 0x41) = (char *)LODWORD(flt_B46638[9]); /*0x811555*/
    *(this + 0x42) = (char *)LODWORD(flt_B46638[0xA]); /*0x811561*/
    *(this + 0x43) = (char *)LODWORD(flt_B46638[0xB]); /*0x81156d*/
  }
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x8115b3*/
}
