char __thiscall sub_8A48C0(int *this, int *a2)
{
  int *v3; // ecx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  char v7; // al
  char result; // al
  int *v9; // edi
  int v10; // eax
  __m128 *v11; // eax
  __m128 v12; // xmm0
  int v13; // eax
  __m128 *v14; // eax
  int *v15; // edi
  char v16; // [esp+13h] [ebp-Dh]
  int v17; // [esp+18h] [ebp-8h] BYREF

  if ( !this || (v3 = (int *)*(this + 2)) == 0 || (v4 = *sub_47F990(v3, &v17, (int)dword_BA7B80)) == 0 )
  {
    v5 = 0;
LABEL_18:
    v9 = a2;
    result = sub_89F470(this, a2);
    v16 = result;
    if ( result )
    {
      if ( byte_B2EB00 )
      {
        if ( !a2[7] )
        {
          if ( this && (v10 = *(this + 2)) != 0 )
            v11 = (__m128 *)(*(_DWORD *)(v10 + 0x50) + 0xD0);
          else
            v11 = (__m128 *)&stru_BA7A40;
          v12 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0);
          if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, _mm_and_ps(_mm_sub_ps(*v11, (__m128)stru_BA7A40), (__m128)xmmword_A372D0)))
              & 7) == 0 )
          {
            if ( this && (v13 = *(this + 2)) != 0 )
              v14 = (__m128 *)(*(_DWORD *)(v13 + 0x50) + 0xE0);
            else
              v14 = (__m128 *)&stru_BA7A40;
            if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, _mm_and_ps(_mm_sub_ps(*v14, (__m128)stru_BA7A40), (__m128)xmmword_A372D0)))
                & 7) == 0 )
            {
              if ( this )
              {
                v15 = (int *)*(this + 2);
                if ( v15 )
                {
                  sub_89F570(this);
                  sub_8A6440(v15);
                  sub_89F570(this);
                }
              }
            }
          }
        }
      }
      v9 = a2;
      sub_8A47C0(this, (int)a2);
      result = v16;
    }
    if ( v5 )
      *(_DWORD *)(v5 + 0x20) = v9;
    return result;
  }
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
  if ( v6 )
  {
    while ( (char *)v6 != dword_BA7A20 )
    {
      v6 = *(_DWORD *)(v6 + 4);
      if ( !v6 )
        goto LABEL_8;
    }
    v7 = 1;
  }
  else
  {
LABEL_8:
    v7 = 0;
  }
  v5 = v7 != 0 ? v4 : 0;
  if ( !v5
    || *(float *)(v5 + 0x14) < 1.0
    || *(float *)(v5 + 0x18) < 1.0
    || *(int *)(v5 + 0x24) > 0
    || FrombAddBipedWhenKEyframed )
  {
    goto LABEL_18;
  }
  if ( (*(int (__thiscall **)(int *))(*this + 0x58))(this) )
    (*(void (__thiscall **)(int *))(*this + 0x60))(this);
  *(_DWORD *)(v5 + 0x20) = a2;
  return 1;
}
