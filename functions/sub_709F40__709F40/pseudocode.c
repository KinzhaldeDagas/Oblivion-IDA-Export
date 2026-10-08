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

  if ( a4 ) /*0x709f54*/
  {
    v5 = NiMAtrix33_Multiply((float *)a2, &v24.scale, (float *)(this + 0x30)); /*0x709f6c*/
    sub_710490((float *)(this + 0x30), v24.rot.data[1], v5); /*0x709f79*/
    v6 = sub_7101F0(a2, &v24, (NiPoint3 *)(this + 0x54)); /*0x709f89*/
    v18 = v6->rot.data[0][0] + *a3; /*0x709f9a*/
    v19 = v6->rot.data[0][1] + a3[1]; /*0x709fa4*/
    v20 = v6->rot.data[0][2] + a3[2]; /*0x709fb8*/
    v22[0] = v18 - *(float *)(this + 0x54); /*0x709fc2*/
    v22[1] = v19 - *(float *)(this + 0x58); /*0x709fcd*/
    v22[2] = v20 - *(float *)(this + 0x5C); /*0x709fd8*/
    v14 = *(float *)(this + 0x60); /*0x709fdf*/
    v7 = NiPoint3_MultiplyMatrix3(v23, v22, (float *)(this + 0x30)); /*0x709fe3*/
    v8 = 0; /*0x709fec*/
    v9 = *(_WORD *)(this + 0xB6) == 0; /*0x709ff3*/
    v15 = 1.0 / v14; /*0x709ffc*/
    v10 = v15; /*0x70a00b*/
    v16 = v7[1] * v15; /*0x70a00d*/
    v17 = v7[2] * v10; /*0x70a016*/
    v21[0] = v10 * *v7; /*0x70a01c*/
    v21[1] = v16; /*0x70a024*/
    v21[2] = v17; /*0x70a02c*/
    if ( !v9 ) /*0x70a030*/
    {
      do /*0x70a06c*/
      {
        v11 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * v8); /*0x70a046*/
        if ( v11 ) /*0x70a04b*/
          (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v11 + 0x54))(v11, v24.rot.data[1], v21, 1); /*0x70a05e*/
        ++v8; /*0x70a067*/
      }
      while ( v8 < *(unsigned __int16 *)(this + 0xB6) ); /*0x70a06c*/
    }
  }
  else
  {
    for ( i = 0; i < *(unsigned __int16 *)(this + 0xB6); ++i ) /*0x70a07d*/
    {
      v13 = *(_DWORD *)(*(_DWORD *)(this + 0xB0) + 4 * i); /*0x70a09a*/
      if ( v13 ) /*0x70a09f*/
        (*(void (__thiscall **)(int, NiTransform *, float *, int))(*(_DWORD *)v13 + 0x54))(v13, a2, a3, 1); /*0x70a0aa*/
    }
  }
}
