int __thiscall Player_GetNumberActivePotions_(_DWORD *this)
{
  int (__stdcall *v2)(int); // edx
  int v3; // ebx
  SInt32 v4; // eax
  int v5; // eax
  int *v6; // esi
  int v7; // edi
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *i; // eax
  char v13; // bl
  int *v14; // ecx
  int v15; // edi
  int v16; // eax
  unsigned int v17; // edx
  _DWORD *v18; // eax
  int v20[3]; // [esp+0h] [ebp-2Ch] BYREF
  int *v21; // [esp+Ch] [ebp-20h]
  int *v22; // [esp+10h] [ebp-1Ch]
  _DWORD *v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  _DWORD *v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]

  v2 = *(int (__stdcall **)(int))(*this + 0x284); /*0x6623e6*/
  v3 = 0; /*0x6623ed*/
  v23 = this; /*0x6623f1*/
  v27 = 0; /*0x6623f4*/
  v4 = v2(0x13); /*0x6623f7*/
  v5 = Calc_AlchemyMaxPotions(v4); /*0x6623fa*/
  v6 = (int *)*(this + 0x7E); /*0x6623ff*/
  v7 = v5; /*0x66240a*/
  v24 = v5; /*0x66240c*/
  if ( v6 ) /*0x66240f*/
  {
    while ( 1 ) /*0x662415*/
    {
      v8 = *v6; /*0x662415*/
      if ( !v6[1] ) /*0x662411*/
        break; /*0x662411*/
      if ( v8 ) /*0x662421*/
        goto LABEL_6; /*0x662421*/
LABEL_8:
      v6 = (int *)v6[1]; /*0x662432*/
      if ( !v6 ) /*0x662437*/
      {
LABEL_9:
        v27 = v3; /*0x662439*/
        goto LABEL_10; /*0x662439*/
      }
    }
    if ( !v8 ) /*0x66241b*/
      goto LABEL_9; /*0x66241b*/
LABEL_6:
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x18))(v8) == 7 ) /*0x66242d*/
      ++v3; /*0x66242f*/
    goto LABEL_8; /*0x66242f*/
  }
LABEL_10:
  _alloca_(v20[0]); /*0x66243c*/
  v21 = v20; /*0x66244e*/
  _alloca_(v20[0]); /*0x662451*/
  v22 = v20; /*0x66245a*/
  if ( v20 )
  {
    if ( v7 > 0 ) /*0x66246d*/
    {
      memset(v20, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x66247f*/
      memset(v20, 0, 4 * ((unsigned int)(4 * v7) >> 2)); /*0x662488*/
    }
    v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v23[0x1A] + 8))(v23 + 0x1A); /*0x662498*/
    v26 = v9; /*0x66249c*/
    if ( v9 )
    {
      while ( 1 )
      {
        v10 = *v9; /*0x6624ae*/
        if ( v9[1] )
        {
          v11 = v10 ? *(_DWORD *)(v10 + 8) : 0;
        }
        else
        {
          if ( !v10 ) /*0x6624b4*/
            return v27; /*0x6624b4*/
          v11 = *(_DWORD *)(v10 + 8); /*0x6624ba*/
        }
        if ( v11 && (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x18))(v11) == 7 ) /*0x6624de*/
        {
          for ( i = (_DWORD *)v23[0x7E]; i; i = (_DWORD *)i[1] ) /*0x6624ef*/
          {
            if ( *i == v11 ) /*0x6624f3*/
              goto LABEL_42; /*0x6624f3*/
          }
          v13 = 0; /*0x6624fc*/
          v25 = 0; /*0x662502*/
          if ( v24 > 0 ) /*0x662509*/
            break; /*0x662509*/
        }
LABEL_42:
        v26 = (_DWORD *)v9[1]; /*0x662568*/
        if ( !v26 ) /*0x662570*/
          return v27; /*0x662570*/
        v9 = v26; /*0x6624a7*/
      }
      v14 = v22; /*0x66250b*/
      v15 = (char *)v21 - (char *)v22; /*0x662511*/
      while ( 1 ) /*0x662513*/
      {
        if ( v13 ) /*0x662515*/
        {
LABEL_41:
          v9 = v26; /*0x662565*/
          goto LABEL_42; /*0x662565*/
        }
        v16 = *(int *)((char *)v14 + v15); /*0x662517*/
        if ( v16 ) /*0x66251c*/
        {
          if ( v16 != v11 ) /*0x66252f*/
            goto LABEL_40; /*0x66252f*/
          v17 = 0; /*0x662531*/
          v18 = (_DWORD *)(v16 + 0x10); /*0x662533*/
          if ( !v18 ) /*0x662536*/
            goto LABEL_40; /*0x662536*/
          do /*0x662545*/
          {
            if ( *v18 ) /*0x662538*/
              ++v17; /*0x66253d*/
            v18 = (_DWORD *)v18[1]; /*0x662540*/
          }
          while ( v18 ); /*0x662545*/
          if ( *v14 >= v17 ) /*0x66254b*/
            goto LABEL_40; /*0x66254b*/
          ++*v14; /*0x662550*/
        }
        else
        {
          ++v27; /*0x66251e*/
          *(int *)((char *)v14 + v15) = v11; /*0x662522*/
          *v14 = 1; /*0x662525*/
        }
        v13 = 1; /*0x662552*/
LABEL_40:
        ++v14; /*0x662554*/
        if ( ++v25 >= v24 ) /*0x662563*/
          goto LABEL_41; /*0x662563*/
      }
    }
  }
  return v27; /*0x66257c*/
}
