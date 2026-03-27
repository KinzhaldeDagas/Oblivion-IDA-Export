float *__thiscall sub_6C3570(_DWORD *this, int a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  float *v6; // eax
  int v8[8]; // [esp-20h] [ebp-6Ch] BYREF
  float *v9; // [esp+Ch] [ebp-40h]
  float v10[4]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v11[11]; // [esp+20h] [ebp-2Ch] BYREF

  v2 = *(this + 0xC);
  sub_7150F0(v10, (float *)(v2 + 0x30));
  v3 = *(_DWORD *)(v2 + 0x54);
  v9 = *(float **)(v2 + 0x60);
  v4 = *(_DWORD *)(v2 + 0x58);
  v5 = *(_DWORD *)(v2 + 0x5C);
  v11[7] = v9;
  v11[0] = v3;
  v11[1] = v4;
  v11[2] = v5;
  *(float *)&v11[3] = v10[0];
  *(float *)&v11[4] = v10[1];
  *(float *)&v11[5] = v10[2];
  *(float *)&v11[6] = v10[3];
  v6 = (float *)FormHeapAlloc(0x38u);
  v9 = v6;
  v11[0xA] = 0;
  if ( !v6 )
    return 0;
  qmemcpy(v8, v11, sizeof(v8));
  return sub_6D5C30(v6, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v8[7]);
}
