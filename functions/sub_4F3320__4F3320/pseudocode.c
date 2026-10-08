int __thiscall sub_4F3320(_DWORD *this, char **a2, char *Dst, unsigned int *a4, char a5, _DWORD *a6)
{
  char *v7; // esi
  char v8; // al
  char *v9; // edi
  char v10; // bl
  int v11; // eax
  __int16 v12; // cx
  unsigned int v13; // ebx
  unsigned int v14; // ebp
  char *v15; // edx
  char v16; // cl
  char *v17; // eax
  char v18; // al
  char v19; // dl
  _BYTE *v20; // esi
  char *v21; // edi
  char v22; // cl
  _BYTE *v23; // esi
  char *v24; // edi
  char v25; // dl
  _BYTE *v26; // edi
  _BYTE *v27; // esi
  _BYTE *v28; // esi
  char v29; // cl
  _BYTE *v30; // edi
  char v31; // dl
  char v32; // al
  char v33; // cl
  char v34; // al
  _BYTE *v35; // esi
  _BYTE *v36; // edi
  char v37; // al
  char v38; // al
  char *v39; // ebp
  char v41; // [esp+Ah] [ebp-Eh]
  char v42; // [esp+Bh] [ebp-Dh]
  int v43; // [esp+Ch] [ebp-Ch]
  int v44; // [esp+10h] [ebp-8h]
  char v46; // [esp+28h] [ebp+10h]

  v7 = *a2; /*0x4f3328*/
  *a4 = 0x10; /*0x4f3332*/
  v8 = *v7; /*0x4f3338*/
  v9 = Dst; /*0x4f333d*/
  v41 = 1; /*0x4f3341*/
  if ( *v7 ) /*0x4f3338*/
  {
    while ( v8 < 0x21 ) /*0x4f3356*/
    {
      ++v7; /*0x4f3358*/
      if ( a5 ) /*0x4f335d*/
      {
        if ( a6 ) /*0x4f3361*/
          ++*a6; /*0x4f3363*/
      }
      v8 = *v7; /*0x4f3366*/
      if ( !*v7 ) /*0x4f3366*/
        goto LABEL_54; /*0x4f336a*/
    }
    v10 = *v7; /*0x4f3372*/
    v46 = *v7; /*0x4f3376*/
    if ( !*v7 ) /*0x4f337a*/
      goto LABEL_54; /*0x4f337a*/
    v11 = v7 - (char *)&Script_OperatorList - 5; /*0x4f3387*/
    v43 = v11; /*0x4f338b*/
    do /*0x4f3393*/
    {
      v12 = *(_WORD *)(v7 + 1); /*0x4f3393*/
      switch ( v10 ) /*0x4f3397*/
      {
        case 0x58: /*0x4f3397*/
          if ( v12 >= 0x1000 && v12 < 0x1171 ) /*0x4f33a9*/
          {
            v13 = (__int16)(*(_WORD *)(v7 + 3) + 5); /*0x4f33ba*/
            memcpy(v9, v7, v13); /*0x4f33c0*/
            v9 += v13; /*0x4f33c8*/
            v7 += v13; /*0x4f33ca*/
            goto LABEL_54; /*0x4f33cc*/
          }
          break;
        case 0x73: /*0x4f3397*/
        case 0x6C: /*0x4f3397*/
        case 0x66: /*0x4f3397*/
        case 0x47: /*0x4f3397*/
        case 0x5A: /*0x4f3397*/
        case 0x72: /*0x4f3397*/
          *v9 = v10; /*0x4f34c1*/
          v19 = v7[1]; /*0x4f34c3*/
          v20 = v7 + 1; /*0x4f34c6*/
          v21 = v9 + 1; /*0x4f34c9*/
          *v21++ = v19; /*0x4f34cc*/
          *v21 = v20[1]; /*0x4f34dd*/
          v11 += 3; /*0x4f34df*/
          v9 = v21 + 1; /*0x4f34e2*/
          v7 = v20 + 2; /*0x4f34e5*/
          v43 = v11; /*0x4f34eb*/
          if ( v10 != 0x72 ) /*0x4f34ef*/
            goto LABEL_54; /*0x4f34ef*/
          goto LABEL_39; /*0x4f34ef*/
        case 0x6E: /*0x4f3397*/
          *v9 = *v7; /*0x4f3510*/
          v22 = v7[1]; /*0x4f3512*/
          v23 = v7 + 1; /*0x4f3516*/
          v24 = v9 + 1; /*0x4f3519*/
          *v24 = v22; /*0x4f351c*/
          v25 = v23[1]; /*0x4f351e*/
          v26 = v24 + 1; /*0x4f3521*/
          v27 = v23 + 1; /*0x4f3524*/
LABEL_43:
          *v26 = v25; /*0x4f3577*/
          v34 = v27[1]; /*0x4f3579*/
          v35 = v27 + 1; /*0x4f357d*/
          v36 = v26 + 1; /*0x4f3580*/
          *v36++ = v34; /*0x4f3583*/
          *v36 = v35[1]; /*0x4f358f*/
          v9 = v36 + 1; /*0x4f3591*/
          v7 = v35 + 2; /*0x4f3594*/
          goto LABEL_54; /*0x4f3597*/
        case 0x7A: /*0x4f3397*/
          *v9 = *v7; /*0x4f352c*/
          v9[1] = v7[1]; /*0x4f3532*/
          v28 = v7 + 1; /*0x4f3535*/
          v29 = v28[1]; /*0x4f3538*/
          v30 = v9 + 1; /*0x4f353c*/
          ++v28; /*0x4f353f*/
          v30[1] = v29; /*0x4f3542*/
          v31 = v28[1]; /*0x4f3545*/
          ++v30; /*0x4f3549*/
          ++v28; /*0x4f354c*/
          v30[1] = v31; /*0x4f354f*/
          v32 = *++v28; /*0x4f3552*/
          v30 += 2; /*0x4f355c*/
          *v30 = v32; /*0x4f355f*/
          v33 = *++v28; /*0x4f3561*/
          *++v30 = v33; /*0x4f356b*/
          v25 = v28[1]; /*0x4f356d*/
          v26 = v30 + 1; /*0x4f3571*/
          v27 = v28 + 1; /*0x4f3574*/
          goto LABEL_43; /*0x4f3574*/
        case 0x22: /*0x4f3397*/
          ++v7; /*0x4f3599*/
          *v9 = 0x22; /*0x4f359c*/
          v37 = *v7; /*0x4f359f*/
          ++v9; /*0x4f35a1*/
          if ( *v7 ) /*0x4f359f*/
          {
            while ( v37 != 0x22 ) /*0x4f35aa*/
            {
              ++v7; /*0x4f35ac*/
              *v9 = v37; /*0x4f35af*/
              v37 = *v7; /*0x4f35b1*/
              ++v9; /*0x4f35b3*/
              if ( !*v7 ) /*0x4f35b1*/
                goto LABEL_47; /*0x4f35b8*/
            }
          }
          else
          {
LABEL_47:
            if ( *v7 != 0x22 ) /*0x4f35bd*/
              goto LABEL_54; /*0x4f35bd*/
          }
          *v9++ = *v7++; /*0x4f35c1*/
          goto LABEL_54; /*0x4f35c9*/
        case 0x20: /*0x4f3397*/
        case 9: /*0x4f3397*/
          goto LABEL_54; /*0x4f342e*/
      }
      v42 = 0; /*0x4f3434*/
      v14 = 0; /*0x4f3439*/
      v15 = byte_B0A12D; /*0x4f343b*/
      v44 = v11; /*0x4f3440*/
      while ( 2 ) /*0x4f344a*/
      {
        v16 = *v15; /*0x4f344a*/
        v17 = v15; /*0x4f344e*/
        if ( *v15 ) /*0x4f344a*/
        {
          while ( v16 == v17[v44] ) /*0x4f345e*/
          {
            v16 = *++v17; /*0x4f3460*/
            v42 = 1; /*0x4f3468*/
            if ( !v16 ) /*0x4f346d*/
            {
              v10 = v46; /*0x4f346f*/
              goto LABEL_31; /*0x4f346f*/
            }
          }
          v44 -= 8; /*0x4f34a9*/
          ++v14; /*0x4f34ae*/
          v18 = 0; /*0x4f34b1*/
          v15 += 8; /*0x4f34b3*/
          if ( v14 < 0x10 ) /*0x4f34b9*/
          {
            v10 = v46; /*0x4f3446*/
            continue; /*0x4f3446*/
          }
          v10 = v46; /*0x4f34bb*/
        }
        else
        {
LABEL_31:
          v18 = 1; /*0x4f3473*/
        }
        break;
      }
      *a4 = v14; /*0x4f347d*/
      if ( v18 ) /*0x4f347f*/
      {
        if ( v41 ) /*0x4f35d0*/
        {
          v38 = *(_BYTE *)(8 * v14 + 0xB0A12D); /*0x4f35d2*/
          v39 = (char *)(8 * v14 + 0xB0A12D); /*0x4f35db*/
          if ( v38 ) /*0x4f35e2*/
          {
            do /*0x4f35e9*/
            {
              ++v39; /*0x4f35e4*/
              *v9 = v38; /*0x4f35e7*/
              v38 = *v39; /*0x4f35e9*/
              ++v9; /*0x4f35ec*/
              ++v7; /*0x4f35ef*/
            }
            while ( *v39 ); /*0x4f35e9*/
          }
        }
        else
        {
          *a4 = 0x10; /*0x4f35f8*/
        }
        break; /*0x4f35f4*/
      }
      if ( v42 ) /*0x4f3489*/
        sub_4F3300(this, 5); /*0x4f3491*/
      *v9++ = v10; /*0x4f3496*/
      ++v7; /*0x4f349b*/
      v11 = ++v43; /*0x4f34a3*/
LABEL_39:
      v10 = *v7; /*0x4f34f5*/
      v41 = 0; /*0x4f34f9*/
      v46 = *v7; /*0x4f34fe*/
    }
    while ( *v7 ); /*0x4f3393*/
  }
LABEL_54:
  *v9 = 0; /*0x4f3600*/
  *a2 = v7; /*0x4f3607*/
  return v9 - Dst; /*0x4f360f*/
}
