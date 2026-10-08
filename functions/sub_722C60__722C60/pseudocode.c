void __thiscall sub_722C60(float *this, NiTransform *a2, float *a3, char a4)
{
  int v5; // ebx
  int v6; // eax
  NiPoint3 *v7; // ecx
  float *v8; // esi
  NiMatrix33 *v9; // eax
  NiTransform *v10; // eax
  float *v11; // eax
  NiPoint3 *v12; // esi
  int v13; // edi
  NiTransform *v14; // eax
  float v15; // ecx
  double v16; // st7
  float *v17; // esi
  int v18; // edi
  float *v19; // eax
  NiPoint3 *v20; // esi
  NiTransform *v21; // eax
  double v22; // st7
  float v23; // eax
  double v24; // st7
  int v25; // edi
  float *v26; // eax
  __int16 v27; // [esp+10h] [ebp-88h]
  float v28; // [esp+14h] [ebp-84h] BYREF
  float v29; // [esp+18h] [ebp-80h]
  float v30; // [esp+1Ch] [ebp-7Ch]
  float v31; // [esp+20h] [ebp-78h]
  float v32; // [esp+24h] [ebp-74h]
  float v33; // [esp+28h] [ebp-70h]
  float v34; // [esp+2Ch] [ebp-6Ch]
  NiPoint3 *vertices; // [esp+30h] [ebp-68h]
  float *v36; // [esp+34h] [ebp-64h]
  NiTransform v37; // [esp+38h] [ebp-60h] BYREF
  float v38[9]; // [esp+74h] [ebp-24h] BYREF

  LOWORD(v5) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2D) + 0x50))(*((_DWORD *)this + 0x2D)); /*0x722c81*/
  v6 = *((_DWORD *)this + 0x2D); /*0x722c84*/
  v7 = *(NiPoint3 **)(v6 + 0x1C); /*0x722c8a*/
  v8 = *(float **)(v6 + 0x20); /*0x722c8d*/
  v27 = v5; /*0x722c90*/
  vertices = v7; /*0x722c94*/
  v36 = v8; /*0x722c98*/
  if ( a4 ) /*0x722c9c*/
  {
    v9 = NiMAtrix33_Multiply(&a2->rot, (NiMatrix33 *)v37.rot.data[1], (NiMatrix33 *)(this + 0xC)); /*0x722cb4*/
    sub_710490(this + 0xC, v38, (float *)v9); /*0x722cc1*/
    v10 = sub_7101F0(a2, (NiTransform *)&v37.scale, (NiPoint3 *)this + 7); /*0x722cd1*/
    v31 = v10->rot.data[0][0] + *a3; /*0x722ce2*/
    v32 = v10->rot.data[0][1] + a3[1]; /*0x722cec*/
    v33 = v10->rot.data[0][2] + a3[2]; /*0x722d00*/
    v28 = v31 - *(this + 0x15); /*0x722d0a*/
    v29 = v32 - *(this + 0x16); /*0x722d15*/
    v30 = v33 - *(this + 0x17); /*0x722d20*/
    v34 = *(this + 0x18); /*0x722d27*/
    v11 = NiPoint3_MultiplyMatrix3((float *)&v37, &v28, this + 0xC); /*0x722d2b*/
    v12 = vertices; /*0x722d34*/
    v34 = 1.0 / v34; /*0x722d41*/
    v31 = *v11 * v34; /*0x722d51*/
    v32 = v11[1] * v34; /*0x722d5a*/
    v33 = v34 * v11[2]; /*0x722d61*/
    if ( vertices ) /*0x722d65*/
    {
      if ( (_WORD)v5 ) /*0x722d6e*/
      {
        v13 = (unsigned __int16)v5; /*0x722d70*/
        do /*0x722dbd*/
        {
          v14 = sub_7101F0((NiTransform *)v38, &v37, v12++); /*0x722d7d*/
          --v13; /*0x722d8b*/
          v28 = v31 + v14->rot.data[0][0]; /*0x722d8e*/
          v29 = v14->rot.data[0][1] + v32; /*0x722d99*/
          v15 = v29; /*0x722d9d*/
          v16 = v14->rot.data[0][2] + v33; /*0x722da8*/
          v12[0xFFFFFFFF].x = v28; /*0x722dac*/
          v12[0xFFFFFFFF].y = v15; /*0x722daf*/
          v30 = v16; /*0x722db2*/
          v12[0xFFFFFFFF].z = v30; /*0x722dba*/
        }
        while ( v13 ); /*0x722dbd*/
      }
    }
    v17 = v36; /*0x722dbf*/
    if ( v36 ) /*0x722dc5*/
    {
      sub_7102B0(v38, v37.rot.data[1]); /*0x722dd0*/
      if ( (_WORD)v5 ) /*0x722ddb*/
      {
        v18 = (unsigned __int16)v5; /*0x722ddd*/
        do /*0x722e0b*/
        {
          v19 = NiPoint3_MultiplyMatrix3((float *)&v37, v17, v37.rot.data[1]); /*0x722ded*/
          *v17 = *v19; /*0x722df4*/
          v17[1] = v19[1]; /*0x722df9*/
          v17[2] = v19[2]; /*0x722dff*/
          v17 += 3; /*0x722e05*/
          --v18; /*0x722e08*/
        }
        while ( v18 ); /*0x722e0b*/
      }
    }
  }
  else
  {
    if ( v7 ) /*0x722e37*/
    {
      if ( (_WORD)v5 ) /*0x722e3c*/
      {
        v20 = v7; /*0x722e45*/
        v5 = (unsigned __int16)v5; /*0x722e47*/
        do /*0x722e99*/
        {
          v21 = sub_7101F0(a2, &v37, v20++); /*0x722e5d*/
          --v5; /*0x722e69*/
          v28 = *a3 + v21->rot.data[0][0]; /*0x722e6c*/
          v29 = v21->rot.data[0][1] + a3[1]; /*0x722e7a*/
          v22 = v21->rot.data[0][2]; /*0x722e7e*/
          v23 = v29; /*0x722e81*/
          v24 = v22 + a3[2]; /*0x722e85*/
          v20[0xFFFFFFFF].x = v28; /*0x722e88*/
          v20[0xFFFFFFFF].y = v23; /*0x722e8b*/
          v30 = v24; /*0x722e8e*/
          v20[0xFFFFFFFF].z = v30; /*0x722e96*/
        }
        while ( v5 ); /*0x722e99*/
        LOWORD(v5) = v27; /*0x722e9b*/
        v8 = v36; /*0x722e9f*/
      }
    }
    if ( v8 ) /*0x722ea5*/
    {
      sub_7102B0((float *)a2, v37.rot.data[1]); /*0x722eb7*/
      if ( (_WORD)v5 ) /*0x722ebf*/
      {
        v25 = (unsigned __int16)v5; /*0x722ec5*/
        do /*0x722ef9*/
        {
          v26 = NiPoint3_MultiplyMatrix3((float *)&v37, v8, v37.rot.data[1]); /*0x722edb*/
          *v8 = *v26; /*0x722ee2*/
          v8[1] = v26[1]; /*0x722ee7*/
          v8[2] = v26[2]; /*0x722eed*/
          v8 += 3; /*0x722ef3*/
          --v25; /*0x722ef6*/
        }
        while ( v25 ); /*0x722ef9*/
      }
    }
  }
  NiSphere_ComputeFromVertices((NiSphere *)(*((_DWORD *)this + 0x2D) + 0xC), (unsigned __int16)v5, vertices); /*0x722e23*/
}
