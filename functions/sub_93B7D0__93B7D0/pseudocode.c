__m128 *__thiscall sub_93B7D0(__m128 *this)
{
  __int32 v2; // ebx
  __m128 *v3; // edi
  __m128 *result; // eax
  __int32 v5; // ebx
  __m128 *v6; // edi
  int v7; // ecx
  int v8; // edx
  int v9; // edi
  __m128 *v10; // ebx
  __m128 v11; // xmm0
  int v12; // ecx
  bool v13; // cc
  __int32 v14; // edi
  __int32 v15; // eax
  __int32 v16; // ecx
  int v17; // eax
  int v18; // [esp+14h] [ebp-6Ch]
  __m128 *v19; // [esp+18h] [ebp-68h]
  float v20; // [esp+1Ch] [ebp-64h]
  int v21; // [esp+20h] [ebp-60h]
  int v22; // [esp+24h] [ebp-5Ch]
  int v23; // [esp+28h] [ebp-58h]
  int v24; // [esp+2Ch] [ebp-54h]
  __m128 v25; // [esp+30h] [ebp-50h] BYREF
  __m128 v26; // [esp+40h] [ebp-40h] BYREF
  __m128 v27[2]; // [esp+50h] [ebp-30h] BYREF
  float v28; // [esp+70h] [ebp-10h]

  if ( this->m128_i32[1] == 3 && (v2 = 0, this->m128_i32[0] > 0) )
  {
    v3 = this + 2;
    while ( 1 )
    {
      result = (__m128 *)sub_93B000(this, v3, this + 0xA, 0);
      if ( result == (__m128 *)7 )
        break;
      ++v2;
      ++v3;
      if ( v2 >= this->m128_i32[0] )
        goto LABEL_6;
    }
    *(this + 2) = *(this + v2 + 2);
    this->m128_i32[0] = 1;
  }
  else
  {
LABEL_6:
    if ( this->m128_i32[0] == 3 && (v5 = 0, this->m128_i32[1] > 0) )
    {
      v6 = this + 0xA;
      while ( sub_93B000(this, v6, this + 2, 0) != 7 )
      {
        ++v5;
        ++v6;
        if ( v5 >= this->m128_i32[1] )
          goto LABEL_11;
      }
      result = (__m128 *)(0x10 * (v5 + 0xE));
      *(this + 0xE) = *(__m128 *)((char *)this + (_DWORD)result);
      *(this + 0xA) = *(this + v5 + 0xA);
      this->m128_i32[1] = 1;
    }
    else
    {
LABEL_11:
      result = 0;
      v20 = 3.4028235e38;
      v22 = 0;
      v7 = 2 * (this->m128_i32[0] == 3) + 1;
      v24 = v7;
      v8 = 2 * (this->m128_i32[1] == 3) + 1;
      v21 = v8;
      v23 = 0;
      v18 = 0;
      if ( v7 > 0 )
      {
        result = this + 2;
        v19 = this + 2;
        do
        {
          v9 = 0;
          if ( v8 > 0 )
          {
            v10 = this + 0xA;
            do
            {
              v11 = *v10;
              v12 = 0x10 * (byte_A99F0E[v9] + 0xA);
              v26 = _mm_sub_ps(*(this + byte_A99F0E[v18] + 2), *result);
              v25 = _mm_sub_ps(*(__m128 *)((char *)this + v12), v11);
              sub_8D1A30(result, &v26, v10, &v25, v27);
              if ( v28 < (double)v20 )
              {
                v20 = v28;
                v22 = v18;
                v23 = v9;
              }
              ++v9;
              ++v10;
              result = v19;
            }
            while ( v9 < v21 );
            v8 = v21;
            v7 = v24;
          }
          ++result;
          v13 = ++v18 < v7;
          v19 = result;
        }
        while ( v13 );
      }
      if ( v7 == 3 )
      {
        v14 = this->m128_i32[0] - 1;
        this->m128_i32[0] = v14;
        result = (__m128 *)(0x10 * (v14 + 2));
        *(this + byte_A99F0C[v22] + 2) = *(__m128 *)((char *)this + (_DWORD)result);
      }
      if ( v8 == 3 )
      {
        v15 = this->m128_i32[1] - 1;
        this->m128_i32[1] = v15;
        v16 = v15;
        v17 = byte_A99F0C[v23];
        *(this + v17 + 0xE) = *(this + v16 + 0xE);
        result = (__m128 *)(0x10 * (v17 + 0xA));
        *(__m128 *)((char *)this + (_DWORD)result) = *(this + this->m128_i32[1] + 0xA);
      }
    }
  }
  return result;
}
