float *__thiscall sub_696460(float *this, float a2, float **a3)
{
  float **v3; // esi
  float *v4; // eax
  float *v5; // edi
  float *v6; // edx
  char *v7; // eax
  float *v8; // eax
  double v9; // st7
  __int16 v10; // fps
  __int16 v11; // fps
  float *result; // eax
  void **v13; // [esp+Ch] [ebp-4Ch]
  float v14; // [esp+Ch] [ebp-4Ch]
  double v15; // [esp+18h] [ebp-40h]
  float v16; // [esp+28h] [ebp-30h]
  float v17; // [esp+2Ch] [ebp-2Ch]
  float v18; // [esp+30h] [ebp-28h]
  float v19[9]; // [esp+34h] [ebp-24h] BYREF
  float v20; // [esp+60h] [ebp+8h]
  float v21; // [esp+60h] [ebp+8h]
  float v22; // [esp+60h] [ebp+8h]
  float v23; // [esp+60h] [ebp+8h]

  v3 = a3; /*0x696464*/
  v4 = a3[5]; /*0x696468*/
  v5 = a3[1]; /*0x69646e*/
  if ( v4 ) /*0x696471*/
  {
    v6 = *((float **)v4 + 0x22); /*0x696473*/
    v7 = (char *)(v4 + 0x22); /*0x696479*/
    a3[2] = v6; /*0x69647e*/
    a3[3] = *((float **)v7 + 1); /*0x696484*/
    a3[4] = *((float **)v7 + 2); /*0x69648a*/
  }
  *((_DWORD *)v5 + 0x15) = a3[2]; /*0x696490*/
  *((_DWORD *)v5 + 0x16) = a3[3]; /*0x696496*/
  *((_DWORD *)v5 + 0x17) = a3[4]; /*0x69649c*/
  v8 = a3[6]; /*0x69649f*/
  v9 = v8[0x22]; /*0x6964a2*/
  v8 += 0x22; /*0x6964a8*/
  v16 = v9 - *((float *)a3 + 2); /*0x6964b5*/
  v17 = v8[1] - *((float *)a3 + 3); /*0x6964bf*/
  v18 = v8[2] - *((float *)a3 + 4); /*0x6964c9*/
  LOBYTE(a3) = flt_B37ED0[0xC6] < *(this + 0x1E) - *(this + 0x28); /*0x6964e5*/
  v13 = (void **)a3; /*0x6964f6*/
  v15 = v16 * v16 + v17 * v17; /*0x696500*/
  v20 = v15 + v18 * v18; /*0x696512*/
  v21 = sqrt(v20); /*0x69651f*/
  sub_7F3300(*v3, a2, v21, *(this + 0x17), (int)v13); /*0x696537*/
  v22 = 0.0 * 0.0 + v15; /*0x69654c*/
  v23 = sqrt(v22); /*0x696559*/
  sub_98598A(v23, v18, v10); /*0x696565*/
  v14 = -v18; /*0x696577*/
  sub_98598A(v17, v16, v11); /*0x696588*/
  result = sub_7118E0(v19, v16, 0.0, v14); /*0x69659d*/
  qmemcpy(v5 + 0xC, v19, 0x24u); /*0x6965ae*/
  return result; /*0x6965b0*/
}
