int __thiscall sub_7E5020(int this, int a2)
{
  int v3; // edi
  double v4; // st6
  int v5; // eax
  int v6; // eax
  NiTransform *v7; // edi
  float v8; // ecx
  float v9; // edx
  int result; // eax
  float v11; // [esp+8h] [ebp-2Ch]
  float v12; // [esp+8h] [ebp-2Ch]
  float v13; // [esp+8h] [ebp-2Ch]
  float v14; // [esp+Ch] [ebp-28h]
  NiPoint3 v15; // [esp+10h] [ebp-24h] BYREF
  NiPoint3 v16; // [esp+1Ch] [ebp-18h] BYREF
  float v17; // [esp+28h] [ebp-Ch] BYREF
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]

  if ( *(_WORD *)(this + 0x11A) )
  {
    v3 = **(_DWORD **)(this + 0x114);
    if ( v3 )
    {
      v11 = (double)rand() / dbl_A3D5A8;
      v17 = 0.0;
      v4 = *(float *)(this + 0x74) * v11;
      v16.x = 0.0;
      v18 = v4;
      v16.y = v18;
      v19 = 0.0;
      v16.z = 0.0;
      v5 = rand();
      v12 = ((double)v5 + (double)v5) / dbl_A3D5A8 - dbl_A2F928;
      v14 = v12;
      v6 = rand();
      v13 = ((double)v6 + (double)v6) / dbl_A3D5A8 - dbl_A2F928;
      v17 = v13;
      v15.x = v13;
      v18 = 0.0;
      v19 = v14;
      v15.y = 0.0;
      v15.z = v14;
      sub_43F350(&v15.x);
      if ( *(_BYTE *)(this + 0x78) )
      {
        v7 = (NiTransform *)(v3 + 0x64);
        v16 = *(NiPoint3 *)sub_53D4B0(v7, &v17, &v16);
        v15 = *(NiPoint3 *)&sub_7101F0(v7, (NiTransform *)&v17, &v15)->rot.data[0][0];
      }
    }
  }
  else
  {
    v8 = *(&Vector3_InitValue_ + 1);
    v9 = dword_B3F9B0;
    v16.x = Vector3_InitValue_;
    v16.y = v8;
    v16.z = v9;
    v15.x = v16.x;
    v15.y = v8;
    v15.z = v9;
  }
  result = 0x20 * a2;
  *(NiPoint3 *)(result + *(_DWORD *)(this + 0x6C)) = v16;
  *(float *)(*(_DWORD *)(this + 0x6C) + result + 0xC) = *(float *)(this + 0xF8);
  *(NiPoint3 *)(*(_DWORD *)(this + 0x6C) + result + 0x10) = v15;
  return result;
}
