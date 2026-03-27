char *__thiscall sub_9385C0(__m128 *this, char *a2, __m128 *a3)
{
  char v4; // bl
  __m128 v5; // xmm0
  __int32 v6; // ecx
  unsigned int v8; // [esp+Ch] [ebp-C4h] BYREF
  __m128 v9; // [esp+10h] [ebp-C0h] BYREF
  __m128 v10; // [esp+20h] [ebp-B0h]
  __m128 v11[3]; // [esp+40h] [ebp-90h] BYREF
  int v12; // [esp+78h] [ebp-58h]
  _BYTE v13[80]; // [esp+80h] [ebp-50h] BYREF

  v4 = 0;
  sub_936420((int)v13);
  HIWORD(v8) = 0;
  sub_8FDAF0((int)this);
  if ( sub_9377C0(this, this + 8) )
    goto LABEL_12;
  if ( sub_938190(this, (int)v13, &v8, v11) == 2 )
  {
    v4 = 1;
    if ( v12 > 2 )
    {
      if ( v12 > 6 )
        sub_936E10((__m128 **)this, &v9, (int)&v8, v11);
      else
        sub_936D70((int)this, &v9, (unsigned __int8 *)&v8, v11);
    }
    else
    {
      sub_936C10((__m128 **)this, &v9, (unsigned __int8 *)&v8, v11);
    }
    if ( (unsigned __int8)v8 <= 2u )
    {
      v5 = v9;
    }
    else
    {
      *(float *)&v8 = -v10.m128_f32[3];
      v5 = _mm_add_ps(v9, _mm_mul_ps(_mm_shuffle_ps((__m128)v8, (__m128)v8, 0), v10));
    }
    v6 = v10.m128_i32[3];
    a3[1] = v10;
    *a3 = v5;
    a3[1].m128_i32[3] = v6;
LABEL_12:
    *a2 = v4;
    return a2;
  }
  *a2 = 0;
  return a2;
}
