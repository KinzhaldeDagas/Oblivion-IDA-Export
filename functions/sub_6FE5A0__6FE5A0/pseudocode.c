float *__stdcall sub_6FE5A0(int a1, float *a2, float *a3)
{
  int v4; // eax
  int v5; // esi
  float v6; // ebx
  float x; // eax
  int v8; // edx
  int v9; // ecx
  float *result; // eax
  int v11; // ecx
  int v12; // esi
  NiTransform *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double y; // st6
  NiPoint3 v18; // [esp+8h] [ebp-18h] BYREF
  float v19; // [esp+14h] [ebp-Ch] BYREF
  float v20; // [esp+18h] [ebp-8h]
  float v21; // [esp+1Ch] [ebp-4h]
  float v22; // [esp+24h] [ebp+4h]
  float v23; // [esp+28h] [ebp+8h]
  float v24; // [esp+28h] [ebp+8h]
  float v25; // [esp+28h] [ebp+8h]

  if ( a1 && (v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0xC))(a1), (v5 = v4) != 0) )
  {
    LODWORD(v6) = (*(unsigned __int16 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 0xB4) + 0x50))(*(_DWORD *)(v4 + 0xB4));
    v18.x = v6;
    v22 = (double)rand() / dbl_A3D5A8;
    *(_QWORD *)&v18.x = (__int64)(v22 * (double)SLODWORD(v6));
    x = v18.x;
    if ( LODWORD(v18.x) == LODWORD(v6) )
      LODWORD(x) = LODWORD(v18.x) - 1;
    v8 = *(_DWORD *)(*(_DWORD *)(v5 + 0xB4) + 0x1C);
    v9 = 3 * LODWORD(x);
    result = a2;
    v11 = 4 * v9;
    *a2 = *(float *)(v11 + v8);
    a2[1] = *(float *)(v11 + v8 + 4);
    a2[2] = *(float *)(v11 + v8 + 8);
    v23 = *(float *)(a1 + 0x94);
    *result = *result * v23;
    result[1] = result[1] * v23;
    result[2] = v23 * result[2];
    v12 = *(_DWORD *)(v5 + 0xB4);
    if ( *(_DWORD *)(v12 + 0x20) )
    {
      v18 = *(NiPoint3 *)(v11 + *(_DWORD *)(v12 + 0x20));
      v13 = sub_7101F0((NiTransform *)(a1 + 0x64), (NiTransform *)&v19, &v18);
      v14 = a3[1];
      v15 = *a3;
      v18.x = v13->rot.data[0][0];
      v16 = a3[2];
      v18.y = v13->rot.data[0][1];
      v18.z = v13->rot.data[0][2];
      v24 = v14 * v14 + v15 * v15 + v16 * v16;
      v25 = sqrt(v24);
      v19 = v18.x * v25;
      y = v18.y;
      *a3 = v19;
      v20 = y * v25;
      a3[1] = v20;
      v21 = v25 * v18.z;
      result = (float *)LODWORD(v21);
      a3[2] = v21;
    }
  }
  else
  {
    *a2 = Vector3_InitValue_;
    a2[1] = *(&Vector3_InitValue_ + 1);
    a2[2] = dword_B3F9B0;
    return a2;
  }
  return result;
}
