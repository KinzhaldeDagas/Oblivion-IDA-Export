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
  int v11; // eax
  double v12; // st7
  int v13; // edi
  BOOL v14; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // ebx
  int ShadowSceneNode; // eax
  int v18; // edi
  float v19; // edx
  float v20; // eax
  int v21; // edx
  int v22; // eax
  double v23; // st6
  double v24; // st6
  double v25; // st6
  int v26; // edi
  int v28; // [esp+3Ch] [ebp-CCh]
  int v29; // [esp+40h] [ebp-C8h]
  int v30; // [esp+44h] [ebp-C4h]
  int v31; // [esp+50h] [ebp-B8h]
  int v32; // [esp+54h] [ebp-B4h]
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

  sub_765480((NiDX9Renderer *)*(this + 5), (float *)a8, 0);
  v11 = dword_B42E90;
  v42[0] = a8->scale * a8->rot.data[0][0];
  v12 = a8->rot.data[1][0] * a8->scale;
  v40 = v11;
  v42[1] = v12;
  v42[2] = a8->rot.data[2][0] * a8->scale;
  v42[4] = a8->rot.data[0][1] * a8->scale;
  v42[5] = a8->rot.data[1][1] * a8->scale;
  v42[6] = a8->rot.data[2][1] * a8->scale;
  v42[8] = a8->rot.data[0][2] * a8->scale;
  v42[9] = a8->rot.data[1][2] * a8->scale;
  v42[0xA] = a8->rot.data[2][2] * a8->scale;
  v42[0xC] = a8->pos.x;
  v42[0xD] = a8->pos.y;
  v42[0xE] = a8->pos.z;
  v42[3] = 0.0;
  v42[7] = 0.0;
  v42[0xB] = 0.0;
  v42[0xF] = 1.0;
  D3DXMatrixInverse_0(v44, 0, v42);
  v33 = 0.0;
  v34 = 1.0;
  v35 = 0.0;
  D3DXVec3TransformNormal_0(v43, &v33, v44);
  D3DXVec3Normalize_0(&v33, v43);
  flt_B460B0 = v33;
  flt_B460B4 = v34;
  v13 = *(_DWORD *)(a6 + 0x18);
  if ( v13 )
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x54))(v13) == 4;
  else
    v14 = 0;
  v15 = v14 ? (_DWORD *)v13 : 0;
  v16 = v15;
  if ( v15 )
  {
    ShadowSceneNode = GetShadowSceneNode(v15[7] >> 0x1C);
    v18 = *sub_405AD0(*(_DWORD **)(ShadowSceneNode + 0x118), &v39);
    if ( v39 )
    {
      v41 = (void (__thiscall ***)(_DWORD, int))v39;
      if ( !InterlockedDecrement((volatile LONG *)(v39 + 4)) )
      {
        if ( v41 )
          (**v41)(v41, 1);
      }
    }
    if ( v18 )
    {
      v19 = *(float *)(v18 + 0x10C);
      v20 = *(float *)(v18 + 0x110);
      v36 = *(float *)(v18 + 0x108);
      v37 = v19;
      v38 = v20;
      sub_43F350(&v36);
      v21 = *(_DWORD *)(v18 + 0xE4);
      v22 = *(_DWORD *)(v18 + 0xE8);
      dword_B460D0 = *(int *)(v18 + 0xE0);
      dword_B460D4 = v21;
      dword_B460D8 = v22;
      *(float *)&dword_B460DC = 1.0;
      v31 = *(_DWORD *)(v18 + 0xF0);
      v32 = *(_DWORD *)(v18 + 0xF4);
      dword_B46080 = *(_DWORD *)(v18 + 0xEC);
      v23 = v36;
      dword_B46084 = v31;
      dword_B46088 = v32;
      *(float *)&v28 = -v23;
      v24 = v37;
      *(float *)&dword_B4608C = 1.0;
      dword_B46070 = v28;
      *(float *)&v29 = -v24;
      v25 = v38;
      dword_B46074 = v29;
      *(float *)&v30 = -v25;
      dword_B46078 = v30;
      *(float *)&dword_B4607C = 1.0;
    }
    v26 = v40;
    if ( v40 == 0x197 )
    {
      sub_7E6310((float *)this, (int)a3, (float *)a8);
    }
    else if ( byte_B43344 )
    {
      if ( (unsigned __int16)sub_7ED600(v16) )
        sub_7E61C0((float *)this, (int)v16, (int)v44, COERCE_INT(a8->scale), v26);
    }
  }
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9);
}
