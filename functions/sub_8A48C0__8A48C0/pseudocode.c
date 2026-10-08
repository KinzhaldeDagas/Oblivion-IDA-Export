char __thiscall sub_8A48C0(int *this, int *a2)
{
  int *v3; // ecx
  int v4; // edi
  int v5; // ebx
  NiRTTI *v6; // eax
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

  if ( !this || (v3 = (int *)*(this + 2)) == 0 || (v4 = *sub_47F990(v3, &v17, (int)&stru_BA7B80)) == 0 ) /*0x8a48f3*/
  {
    v5 = 0; /*0x8a48f5*/
LABEL_18:
    v9 = a2; /*0x8a4973*/
    result = sub_89F470(this, a2); /*0x8a497a*/
    v16 = result; /*0x8a4981*/
    if ( result ) /*0x8a4985*/
    {
      if ( byte_B2EB00 ) /*0x8a498b*/
      {
        if ( !a2[7] ) /*0x8a4998*/
        {
          if ( this && (v10 = *(this + 2)) != 0 ) /*0x8a49ab*/
            v11 = (__m128 *)(*(_DWORD *)(v10 + 0x50) + 0xD0); /*0x8a49b0*/
          else
            v11 = (__m128 *)&unk_BA7A40; /*0x8a49b7*/
          v12 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0); /*0x8a49d5*/
          if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, _mm_and_ps(_mm_sub_ps(*v11, (__m128)unk_BA7A40), (__m128)xmmword_A372D0))) /*0x8a49ec*/
              & 7) == 0 )
          {
            if ( this && (v13 = *(this + 2)) != 0 ) /*0x8a49f7*/
              v14 = (__m128 *)(*(_DWORD *)(v13 + 0x50) + 0xE0); /*0x8a49fc*/
            else
              v14 = (__m128 *)&unk_BA7A40; /*0x8a4a03*/
            if ( (_mm_movemask_ps(_mm_cmplt_ps(v12, _mm_and_ps(_mm_sub_ps(*v14, (__m128)unk_BA7A40), (__m128)xmmword_A372D0))) /*0x8a4a1b*/
                & 7) == 0 )
            {
              if ( this ) /*0x8a4a1f*/
              {
                v15 = (int *)*(this + 2); /*0x8a4a21*/
                if ( v15 ) /*0x8a4a26*/
                {
                  bhkRefObject_UpdateHavokObject(this); /*0x8a4a2a*/
                  sub_8A6440(v15); /*0x8a4a31*/
                  bhkRefObject_UpdateHavokObject(this); /*0x8a4a38*/
                }
              }
            }
          }
        }
      }
      v9 = a2; /*0x8a4a3d*/
      sub_8A47C0(this, (int)a2); /*0x8a4a44*/
      result = v16; /*0x8a4a49*/
    }
    if ( v5 ) /*0x8a4a4f*/
      *(_DWORD *)(v5 + 0x20) = v9; /*0x8a4a51*/
    return result; /*0x8a4a51*/
  }
  v6 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4); /*0x8a4900*/
  if ( v6 ) /*0x8a4904*/
  {
    while ( v6 != &MEMORY[0xBA7A20] ) /*0x8a490b*/
    {
      v6 = v6->parent; /*0x8a490d*/
      if ( !v6 ) /*0x8a4912*/
        goto LABEL_8; /*0x8a4912*/
    }
    v7 = 1; /*0x8a496d*/
  }
  else
  {
LABEL_8:
    v7 = 0; /*0x8a4914*/
  }
  v5 = v7 != 0 ? v4 : 0;
  if ( !v5 || *(float *)(v5 + 0x14) < 1.0 || *(float *)(v5 + 0x18) < 1.0 || *(int *)(v5 + 0x24) > 0 || MEMORY[0xBA7909] ) /*0x8a493c*/
    goto LABEL_18; /*0x8a4943*/
  if ( (*(int (__thiscall **)(int *))(*this + 0x58))(this) ) /*0x8a494c*/
    (*(void (__thiscall **)(int *))(*this + 0x60))(this); /*0x8a4959*/
  *(_DWORD *)(v5 + 0x20) = a2; /*0x8a495f*/
  return 1; /*0x8a4964*/
}
