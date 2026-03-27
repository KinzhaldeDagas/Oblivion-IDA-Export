void __thiscall sub_8C4480(void *this, float *a2)
{
  __m128 *v3; // eax
  __m128 *v4; // edi
  void (__thiscall *v5)(void *, __m128 *); // eax
  float v6; // [esp+10h] [ebp-64h]
  float v7; // [esp+14h] [ebp-60h]
  float v8; // [esp+14h] [ebp-60h]
  float v9; // [esp+14h] [ebp-60h]
  float v10; // [esp+18h] [ebp-5Ch]
  float v11; // [esp+18h] [ebp-5Ch]
  float v12; // [esp+18h] [ebp-5Ch]
  float v13; // [esp+1Ch] [ebp-58h]
  float v14; // [esp+1Ch] [ebp-58h]
  float v15; // [esp+1Ch] [ebp-58h]
  __m128 v16; // [esp+24h] [ebp-50h] BYREF
  __m128 v17; // [esp+34h] [ebp-40h] BYREF
  __m128 v18; // [esp+44h] [ebp-30h] BYREF
  unsigned int v19; // [esp+70h] [ebp-4h]

  if ( a2 )
  {
    v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x24);
    v3->m128_i16[2] = 0x40;
    v13 = a2[8];
    v10 = a2[9];
    v7 = a2[0xA];
    v6 = a2[0xB];
    v19 = 0;
    v17.m128_f32[0] = v13;
    v17.m128_f32[1] = v10;
    v17.m128_f32[2] = v7;
    v17.m128_f32[3] = v6;
    v8 = a2[0xD];
    v11 = a2[0xE];
    v14 = a2[0xF];
    v16.m128_f32[0] = a2[0xC];
    v16.m128_f32[1] = v8;
    v16.m128_f32[2] = v11;
    v16.m128_f32[3] = v14;
    v9 = a2[5];
    v12 = a2[6];
    v15 = a2[7];
    v18.m128_f32[0] = a2[4];
    v18.m128_f32[1] = v9;
    v18.m128_f32[2] = v12;
    v18.m128_f32[3] = v15;
    v4 = sub_914FD0(v3, &v18, &v16, &v17);
    v5 = *(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C);
    v19 = 0xFFFFFFFF;
    v5(this, v4);
    if ( v4->m128_i16[2] )
    {
      if ( !--v4->m128_i16[3] )
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1);
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
