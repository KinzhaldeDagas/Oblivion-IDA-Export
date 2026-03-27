int __thiscall sub_75A870(int this, signed __int16 a2)
{
  signed __int16 v3; // ax
  int v4; // ebp
  int result; // eax
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // eax
  float *v12; // eax
  int v13; // ecx
  int v14; // ebp
  float v15; // edx
  unsigned int v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+10h] [ebp+4h]

  v16 = *(_DWORD *)(this + 0x1C);
  *(_WORD *)(this + 0x18) = a2;
  FormHeapFree(v16);
  v3 = a2;
  if ( a2 <= 1 )
    v3 = 1;
  v4 = v3;
  *(_DWORD *)(this + 0x1C) = FormHeapAlloc((unsigned __int64)(unsigned int)v3 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v3);
  result = 0;
  if ( v4 >= 4 )
  {
    v6 = 0;
    v7 = ((unsigned int)(v4 - 4) >> 2) + 1;
    v17 = 4 * v7;
    do
    {
      v8 = *(_DWORD *)(this + 0x1C);
      *(float *)(v8 + v6) = Vector3_InitValue_;
      *(float *)(v8 + v6 + 4) = *(&Vector3_InitValue_ + 1);
      *(float *)(v8 + v6 + 8) = dword_B3F9B0;
      *(float *)(v8 + v6 + 0xC) = 0.0;
      v9 = *(_DWORD *)(this + 0x1C);
      *(float *)(v9 + v6 + 0x10) = Vector3_InitValue_;
      *(float *)(v9 + v6 + 0x14) = *(&Vector3_InitValue_ + 1);
      *(float *)(v9 + v6 + 0x18) = dword_B3F9B0;
      *(float *)(v9 + v6 + 0x1C) = 0.0;
      v10 = *(_DWORD *)(this + 0x1C);
      *(float *)(v10 + v6 + 0x30 - 0x10) = Vector3_InitValue_;
      v11 = (float *)(v10 + v6 + 0x30 - 0x10);
      v11[1] = *(&Vector3_InitValue_ + 1);
      v11[2] = dword_B3F9B0;
      v11[3] = 0.0;
      v12 = (float *)(v6 + 0x30 + *(_DWORD *)(this + 0x1C));
      *v12 = Vector3_InitValue_;
      v12[1] = *(&Vector3_InitValue_ + 1);
      v6 += 0x40;
      --v7;
      v12[2] = dword_B3F9B0;
      v12[3] = 0.0;
    }
    while ( v7 );
    result = v17;
  }
  if ( result < v4 )
  {
    v13 = 0x10 * result;
    v14 = v4 - result;
    do
    {
      result = v13 + *(_DWORD *)(this + 0x1C);
      *(float *)result = Vector3_InitValue_;
      *(float *)(result + 4) = *(&Vector3_InitValue_ + 1);
      v15 = dword_B3F9B0;
      *(float *)(result + 0xC) = 0.0;
      v13 += 0x10;
      --v14;
      *(float *)(result + 8) = v15;
    }
    while ( v14 );
  }
  return result;
}
