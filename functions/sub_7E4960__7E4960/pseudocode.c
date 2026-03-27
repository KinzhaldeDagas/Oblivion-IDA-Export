int __thiscall sub_7E4960(_WORD *this, int a2)
{
  float v2; // eax
  float v3; // edx
  bool v5; // zf
  float v6; // ecx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // ebx
  int v10; // esi
  float *v11; // ebx
  double v12; // st7
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // si
  unsigned int v16; // et2
  _DWORD *v17; // esi
  unsigned int v18; // ebx
  int v19; // ecx
  int v20; // eax
  NiPoint3 *v21; // eax
  int v22; // esi
  NiPoint3 *v23; // eax
  int result; // eax
  float v25; // [esp+10h] [ebp-50h]
  float v26; // [esp+10h] [ebp-50h]
  float v27; // [esp+10h] [ebp-50h]
  float v28; // [esp+10h] [ebp-50h]
  float v29; // [esp+14h] [ebp-4Ch]
  NiPoint3 v30; // [esp+18h] [ebp-48h] BYREF
  NiPoint3 v31; // [esp+24h] [ebp-3Ch] BYREF
  float v32; // [esp+30h] [ebp-30h]
  float v33; // [esp+34h] [ebp-2Ch]
  float v34; // [esp+38h] [ebp-28h]
  float v35; // [esp+3Ch] [ebp-24h] BYREF
  float v36; // [esp+40h] [ebp-20h]
  float v37; // [esp+44h] [ebp-1Ch]
  NiPoint3 v38; // [esp+48h] [ebp-18h] BYREF
  NiPoint3 v39; // [esp+54h] [ebp-Ch] BYREF

  v2 = Vector3_InitValue_;
  v3 = dword_B3F9B0;
  v5 = *(this + 0x8D) == 0;
  v6 = *(&Vector3_InitValue_ + 1);
  v30.x = v2;
  v30.y = v6;
  v30.z = v3;
  v31.x = v2;
  v31.y = v6;
  v31.z = v3;
  if ( v5 )
  {
    v30.x = v2;
    v30.y = v6;
    v30.z = v3;
    v31.x = v2;
    v31.y = v6;
    v31.z = v3;
  }
  else
  {
    do
    {
      do
        v7 = *(_DWORD *)(*((_DWORD *)this + 0x45) + 4 * (rand() % (unsigned int)(unsigned __int16)*(this + 0x8D)));
      while ( !v7 );
    }
    while ( !*(_DWORD *)(v7 + 0xB4) );
    v8 = *(_DWORD *)(v7 + 0xB8);
    if ( v8 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(v8 + 8) + 0x40);
      v10 = *(_DWORD *)(*(_DWORD *)(v8 + 0x14) + 4 * (rand() % v9));
      v11 = *(float **)(v10 + 0x1C);
      v25 = (double)rand() / dbl_A3D5A8;
      v12 = v25;
      v26 = 1.0 - v25;
      v35 = v11[0x22] * v26;
      v36 = v11[0x23] * v26;
      v37 = v26 * v11[0x24];
      v32 = *(float *)(v10 + 0x88) * v12;
      v33 = *(float *)(v10 + 0x8C) * v12;
      v34 = v12 * *(float *)(v10 + 0x90);
      v38.x = v32 + v35;
      v38.y = v33 + v36;
      v38.z = v34 + v37;
      v30 = v38;
      v13 = rand();
      v27 = ((double)v13 + (double)v13) / dbl_A3D5A8 - dbl_A2F928;
      v29 = v27;
      v14 = rand();
      v28 = ((double)v14 + (double)v14) / dbl_A3D5A8 - dbl_A2F928;
      v39.x = v28;
      v39.y = 0.0;
      v39.z = v29;
      sub_43F350(&v39.x);
      v31 = *(NiPoint3 *)&sub_7101F0((NiTransform *)(v7 + 0x64), (NiTransform *)&v38, &v39)->rot.data[0][0];
    }
    else
    {
      v15 = *(_WORD *)(*(_DWORD *)(v7 + 0xB4) + 8);
      v16 = rand() % (unsigned int)v15;
      v17 = *(_DWORD **)(v7 + 0xB4);
      v18 = v16;
      if ( v17 )
      {
        v19 = v17[0xD];
        if ( v19 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 0x4C))(v19) )
        {
          memset(&v38, 0, 9);
          v35 = 0.0;
          v36 = 0.0;
          LOBYTE(v37) = 0;
          if ( sub_728AB0((int)v17, 1) )
          {
            sub_728B60((int)v17, (int)&v38);
            sub_728D00((int)v17, (int)&v35);
            v30 = *(NiPoint3 *)(LODWORD(v38.x) + v18 * LODWORD(v38.y));
            v31 = *(NiPoint3 *)(LODWORD(v35) + v18 * LODWORD(v36));
            sub_728B20((int)v17);
          }
        }
        else
        {
          v20 = v17[7];
          if ( v20 )
            v21 = (NiPoint3 *)(v20 + 0xC * v18);
          else
            v21 = (NiPoint3 *)&Vector3_InitValue_;
          v30 = *v21;
          v22 = v17[8];
          if ( v22 )
            v23 = (NiPoint3 *)(v22 + 0xC * v18);
          else
            v23 = (NiPoint3 *)&Vector3_InitValue_;
          v31 = *v23;
        }
        if ( *((_BYTE *)this + 0x78) )
        {
          v30 = *(NiPoint3 *)sub_53D4B0((NiTransform *)(v7 + 0x64), &v39.x, &v30);
          v31 = *(NiPoint3 *)&sub_7101F0((NiTransform *)(v7 + 0x64), (NiTransform *)&v39, &v31)->rot.data[0][0];
        }
      }
    }
  }
  result = 0x20 * a2;
  *(NiPoint3 *)(result + *((_DWORD *)this + 0x1B)) = v30;
  *(float *)(result + *((_DWORD *)this + 0x1B) + 0xC) = *((float *)this + 0x3E);
  *(NiPoint3 *)(result + *((_DWORD *)this + 0x1B) + 0x10) = v31;
  return result;
}
