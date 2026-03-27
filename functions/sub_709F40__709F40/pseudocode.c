void __thiscall sub_709F40(int this, NiTransform *a2, float *a3, char a4)
{
  float *v5; // eax
  NiTransform *v6; // eax
  float *v7; // eax
  unsigned int v8; // edi
  bool v9; // zf
  double v10; // st7
  int v11; // ecx
  unsigned int i; // edi
  int v13; // ecx
  float v14; // [esp+10h] [ebp-8Ch]
  float v15; // [esp+10h] [ebp-8Ch]
  float v16; // [esp+10h] [ebp-8Ch]
  float v17; // [esp+14h] [ebp-88h]
  float v18; // [esp+18h] [ebp-84h]
  float v19; // [esp+1Ch] [ebp-80h]
  float v20; // [esp+20h] [ebp-7Ch]
  float v21[3]; // [esp+24h] [ebp-78h] BYREF
  float v22[3]; // [esp+30h] [ebp-6Ch] BYREF
  float v23[3]; // [esp+3Ch] [ebp-60h] BYREF
  NiTransform v24; // [esp+48h] [ebp-54h] BYREF

  if ( a4 )
  {
    v5 = NiMAtrix33_Multiply((float *)a2, &v24.scale, (float *)(this + 0x30));
    sub_710490((float *)(this + 0x30), v24.rot.data[1], v5);
    v6 = sub_7101F0(a2, &v24, (NiPoint3 *)(this + 0x54));
    v18 = v6->rot.data[0][0] + *a3;
    v19 = v6->rot.data[0][1] + a3[1];
    v20 = v6->rot.data[0][2] + a3[2];
    v22[0] = v18 - *(float *)(this + 0x54);
    v22[1] = v19 - *(float *)(this + 0x58);
    v22[2] = v20 - *(float *)(this + 0x5C);
    v14 = *(float *)(this + 0x60);
    v7 = sub_710250(v23, v22, (float *)(this + 0x30));
    v8 = 0;
    v9 = *(_WORD *)(this + 0xB6) == 0;
    v15 = 1.0 / v14;
    v10 = v15;
    v16 = v7[1] * v15;
    v17 = v7[2] * v10;
    v21[0] = v10 * *v7;
    v21[1] = v16;
    v21[2] = v17;
    if ( !v9 )
    {
      do
      {
        v11 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v8);
        if ( v11 )
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v11 + 0x54))(v11, v24.rot.data[1], v21, 1);
        ++v8;
      }
      while ( v8 < *(unsigned __int16 *)(this + 0xB6) );
    }
  }
  else
  {
    for ( i = 0; i < *(unsigned __int16 *)(this + 0xB6); ++i )
    {
      v13 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * i);
      if ( v13 )
        (*(void (__thiscall **)(int, NiTransform *, float *, int))(*(_DWORD *)v13 + 0x54))(v13, a2, a3, 1);
    }
  }
}
