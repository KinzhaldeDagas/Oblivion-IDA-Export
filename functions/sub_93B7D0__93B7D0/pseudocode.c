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

  if ( this->m128_i32[1] == 3 && (v2 = 0, this->m128_i32[0] > 0) ) /*0x93b7ea*/
  {
    v3 = this + 2; /*0x93b7ec*/
    while ( 1 ) /*0x93b7fc*/
    {
      result = (__m128 *)sub_93B000(this, v3, this + 0xA, 0); /*0x93b7fc*/
      if ( result == (__m128 *)7 ) /*0x93b804*/
        break; /*0x93b804*/
      ++v2; /*0x93b80c*/
      ++v3; /*0x93b80d*/
      if ( v2 >= this->m128_i32[0] ) /*0x93b812*/
        goto LABEL_6; /*0x93b812*/
    }
    *(this + 2) = *(this + v2 + 2); /*0x93b9d3*/
    this->m128_i32[0] = 1; /*0x93b9d7*/
  }
  else
  {
LABEL_6:
    if ( this->m128_i32[0] == 3 && (v5 = 0, this->m128_i32[1] > 0) ) /*0x93b820*/
    {
      v6 = this + 0xA; /*0x93b822*/
      while ( sub_93B000(this, v6, this + 2, 0) != 7 ) /*0x93b839*/
      {
        ++v5; /*0x93b842*/
        ++v6; /*0x93b843*/
        if ( v5 >= this->m128_i32[1] ) /*0x93b848*/
          goto LABEL_11; /*0x93b848*/
      }
      result = (__m128 *)(0x10 * (v5 + 0xE)); /*0x93b9e7*/
      *(this + 0xE) = *(__m128 *)((char *)this + (_DWORD)result); /*0x93b9f1*/
      *(this + 0xA) = *(this + v5 + 0xA); /*0x93ba00*/
      this->m128_i32[1] = 1; /*0x93ba07*/
    }
    else
    {
LABEL_11:
      result = 0; /*0x93b84a*/
      v20 = 3.4028235e38; /*0x93b861*/
      v22 = 0; /*0x93b869*/
      v7 = 2 * (this->m128_i32[0] == 3) + 1; /*0x93b86d*/
      v24 = v7; /*0x93b873*/
      v8 = 2 * (this->m128_i32[1] == 3) + 1; /*0x93b877*/
      v21 = v8; /*0x93b87b*/
      v23 = 0; /*0x93b87f*/
      v18 = 0; /*0x93b883*/
      if ( v7 > 0 ) /*0x93b887*/
      {
        result = this + 2; /*0x93b88d*/
        v19 = this + 2; /*0x93b890*/
        do /*0x93b94d*/
        {
          v9 = 0; /*0x93b894*/
          if ( v8 > 0 ) /*0x93b898*/
          {
            v10 = this + 0xA; /*0x93b89e*/
            do /*0x93b92d*/
            {
              v11 = *v10; /*0x93b8c6*/
              v12 = 0x10 * (byte_A99F0E[v9] + 0xA); /*0x93b8cc*/
              v26 = _mm_sub_ps(*(this + byte_A99F0E[v18] + 2), *result); /*0x93b8cf*/
              v25 = _mm_sub_ps(*(__m128 *)((char *)this + v12), v11); /*0x93b8ec*/
              sub_8D1A30(result, &v26, v10, &v25, v27); /*0x93b8f1*/
              if ( v28 < (double)v20 ) /*0x93b909*/
              {
                v20 = v28; /*0x93b913*/
                v22 = v18; /*0x93b917*/
                v23 = v9; /*0x93b91b*/
              }
              ++v9; /*0x93b923*/
              ++v10; /*0x93b924*/
              result = v19; /*0x93b929*/
            }
            while ( v9 < v21 ); /*0x93b92d*/
            v8 = v21; /*0x93b933*/
            v7 = v24; /*0x93b937*/
          }
          ++result; /*0x93b940*/
          v13 = ++v18 < v7; /*0x93b943*/
          v19 = result; /*0x93b949*/
        }
        while ( v13 ); /*0x93b94d*/
      }
      if ( v7 == 3 ) /*0x93b956*/
      {
        v14 = this->m128_i32[0] - 1; /*0x93b95e*/
        this->m128_i32[0] = v14; /*0x93b95f*/
        result = (__m128 *)(0x10 * (v14 + 2)); /*0x93b96d*/
        *(this + byte_A99F0C[v22] + 2) = *(__m128 *)((char *)this + (_DWORD)result); /*0x93b97a*/
      }
      if ( v8 == 3 ) /*0x93b981*/
      {
        v15 = this->m128_i32[1] - 1; /*0x93b98a*/
        this->m128_i32[1] = v15; /*0x93b98b*/
        v16 = v15; /*0x93b98e*/
        v17 = byte_A99F0C[v23]; /*0x93b990*/
        *(this + v17 + 0xE) = *(this + v16 + 0xE); /*0x93b9a7*/
        result = (__m128 *)(0x10 * (v17 + 0xA)); /*0x93b9bb*/
        *(__m128 *)((char *)this + (_DWORD)result) = *(this + this->m128_i32[1] + 0xA); /*0x93b9be*/
      }
    }
  }
  return result; /*0x93b9c2*/
}
