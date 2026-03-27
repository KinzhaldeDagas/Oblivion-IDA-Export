char __thiscall sub_8A4A60(int *this, int *a2)
{
  char result; // al
  int v4; // eax
  __m128 *v5; // eax
  __m128 v6; // xmm0
  int v7; // eax
  __m128 *v8; // eax
  int *v9; // edi
  int *v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13; // al
  int v14; // eax
  char v15; // [esp+17h] [ebp-9h]
  int v16; // [esp+18h] [ebp-8h] BYREF

  result = sub_89F470(this, a2);
  v15 = result;
  if ( result )
  {
    if ( byte_B2EB00 )
    {
      if ( !a2[7] )
      {
        if ( this && (v4 = *(this + 2)) != 0 )
          v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xD0);
        else
          v5 = (__m128 *)&stru_BA7A40;
        v6 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0);
        if ( (_mm_movemask_ps(_mm_cmplt_ps(v6, _mm_and_ps(_mm_sub_ps(*v5, (__m128)stru_BA7A40), (__m128)xmmword_A372D0)))
            & 7) == 0 )
        {
          if ( this && (v7 = *(this + 2)) != 0 )
            v8 = (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0xE0);
          else
            v8 = (__m128 *)&stru_BA7A40;
          if ( (_mm_movemask_ps(_mm_cmplt_ps(v6, _mm_and_ps(_mm_sub_ps(*v8, (__m128)stru_BA7A40), (__m128)xmmword_A372D0)))
              & 7) == 0 )
          {
            if ( this )
            {
              v9 = (int *)*(this + 2);
              if ( v9 )
              {
                sub_89F570(this);
                sub_8A6440(v9);
                sub_89F570(this);
              }
            }
          }
        }
      }
    }
    sub_8A47C0(this, (int)a2);
    result = v15;
  }
  if ( this )
  {
    v10 = (int *)*(this + 2);
    if ( v10 )
    {
      v11 = *sub_47F990(v10, &v16, (int)dword_BA7B80);
      if ( v11 )
      {
        v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11);
        if ( v12 )
        {
          while ( (char *)v12 != dword_BA7A20 )
          {
            v12 = *(_DWORD *)(v12 + 4);
            if ( !v12 )
              goto LABEL_24;
          }
          v13 = 1;
        }
        else
        {
LABEL_24:
          v13 = 0;
        }
        v14 = v13 != 0 ? v11 : 0;
        if ( v14 )
          *(_DWORD *)(v14 + 0x20) = a2;
      }
      return v15;
    }
  }
  return result;
}
