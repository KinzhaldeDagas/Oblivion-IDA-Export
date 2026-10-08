// MoonSugarEffect decode: TallGrassShader transform slot (+0x34). Calls sub_765480 with passed NiTransform, computes inverse/local wind or shadow constants, then falls through to base sub_779710. Transform-copy wobble reaches this but per-vertex grass motion is shader-owned.
int __thiscall sub_7E6710(
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
  float v11; // eax
  double v12; // st7
  int v13; // edi
  BOOL v14; // eax
  _DWORD *v15; // eax
  void *v16; // ebx
  int ShadowSceneNode; // eax
  float *v18; // edi
  float v19; // edx
  float v20; // eax
  float v21; // edx
  float v22; // eax
  double v23; // st6
  double v24; // st6
  double v25; // st6
  int v26; // edi
  float v28; // [esp+3Ch] [ebp-CCh]
  float v29; // [esp+40h] [ebp-C8h]
  float v30; // [esp+44h] [ebp-C4h]
  float v31; // [esp+50h] [ebp-B8h]
  float v32; // [esp+54h] [ebp-B4h]
  float v33; // [esp+58h] [ebp-B0h] BYREF
  float v34; // [esp+5Ch] [ebp-ACh]
  float v35; // [esp+60h] [ebp-A8h]
  float v36; // [esp+64h] [ebp-A4h] BYREF
  float v37; // [esp+68h] [ebp-A0h]
  float v38; // [esp+6Ch] [ebp-9Ch]
  int v39; // [esp+70h] [ebp-98h] BYREF
  int v40; // [esp+74h] [ebp-94h]
  void (__thiscall ***v41)(_DWORD, int); // [esp+78h] [ebp-90h]
  float v42[16]; // [esp+7Ch] [ebp-8Ch] BYREF
  _BYTE v43[12]; // [esp+BCh] [ebp-4Ch] BYREF
  _BYTE v44[64]; // [esp+C8h] [ebp-40h] BYREF

  NiDX9Renderer_SetModelTransform((NiDX9Renderer *)*(this + 5), (float *)a8, 0); /*0x7e6729*/
  v11 = unk_B42E90; /*0x7e6733*/
  v42[0] = a8->scale * a8->rot.data[0][0]; /*0x7e673d*/
  v12 = a8->rot.data[1][0] * a8->scale; /*0x7e674d*/
  v40 = LODWORD(v11); /*0x7e6751*/
  v42[1] = v12; /*0x7e6755*/
  v42[2] = a8->rot.data[2][0] * a8->scale; /*0x7e675f*/
  v42[4] = a8->rot.data[0][1] * a8->scale; /*0x7e6769*/
  v42[5] = a8->rot.data[1][1] * a8->scale; /*0x7e6773*/
  v42[6] = a8->rot.data[2][1] * a8->scale; /*0x7e677d*/
  v42[8] = a8->rot.data[0][2] * a8->scale; /*0x7e6787*/
  v42[9] = a8->rot.data[1][2] * a8->scale; /*0x7e6791*/
  v42[0xA] = a8->rot.data[2][2] * a8->scale; /*0x7e679e*/
  v42[0xC] = a8->pos.x; /*0x7e67a8*/
  v42[0xD] = a8->pos.y; /*0x7e67b2*/
  v42[0xE] = a8->pos.z; /*0x7e67bc*/
  v42[3] = 0.0; /*0x7e67c5*/
  v42[7] = 0.0; /*0x7e67c9*/
  v42[0xB] = 0.0; /*0x7e67cd*/
  v42[0xF] = 1.0; /*0x7e67d6*/
  D3DXMatrixInverse_0((int)v44, 0, (int)v42); /*0x7e67dd*/
  v33 = 0.0; /*0x7e67e4*/
  v34 = 1.0; /*0x7e67f6*/
  v35 = 0.0; /*0x7e6803*/
  D3DXVec3TransformNormal_0((int)v43, (int)&v33, (int)v44); /*0x7e6807*/
  D3DXVec3Normalize_0((int)&v33, (int)v43); /*0x7e6819*/
  OB_ShaderConstantStorage_010201A0[0xA7] = v33; /*0x7e6829*/
  OB_ShaderConstantStorage_010201A0[0xA8] = v34; /*0x7e6833*/
  v13 = *(_DWORD *)(a6 + 0x18); /*0x7e6839*/
  if ( v13 ) /*0x7e683e*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x54))(v13) == 4; /*0x7e6855*/
  else
    v14 = 0; /*0x7e6840*/
  v15 = v14 ? (_DWORD *)v13 : 0;
  v16 = v15; /*0x7e685d*/
  if ( v15 ) /*0x7e685f*/
  {
    ShadowSceneNode = GetShadowSceneNode(v15[7] >> 0x1C); /*0x7e686f*/
    v18 = (float *)*ShadowSceneLight_GetLightRef(*(_DWORD **)(ShadowSceneNode + 0x118), &v39); /*0x7e6887*/
    if ( v39 ) /*0x7e688f*/
    {
      v41 = (void (__thiscall ***)(_DWORD, int))v39; /*0x7e6891*/
      if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) ) /*0x7e6899*/
      {
        if ( v41 ) /*0x7e68a9*/
          (**v41)(v41, 1); /*0x7e68b1*/
      }
    }
    if ( v18 ) /*0x7e68b5*/
    {
      v19 = v18[0x43]; /*0x7e68c1*/
      v20 = v18[0x44]; /*0x7e68c7*/
      v36 = v18[0x42]; /*0x7e68cd*/
      v37 = v19; /*0x7e68d5*/
      v38 = v20; /*0x7e68d9*/
      Vector3_NormalizeInPlace(&v36); /*0x7e68dd*/
      v21 = v18[0x39]; /*0x7e68ea*/
      v22 = v18[0x3A]; /*0x7e68f0*/
      OB_ShaderConstantStorage_010201A0[0xAF] = v18[0x38]; /*0x7e6928*/
      OB_ShaderConstantStorage_010201A0[0xB0] = v21; /*0x7e6932*/
      OB_ShaderConstantStorage_010201A0[0xB1] = v22; /*0x7e693c*/
      OB_ShaderConstantStorage_010201A0[0xB2] = 1.0; /*0x7e6941*/
      v31 = v18[0x3C]; /*0x7e6969*/
      v32 = v18[0x3D]; /*0x7e6979*/
      OB_ShaderConstantStorage_010201A0[0x9B] = v18[0x3B]; /*0x7e6989*/
      v23 = v36; /*0x7e6997*/
      OB_ShaderConstantStorage_010201A0[0x9C] = v31; /*0x7e699b*/
      OB_ShaderConstantStorage_010201A0[0x9D] = v32; /*0x7e69a2*/
      v28 = -v23; /*0x7e69a8*/
      v24 = v37; /*0x7e69b0*/
      OB_ShaderConstantStorage_010201A0[0x9E] = 1.0; /*0x7e69b4*/
      OB_ShaderConstantStorage_010201A0[0x97] = v28; /*0x7e69bc*/
      v29 = -v24; /*0x7e69c1*/
      v25 = v38; /*0x7e69c9*/
      OB_ShaderConstantStorage_010201A0[0x98] = v29; /*0x7e69cd*/
      v30 = -v25; /*0x7e69d5*/
      OB_ShaderConstantStorage_010201A0[0x99] = v30; /*0x7e69dd*/
      OB_ShaderConstantStorage_010201A0[0x9A] = 1.0; /*0x7e69eb*/
    }
    v26 = v40; /*0x7e69f0*/
    if ( v40 == 0x197 ) /*0x7e69fa*/
    {
      sub_7E6310((float *)this, (int)a3, (float *)a8); /*0x7e6a07*/
    }
    else if ( unk_B43344 ) /*0x7e6a0e*/
    {
      if ( (unsigned __int16)BSShaderLightingProperty__CountFrustumVisibleEnabledLights(v16) ) /*0x7e6a19*/
        sub_7E61C0((float *)this, (int)v16, (int)v44, COERCE_INT(a8->scale), v26); /*0x7e6a36*/
    }
  }
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x7e6a7b*/
}
