float *__thiscall sub_6CFD00(_DWORD *this, float a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  float *v5; // eax
  int v7[8]; // [esp-20h] [ebp-68h] BYREF
  float v8[4]; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v9[11]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v10; // [esp+4Ch] [ebp+4h]

  v2 = *(_DWORD *)(*(this + 0x10) + 4 * LOWORD(a2));
  sub_7150F0(v8, (float *)(v2 + 0x30));
  v3 = *(_DWORD *)(v2 + 0x58);
  v4 = *(_DWORD *)(v2 + 0x5C);
  v10 = *(float *)(v2 + 0x60);
  v9[0] = *(_DWORD *)(v2 + 0x54);
  *(float *)&v9[7] = v10;
  v9[1] = v3;
  v9[2] = v4;
  *(float *)&v9[3] = v8[0];
  *(float *)&v9[4] = v8[1];
  *(float *)&v9[5] = v8[2];
  *(float *)&v9[6] = v8[3];
  v5 = (float *)FormHeapAlloc(0x38u);
  v9[0xA] = 0;
  if ( !v5 )
    return 0;
  qmemcpy(v7, v9, sizeof(v7));
  return sub_6D5C30(v5, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7]);
}
