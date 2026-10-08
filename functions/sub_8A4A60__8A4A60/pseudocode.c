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
  NiRTTI *v12; // eax
  char v13; // al
  int v14; // eax
  char v15; // [esp+17h] [ebp-9h]
  int v16; // [esp+18h] [ebp-8h] BYREF

  result = sub_89F470(this, a2); /*0x8a4a72*/
  v15 = result; /*0x8a4a79*/
  if ( result ) /*0x8a4a7d*/
  {
    if ( byte_B2EB00 ) /*0x8a4a83*/
    {
      if ( !a2[7] ) /*0x8a4a90*/
      {
        if ( this && (v4 = *(this + 2)) != 0 ) /*0x8a4aa3*/
          v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xD0); /*0x8a4aa8*/
        else
          v5 = (__m128 *)&unk_BA7A40; /*0x8a4aaf*/
        v6 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0); /*0x8a4acd*/
        if ( (_mm_movemask_ps(_mm_cmplt_ps(v6, _mm_and_ps(_mm_sub_ps(*v5, (__m128)unk_BA7A40), (__m128)xmmword_A372D0))) /*0x8a4ae3*/
            & 7) == 0 )
        {
          if ( this && (v7 = *(this + 2)) != 0 ) /*0x8a4aee*/
            v8 = (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0xE0); /*0x8a4af3*/
          else
            v8 = (__m128 *)&unk_BA7A40; /*0x8a4afa*/
          if ( (_mm_movemask_ps(_mm_cmplt_ps(v6, _mm_and_ps(_mm_sub_ps(*v8, (__m128)unk_BA7A40), (__m128)xmmword_A372D0))) /*0x8a4b12*/
              & 7) == 0 )
          {
            if ( this ) /*0x8a4b16*/
            {
              v9 = (int *)*(this + 2); /*0x8a4b18*/
              if ( v9 ) /*0x8a4b1d*/
              {
                bhkRefObject_UpdateHavokObject(this); /*0x8a4b21*/
                sub_8A6440(v9); /*0x8a4b28*/
                bhkRefObject_UpdateHavokObject(this); /*0x8a4b2f*/
              }
            }
          }
        }
      }
    }
    sub_8A47C0((NodeVoid *)this, (int)a2); /*0x8a4b37*/
    result = v15; /*0x8a4b3c*/
  }
  if ( this )
  {
    v10 = (int *)*(this + 2); /*0x8a4b44*/
    if ( v10 )
    {
      v11 = *sub_47F990(v10, &v16, (int)&stru_BA7B80); /*0x8a4b5a*/
      if ( v11 )
      {
        v12 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 4))(v11); /*0x8a4b67*/
        if ( v12 ) /*0x8a4b6b*/
        {
          while ( v12 != &MEMORY[0xBA7A20] ) /*0x8a4b75*/
          {
            v12 = v12->parent; /*0x8a4b77*/
            if ( !v12 ) /*0x8a4b7c*/
              goto LABEL_24; /*0x8a4b7c*/
          }
          v13 = 1; /*0x8a4b98*/
        }
        else
        {
LABEL_24:
          v13 = 0; /*0x8a4b7e*/
        }
        v14 = v13 != 0 ? v11 : 0;
        if ( v14 ) /*0x8a4b86*/
          *(_DWORD *)(v14 + 0x20) = a2; /*0x8a4b88*/
      }
      return v15; /*0x8a4b8b*/
    }
  }
  return result; /*0x8a4b8f*/
}
