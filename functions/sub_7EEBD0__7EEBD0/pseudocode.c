int __thiscall sub_7EEBD0(char **this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  double v13; // st7
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  BOOL v20; // eax
  int v21; // eax
  int ShadowSceneNode; // eax
  _DWORD *v23; // esi
  void (__thiscall ***v24)(_DWORD, int); // edi
  int v26; // [esp+Ch] [ebp-94h] BYREF
  int v27; // [esp+10h] [ebp-90h]
  int v28; // [esp+14h] [ebp-8Ch]
  float v29; // [esp+18h] [ebp-88h] BYREF
  float v30; // [esp+1Ch] [ebp-84h]
  float v31; // [esp+20h] [ebp-80h]
  int v32; // [esp+24h] [ebp-7Ch]
  int v33; // [esp+28h] [ebp-78h] BYREF
  float v34; // [esp+2Ch] [ebp-74h] BYREF
  float v35; // [esp+30h] [ebp-70h]
  float v36; // [esp+34h] [ebp-6Ch]
  float v37; // [esp+38h] [ebp-68h]
  float v38; // [esp+3Ch] [ebp-64h]
  float v39; // [esp+40h] [ebp-60h]
  float v40; // [esp+44h] [ebp-5Ch]
  float v41; // [esp+48h] [ebp-58h]
  float v42; // [esp+4Ch] [ebp-54h]
  float v43; // [esp+50h] [ebp-50h]
  float v44; // [esp+54h] [ebp-4Ch]
  float v45; // [esp+58h] [ebp-48h]
  float x; // [esp+5Ch] [ebp-44h]
  float y; // [esp+60h] [ebp-40h]
  float z; // [esp+64h] [ebp-3Ch]
  float v49; // [esp+68h] [ebp-38h]
  NiTransform v50; // [esp+6Ch] [ebp-34h] BYREF

  sub_765480((NiDX9Renderer *)*(this + 5), a8, 0);
  z = 0.0;
  y = 0.0;
  x = 0.0;
  v45 = 0.0;
  v43 = 0.0;
  v42 = 0.0;
  v41 = 0.0;
  v40 = 0.0;
  v38 = 0.0;
  v37 = 0.0;
  v36 = 0.0;
  v35 = 0.0;
  v49 = 1.0;
  v44 = 1.0;
  v39 = 1.0;
  v34 = 1.0;
  sub_718A80(a8, &v50);
  v10 = dword_B4665C;
  v11 = dword_B46660;
  v29 = *(float *)&dword_B46658;
  v12 = dword_B46664;
  v30 = *(float *)&v10;
  v34 = v50.rot.data[0][0] * v50.scale;
  v31 = *(float *)&v11;
  v32 = v12;
  v35 = v50.rot.data[1][0] * v50.scale;
  v36 = v50.rot.data[2][0] * v50.scale;
  v38 = v50.rot.data[0][1] * v50.scale;
  v39 = v50.rot.data[1][1] * v50.scale;
  v40 = v50.rot.data[2][1] * v50.scale;
  v42 = v50.rot.data[0][2] * v50.scale;
  v43 = v50.rot.data[1][2] * v50.scale;
  v44 = v50.scale * v50.rot.data[2][2];
  x = v50.pos.x;
  y = v50.pos.y;
  z = v50.pos.z;
  v49 = 1.0;
  *(float *)&v26 = v29;
  v27 = v10;
  v28 = v11;
  D3DXVec3TransformCoord_0(&v29, &v26, &v34);
  *(float *)&v26 = v29;
  v13 = v30;
  *(float *)&dword_B46710 = v29;
  *(float *)&v27 = v13;
  v14 = v31;
  dword_B46714 = v27;
  v15 = (float *)dword_B43124;
  *(float *)&v28 = v14;
  dword_B46718 = v28;
  v26 = *((int *)v15 + 0x1A);
  v27 = *((int *)v15 + 0x1D);
  v16 = v15[0x20];
  v17 = v27;
  *(float *)&v28 = v16;
  v18 = v28;
  dword_B466F8 = v26;
  dword_B466FC = v17;
  dword_B46700 = v18;
  v19 = *(_DWORD *)(a6 + 0x18);
  if ( v19 )
    v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x54))(v19) == 0xF;
  else
    v20 = 0;
  v21 = v20 ? v19 : 0;
  if ( v21 )
  {
    ShadowSceneNode = GetShadowSceneNode(*(_DWORD *)(v21 + 0x1C) >> 0x1C);
    v23 = (_DWORD *)*sub_405AD0(*(_DWORD **)(ShadowSceneNode + 0x118), &v33);
    if ( v33 )
    {
      v24 = (void (__thiscall ***)(_DWORD, int))v33;
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
        (**v24)(v24, 1);
    }
    if ( v23 )
    {
      *(this + 0x2C) = (char *)v23[0x38];
      *(this + 0x2D) = (char *)v23[0x39];
      *(this + 0x2E) = (char *)v23[0x3A];
    }
  }
  return 0;
}
