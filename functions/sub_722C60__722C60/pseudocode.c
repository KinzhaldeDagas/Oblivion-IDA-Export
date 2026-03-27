int __thiscall sub_722C60(float *this, NiTransform *a2, float *a3, char a4)
{
  int v5; // ebx
  int v6; // eax
  float *v7; // ecx
  float *v8; // esi
  float *v9; // eax
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
  NiPoint3 *v21; // esi
  NiTransform *v22; // eax
  double v23; // st7
  float v24; // eax
  double v25; // st7
  int v26; // edi
  float *v27; // eax
  __int16 v28; // [esp+10h] [ebp-88h]
  float v29; // [esp+14h] [ebp-84h] BYREF
  float v30; // [esp+18h] [ebp-80h]
  float v31; // [esp+1Ch] [ebp-7Ch]
  float v32; // [esp+20h] [ebp-78h]
  float v33; // [esp+24h] [ebp-74h]
  float v34; // [esp+28h] [ebp-70h]
  float v35; // [esp+2Ch] [ebp-6Ch]
  NiPoint3 *v36; // [esp+30h] [ebp-68h]
  float *v37; // [esp+34h] [ebp-64h]
  NiTransform v38; // [esp+38h] [ebp-60h] BYREF
  float v39[9]; // [esp+74h] [ebp-24h] BYREF

  LOWORD(v5) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x2D) + 0x50))(*((_DWORD *)this + 0x2D));
  v6 = *((_DWORD *)this + 0x2D);
  v7 = *(float **)(v6 + 0x1C);
  v8 = *(float **)(v6 + 0x20);
  v28 = v5;
  v36 = (NiPoint3 *)v7;
  v37 = v8;
  if ( a4 )
  {
    v9 = NiMAtrix33_Multiply((float *)a2, v38.rot.data[1], this + 0xC);
    sub_710490(this + 0xC, v39, v9);
    v10 = sub_7101F0(a2, (NiTransform *)&v38.scale, (NiPoint3 *)this + 7);
    v32 = v10->rot.data[0][0] + *a3;
    v33 = v10->rot.data[0][1] + a3[1];
    v34 = v10->rot.data[0][2] + a3[2];
    v29 = v32 - *(this + 0x15);
    v30 = v33 - *(this + 0x16);
    v31 = v34 - *(this + 0x17);
    v35 = *(this + 0x18);
    v11 = sub_710250((float *)&v38, &v29, this + 0xC);
    v12 = v36;
    v35 = 1.0 / v35;
    v32 = *v11 * v35;
    v33 = v11[1] * v35;
    v34 = v35 * v11[2];
    if ( v36 )
    {
      if ( (_WORD)v5 )
      {
        v13 = (unsigned __int16)v5;
        do
        {
          v14 = sub_7101F0((NiTransform *)v39, &v38, v12++);
          --v13;
          v29 = v32 + v14->rot.data[0][0];
          v30 = v14->rot.data[0][1] + v33;
          v15 = v30;
          v16 = v14->rot.data[0][2] + v34;
          v12[0xFFFFFFFF].x = v29;
          v12[0xFFFFFFFF].y = v15;
          v31 = v16;
          v12[0xFFFFFFFF].z = v31;
        }
        while ( v13 );
      }
    }
    v17 = v37;
    if ( v37 )
    {
      sub_7102B0(v39, v38.rot.data[1]);
      if ( (_WORD)v5 )
      {
        v18 = (unsigned __int16)v5;
        do
        {
          v19 = sub_710250((float *)&v38, v17, v38.rot.data[1]);
          *v17 = *v19;
          v17[1] = v19[1];
          v17[2] = v19[2];
          v17 += 3;
          --v18;
        }
        while ( v18 );
      }
    }
  }
  else
  {
    if ( v7 )
    {
      if ( (_WORD)v5 )
      {
        v21 = (NiPoint3 *)v7;
        v5 = (unsigned __int16)v5;
        do
        {
          v22 = sub_7101F0(a2, &v38, v21++);
          --v5;
          v29 = *a3 + v22->rot.data[0][0];
          v30 = v22->rot.data[0][1] + a3[1];
          v23 = v22->rot.data[0][2];
          v24 = v30;
          v25 = v23 + a3[2];
          v21[0xFFFFFFFF].x = v29;
          v21[0xFFFFFFFF].y = v24;
          v31 = v25;
          v21[0xFFFFFFFF].z = v31;
        }
        while ( v5 );
        LOWORD(v5) = v28;
        v8 = v37;
      }
    }
    if ( v8 )
    {
      sub_7102B0((float *)a2, v38.rot.data[1]);
      if ( (_WORD)v5 )
      {
        v26 = (unsigned __int16)v5;
        do
        {
          v27 = sub_710250((float *)&v38, v8, v38.rot.data[1]);
          *v8 = *v27;
          v8[1] = v27[1];
          v8[2] = v27[2];
          v8 += 3;
          --v26;
        }
        while ( v26 );
      }
    }
  }
  return sub_72A0F0((float *)(*((_DWORD *)this + 0x2D) + 0xC), (unsigned __int16)v5, &v36->x);
}
