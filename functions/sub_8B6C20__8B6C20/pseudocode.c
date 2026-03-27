int __thiscall sub_8B6C20(__m128 **this, int a2)
{
  __m128 *v3; // eax
  __m128 *v4; // eax
  __m128 *v5; // eax
  __m128 *v6; // eax
  _WORD *v7; // eax
  _DWORD *v8; // esi
  int (__thiscall *v9)(_DWORD *); // edx
  int result; // eax
  int v11; // esi
  int v12; // [esp+28h] [ebp-80h] BYREF
  float v13; // [esp+2Ch] [ebp-7Ch]
  float v14; // [esp+38h] [ebp-70h] BYREF
  float v15; // [esp+3Ch] [ebp-6Ch]
  float v16; // [esp+40h] [ebp-68h]
  float v17; // [esp+44h] [ebp-64h]
  float v18; // [esp+48h] [ebp-60h] BYREF
  float v19; // [esp+4Ch] [ebp-5Ch]
  float v20; // [esp+50h] [ebp-58h]
  float v21; // [esp+54h] [ebp-54h]
  _WORD *v22; // [esp+64h] [ebp-44h]
  __int128 v23; // [esp+68h] [ebp-40h] BYREF
  __int128 v24; // [esp+78h] [ebp-30h] BYREF
  unsigned int v25; // [esp+A4h] [ebp-4h]

  v13 = flt_B2EFC4;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v12 = 0;
  v18 = 1.0;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  sub_8AEA60(this, (int)&v12);
  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = v3 + 1;
  else
    v4 = (__m128 *)&stru_BA7A40;
  sub_47DCD0(&v14, v4);
  if ( this && (v5 = *(this + 2)) != 0 )
    v6 = v5 + 2;
  else
    v6 = (__m128 *)&stru_BA7A40;
  sub_47DCD0(&v18, v6);
  v7 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 8);
  v7[2] = 0x90;
  v22 = v7;
  *(float *)&v23 = v18;
  *((float *)&v23 + 1) = v19;
  *((float *)&v23 + 2) = v20;
  v25 = 0;
  *((float *)&v23 + 3) = v21;
  *(float *)&v24 = v14;
  *((float *)&v24 + 1) = v15;
  *((float *)&v24 + 2) = v16;
  *((float *)&v24 + 3) = v17;
  v8 = sub_8F4080(v7, &v24, &v23, SLODWORD(v13), 6, 1);
  v9 = *(int (__thiscall **)(_DWORD *))(*v8 + 0xC);
  v25 = 0xFFFFFFFF;
  result = v9(v8);
  v11 = v8[0x14];
  if ( v11 )
    return ((int (__thiscall *)(__m128 **, int, int, const char *))(*this)[9].m128_i32[1])(
             this,
             a2,
             v11,
             "bhkCapsuleShape");
  return result;
}
