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

  if ( a2 ) /*0x8c44be*/
  {
    v3 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x24); /*0x8c44d3*/
    v3->m128_i16[2] = 0x40; /*0x8c44d5*/
    v13 = a2[8]; /*0x8c44e2*/
    v10 = a2[9]; /*0x8c44ee*/
    v7 = a2[0xA]; /*0x8c44fa*/
    v6 = a2[0xB]; /*0x8c4506*/
    v19 = 0; /*0x8c4510*/
    v17.m128_f32[0] = v13; /*0x8c4518*/
    v17.m128_f32[1] = v10; /*0x8c4520*/
    v17.m128_f32[2] = v7; /*0x8c4528*/
    v17.m128_f32[3] = v6; /*0x8c4530*/
    v8 = a2[0xD]; /*0x8c453e*/
    v11 = a2[0xE]; /*0x8c4545*/
    v14 = a2[0xF]; /*0x8c454c*/
    v16.m128_f32[0] = a2[0xC]; /*0x8c4554*/
    v16.m128_f32[1] = v8; /*0x8c455c*/
    v16.m128_f32[2] = v11; /*0x8c4564*/
    v16.m128_f32[3] = v14; /*0x8c456c*/
    v9 = a2[5]; /*0x8c457a*/
    v12 = a2[6]; /*0x8c4581*/
    v15 = a2[7]; /*0x8c4588*/
    v18.m128_f32[0] = a2[4]; /*0x8c4590*/
    v18.m128_f32[1] = v9; /*0x8c4598*/
    v18.m128_f32[2] = v12; /*0x8c45a0*/
    v18.m128_f32[3] = v15; /*0x8c45a8*/
    v4 = sub_914FD0(v3, &v18, &v16, &v17); /*0x8c45b3*/
    v5 = *(void (__thiscall **)(void *, __m128 *))(*(_DWORD *)this + 0x4C); /*0x8c45b5*/
    v19 = 0xFFFFFFFF; /*0x8c45bb*/
    v5(this, v4); /*0x8c45c3*/
    if ( v4->m128_i16[2] ) /*0x8c45c5*/
    {
      if ( !--v4->m128_i16[3] ) /*0x8c45d1*/
        (*(void (__thiscall **)(__m128 *, int))v4->m128_i32[0])(v4, 1); /*0x8c45e2*/
    }
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8c45ec*/
  }
}
