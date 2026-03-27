NiAVObject *__cdecl sub_47F1A0(float a1, _DWORD *a2)
{
  float *v2; // esi
  void *v3; // eax
  int v4; // edi
  int v5; // ebx
  double v6; // st7
  int v7; // edi
  int v8; // edx
  _DWORD *v9; // eax
  NiAVObject *v10; // eax
  float v12; // [esp+18h] [ebp-18h]
  float v13; // [esp+18h] [ebp-18h]
  float v14; // [esp+1Ch] [ebp-14h]
  float v15; // [esp+1Ch] [ebp-14h]
  float v16; // [esp+34h] [ebp+4h]

  v2 = (float *)FormHeapAlloc(0x30u);
  v3 = (void *)FormHeapAlloc(0x40u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_401080(v3, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50);
    v5 = v4;
  }
  else
  {
    v5 = 0;
  }
  v6 = a1;
  v7 = FormHeapAlloc(4u);
  v16 = -a1;
  *v2 = v16;
  v2[1] = v16;
  v2[2] = 0.0;
  v14 = v6;
  v2[3] = v16;
  v2[4] = v14;
  v12 = v6;
  v2[5] = 0.0;
  v15 = v6;
  v2[6] = v12;
  v13 = v6;
  v2[7] = v15;
  v2[8] = 0.0;
  v2[9] = v13;
  v2[0xA] = v16;
  v2[0xB] = 0.0;
  v8 = 0;
  v9 = (_DWORD *)v5;
  do
  {
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = a2[2];
    v9[3] = a2[3];
    *(_BYTE *)(v8 + v7) = 1;
    ++v8;
    v9 += 4;
  }
  while ( v8 < 4 );
  v10 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v10 )
    return sub_7177E0(v10, 4u, (int)v2, v5, 0, 0, 0, v7);
  else
    return 0;
}
