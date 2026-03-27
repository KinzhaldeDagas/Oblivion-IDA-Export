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

  sub_765480((NiDX9Renderer *)*(this + 5), (float *)a8, 0);
  v34[0] = a8->scale * a8->rot.data[0][0];
  v34[1] = a8->rot.data[1][0] * a8->scale;
  v34[2] = a8->rot.data[2][0] * a8->scale;
  v34[4] = a8->rot.data[0][1] * a8->scale;
  v34[5] = a8->rot.data[1][1] * a8->scale;
  v34[6] = a8->rot.data[2][1] * a8->scale;
  v34[8] = a8->rot.data[0][2] * a8->scale;
  v34[9] = a8->rot.data[1][2] * a8->scale;
  v34[0xA] = a8->rot.data[2][2] * a8->scale;
  v34[0xC] = a8->pos.x;
  v34[0xD] = a8->pos.y;
  v34[0xE] = a8->pos.z;
  v34[3] = 0.0;
  v34[7] = 0.0;
  v34[0xB] = 0.0;
  v34[0xF] = 1.0;
  D3DXMatrixInverse_0(v35, 0, v34);
  v11 = *(_DWORD *)(a6 + 0x18);
  if ( v11 )
    v12 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 0x54))(*(_DWORD *)(a6 + 0x18)) == 2;
  else
    v12 = 0;
  v13 = v12 ? v11 : 0;
  if ( v13 )
  {
    ShadowSceneNode = GetShadowSceneNode(*(_DWORD *)(v13 + 0x1C) >> 0x1C);
    v15 = *sub_405AD0(*(_DWORD **)(ShadowSceneNode + 0x118), &v33);
    if ( v33 )
    {
      v16 = (void (__thiscall ***)(_DWORD, int))v33;
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
        (**v16)(v16, 1);
    }
    if ( v15 )
    {
      v17 = *(float *)(v15 + 0x10C);
      v18 = *(float *)(v15 + 0x110);
      v30 = *(float *)(v15 + 0x108);
      v31 = v17;
      v32 = v18;
      sub_43F350(&v30);
      v19 = *(char **)(v15 + 0xE4);
      v20 = *(char **)(v15 + 0xE8);
      *(this + 0x2C) = *(char **)(v15 + 0xE0);
      *(this + 0x2D) = v19;
      *(this + 0x2E) = v20;
      *((float *)this + 0x2F) = 1.0;
      v28 = *(char **)(v15 + 0xF0);
      v29 = *(char **)(v15 + 0xF4);
      *(this + 0x34) = *(char **)(v15 + 0xEC);
      v21 = v30;
      *(this + 0x35) = v28;
      *(this + 0x36) = v29;
      v25 = -v21;
      v22 = v31;
      *((float *)this + 0x30) = v25;
      *((float *)this + 0x37) = 1.0;
      v26 = -v22;
      v23 = v32;
      *((float *)this + 0x31) = v26;
      v27 = -v23;
      *((float *)this + 0x32) = v27;
      *((float *)this + 0x33) = 1.0;
    }
    *(this + 0x3C) = (char *)dword_B46668;
    *(this + 0x3D) = (char *)dword_B4666C;
    *(this + 0x3E) = (char *)dword_B46670;
    *(this + 0x3F) = (char *)dword_B46674;
    *(this + 0x40) = (char *)dword_B46658;
    *(this + 0x41) = (char *)dword_B4665C;
    *(this + 0x42) = (char *)dword_B46660;
    *(this + 0x43) = (char *)dword_B46664;
  }
  return sub_779710((NiD3DShader *)this, a2, a3, a4, a5, a6, a7, a8, a9);
}
