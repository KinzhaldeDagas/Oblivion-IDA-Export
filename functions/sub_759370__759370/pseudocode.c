void __thiscall sub_759370(int this, float a2, int a3)
{
  int v4; // ecx
  bool v5; // zf
  NiTransform *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  unsigned __int16 i; // di
  int v11; // esi
  int v12; // eax
  float v13; // edx
  int v14; // eax
  float v15; // ecx
  double v16; // st7
  float v17; // edx
  float v18; // eax
  float v19; // edx
  double v20; // st7
  float v21; // [esp+10h] [ebp-124h]
  float v22; // [esp+10h] [ebp-124h]
  float v23; // [esp+10h] [ebp-124h]
  float v24; // [esp+14h] [ebp-120h]
  float v25; // [esp+18h] [ebp-11Ch]
  float v26; // [esp+1Ch] [ebp-118h] BYREF
  float v27; // [esp+20h] [ebp-114h]
  float v28; // [esp+24h] [ebp-110h]
  float v29; // [esp+28h] [ebp-10Ch] BYREF
  float v30; // [esp+2Ch] [ebp-108h]
  float v31; // [esp+30h] [ebp-104h]
  NiTransform v32; // [esp+34h] [ebp-100h] BYREF
  __int64 v33; // [esp+88h] [ebp-ACh]
  float v34; // [esp+90h] [ebp-A4h]
  NiTransform v35; // [esp+98h] [ebp-9Ch] BYREF
  float v36[13]; // [esp+CCh] [ebp-68h] BYREF
  NiTransform v37; // [esp+100h] [ebp-34h] BYREF

  if ( 0.0 != *(float *)(this + 0x1C) )
  {
    if ( *(_WORD *)(a3 + 0x48) )
    {
      v4 = *(_DWORD *)(this + 0x18);
      if ( v4 )
      {
        if ( *(_BYTE *)(this + 0x30) || 0.0 != *(float *)(this + 0x20) )
        {
          qmemcpy(&v35, (const void *)(v4 + 0x64), sizeof(v35));
          qmemcpy(v36, (const void *)(*(_DWORD *)(this + 0x10) + 0x64), sizeof(v36));
          sub_718A80(v36, &v37);
          sub_53D7A0(&v37, (NiTransform *)&v32.scale, &v35);
          v5 = *(_BYTE *)(this + 0x30) == 0;
          *(_QWORD *)&v32.rot.data[1][0] = v33;
          v32.rot.data[1][2] = v34;
          if ( !v5 )
          {
            if ( sub_8AA390((float *)(this + 0x34), &Vector3_InitValue_) )
            {
              v6 = sub_7101F0((NiTransform *)&v32.scale, &v32, (NiPoint3 *)(this + 0x34));
              v7 = v6->rot.data[0][0];
              v8 = v6->rot.data[0][1];
              v9 = v6->rot.data[0][2];
              v29 = v7;
              v30 = v8;
              v31 = v9;
              sub_43F350(&v29);
            }
          }
          for ( i = 0; i < *(_WORD *)(a3 + 0x48); ++i )
          {
            v11 = *(_DWORD *)(a3 + 0x5C) + 0x1C * i;
            v24 = a2 - *(float *)(v11 + 0x14);
            if ( 0.0 != v24 )
            {
              v12 = *(_DWORD *)(a3 + 0x1C);
              v13 = *(float *)(v12 + 0xC * i);
              v14 = v12 + 0xC * i;
              v15 = *(float *)(v14 + 4);
              v32.pos.x = v13;
              v16 = v13 - v32.rot.data[1][0];
              v17 = *(float *)(v14 + 8);
              v32.pos.y = v15;
              v32.pos.z = v17;
              v32.rot.data[2][0] = v16;
              v32.rot.data[2][1] = v15 - v32.rot.data[1][1];
              v32.rot.data[2][2] = v17 - v32.rot.data[1][2];
              v21 = v32.rot.data[2][1] * v32.rot.data[2][1]
                  + v32.rot.data[2][0] * v32.rot.data[2][0]
                  + v32.rot.data[2][2] * v32.rot.data[2][2];
              v22 = sqrt(v21);
              if ( !*(_BYTE *)(this + 0x24) || *(float *)(this + 0x28) >= (double)v22 )
              {
                v25 = 1.0;
                if ( *(_BYTE *)(this + 0x30) )
                {
                  v18 = *(float *)v11;
                  v19 = *(float *)(v11 + 8);
                  v27 = *(float *)(v11 + 4);
                  v26 = v18;
                  v28 = v19;
                  sub_43F350(&v26);
                  v25 = v27 * v30 + v29 * v26 + v28 * v31;
                }
                v23 = v24 * *(float *)(this + 0x1C) * v25 / (*(float *)(this + 0x20) * v22 + dbl_A2F928);
                v20 = v23;
                if ( v23 >= 1.0 )
                {
                  *(float *)v11 = Vector3_InitValue_;
                  *(float *)(v11 + 4) = *(&Vector3_InitValue_ + 1);
                  *(float *)(v11 + 8) = dword_B3F9B0;
                }
                else
                {
                  v32.rot.data[0][0] = *(float *)v11 * v20;
                  v32.rot.data[0][1] = *(float *)(v11 + 4) * v20;
                  v32.rot.data[0][2] = v20 * *(float *)(v11 + 8);
                  *(float *)v11 = *(float *)v11 - v32.rot.data[0][0];
                  *(float *)(v11 + 4) = *(float *)(v11 + 4) - v32.rot.data[0][1];
                  *(float *)(v11 + 8) = *(float *)(v11 + 8) - v32.rot.data[0][2];
                }
              }
            }
          }
        }
        else if ( *(_BYTE *)(this + 0x24) )
        {
          sub_759120((float *)this, a2, a3);
        }
        else
        {
          sub_759030((float *)this, a2, a3);
        }
      }
    }
  }
}
