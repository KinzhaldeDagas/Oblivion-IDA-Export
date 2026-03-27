void __thiscall sub_6CEF80(int this, unsigned __int8 a2, float a3, int a4)
{
  int v5; // esi
  int v6; // ebp
  NiPoint3 *v7; // ebx
  int v8; // eax
  float v9; // ecx
  double v10; // st7
  int v11; // edx
  double v12; // st6
  float *v13; // eax
  NiTransform *v14; // eax
  float v15; // ecx
  int v16; // edx
  int v17; // esi
  float v18; // edi
  double v19; // st7
  float v20; // ecx
  int v21; // edx
  float *v22; // eax
  NiTransform *v23; // eax
  NiTransform *v24; // eax
  float v25; // [esp+48h] [ebp-E0h] BYREF
  int v26; // [esp+4Ch] [ebp-DCh]
  float v27; // [esp+50h] [ebp-D8h]
  int v28; // [esp+54h] [ebp-D4h]
  float v29; // [esp+58h] [ebp-D0h]
  NiTransform v30; // [esp+5Ch] [ebp-CCh] BYREF
  int v31; // [esp+90h] [ebp-98h]
  int v32; // [esp+94h] [ebp-94h] BYREF
  float v33[8]; // [esp+98h] [ebp-90h] BYREF
  NiTransform v34; // [esp+B8h] [ebp-70h] BYREF
  float v35[3]; // [esp+108h] [ebp-20h] BYREF
  float v36[5]; // [esp+114h] [ebp-14h] BYREF

  v5 = *(_DWORD *)(*(_DWORD *)(this + 0x14) + 0x18 * a2);
  v6 = *(_DWORD *)(this + 0x50) + 0x68 * a2;
  v31 = this;
  if ( !v5 || a3 == *(float *)v6 )
  {
    sub_471390((_DWORD *)(v6 + 0x24), &Vector3_InitValue_);
    sub_471430((_DWORD *)(v6 + 0x24), (float *)&dword_B27110);
    if ( !_isnan(1.0) )
    {
      if ( _finite(1.0) )
        *(float *)(v6 + 0x40) = 1.0;
    }
    *(float *)v6 = a3;
  }
  else
  {
    if ( *(_BYTE *)(this + 0x54) || (v7 = (NiPoint3 *)(v6 + 4), sub_6CBC10((float *)(v6 + 4))) )
    {
      v7 = (NiPoint3 *)(v6 + 4);
      *(_BYTE *)(this + 0x54) = 0;
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v6 + 4);
      v8 = dword_B27118;
      v9 = *(float *)&dword_B27110;
      v29 = -flt_A7DEB4;
      v10 = *(float *)(this + 0x40);
      v11 = dword_B27114;
      v27 = *(float *)&v8;
      v28 = dword_B2711C;
      v25 = v9;
      v26 = v11;
      if ( v29 != v10 )
      {
        v25 = *(float *)(this + 0x3C);
        v26 = *(_DWORD *)(this + 0x40);
        v27 = *(float *)(this + 0x44);
        v28 = *(_DWORD *)(this + 0x48);
      }
      v12 = *(float *)(v6 + 0x14);
      v30.rot.data[1][2] = v9;
      *(_QWORD *)&v30.rot.data[2][0] = __PAIR64__(dword_B27118, v11);
      LODWORD(v30.rot.data[2][2]) = dword_B2711C;
      if ( v12 != v29 )
      {
        v13 = sub_714D80((float *)&v34, (float *)(v6 + 0x10));
        v30.rot.data[1][2] = *v13;
        *(_QWORD *)&v30.rot.data[2][0] = *(_QWORD *)(v13 + 1);
        v30.rot.data[2][2] = v13[3];
      }
      sub_714CF0(&v25, (float *)&v30, &v30.rot.data[1][2]);
      sub_47C600(&v30, (NiTransform *)(v6 + 0x44));
    }
    if ( *(float *)v6 <= (double)a3 )
    {
      sub_470AB0(v33);
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v33);
      sub_470AB0(&v34.rot.data[1][1]);
      sub_6CB3C0(&v7->x, (int)&v34.rot.data[1][1]);
      qmemcpy((void *)(v6 + 0x24), sub_6CB820(&v34.rot.data[1][1], (int)&v34.scale, v33), 0x20u);
      if ( -flt_A7DEB4 != *(float *)(v6 + 0x24) )
      {
        v24 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], (NiPoint3 *)(v6 + 0x24));
        sub_471390((_DWORD *)(v6 + 0x24), (float *)v24);
      }
      *(float *)v6 = a3;
      qmemcpy(v7, v33, 0x20u);
    }
    else
    {
      (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v5 + 0x80))(v5, &v30.rot.data[1][1], &v32);
      sub_470AB0(&v34.rot.data[1][1]);
      (*(void (__thiscall **)(int, int, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, v32, a4, &v34.rot.data[1][1]);
      sub_470AB0(v35);
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(
        v5,
        LODWORD(v30.rot.data[1][1]),
        a4,
        v35);
      sub_470AB0(v33);
      (*(void (__thiscall **)(int, _DWORD, int, float *))(*(_DWORD *)v5 + 0x4C))(v5, LODWORD(a3), a4, v33);
      sub_470AB0(&v34.scale);
      sub_6CB3C0(&v7->x, (int)&v34.scale);
      qmemcpy((void *)(v6 + 0x24), sub_6CB820(&v34.scale, (int)&v30.rot.data[1][2], &v34.rot.data[1][1]), 0x20u);
      if ( -flt_A7DEB4 != *(float *)(v6 + 0x24) )
      {
        v14 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], (NiPoint3 *)(v6 + 0x24));
        sub_471390((_DWORD *)(v6 + 0x24), (float *)v14);
      }
      v15 = *(float *)&dword_B2711C;
      v16 = dword_B27110;
      v17 = dword_B27114;
      v29 = -flt_A7DEB4;
      v18 = *(float *)&dword_B27118;
      v30.rot.data[1][0] = v15;
      v19 = *(float *)(v31 + 0x40);
      *(_QWORD *)&v30.rot.data[0][0] = __PAIR64__(v17, v16);
      v30.rot.data[0][2] = v18;
      if ( v29 != v19 )
      {
        *(_QWORD *)&v30.rot.data[0][0] = *(_QWORD *)(v31 + 0x3C);
        v20 = *(float *)(v31 + 0x48);
        v30.rot.data[0][2] = *(float *)(v31 + 0x44);
        v30.rot.data[1][0] = v20;
      }
      v25 = *(float *)&v16;
      v21 = dword_B2711C;
      v26 = v17;
      v27 = v18;
      v28 = v21;
      if ( v36[1] != v29 )
      {
        v22 = sub_714D80(&v30.rot.data[1][2], v36);
        v25 = *v22;
        v26 = *((_DWORD *)v22 + 1);
        v27 = v22[2];
        v28 = *((_DWORD *)v22 + 3);
      }
      sub_714CF0((float *)&v30, (float *)&v34, &v25);
      sub_47C600(&v34, (NiTransform *)(v6 + 0x44));
      sub_6CB3C0(v35, (int)&v34.scale);
      qmemcpy(v7, sub_6CB820(&v34.scale, (int)&v30.rot.data[1][2], v33), 0x20u);
      if ( -flt_A7DEB4 != v7->x )
      {
        v23 = sub_7101F0((NiTransform *)(v6 + 0x44), (NiTransform *)&v30.rot.data[1][2], v7);
        sub_471390(v7, (float *)v23);
      }
      qmemcpy((void *)(v6 + 0x24), sub_6CB820((float *)(v6 + 0x24), (int)&v30.rot.data[1][2], &v7->x), 0x20u);
      *(float *)v6 = a3;
      qmemcpy(v7, v33, 0x20u);
    }
  }
}
