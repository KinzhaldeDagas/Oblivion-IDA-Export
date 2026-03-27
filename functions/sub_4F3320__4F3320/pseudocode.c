int __userpurge sub_4F3320@<eax>(
        _DWORD *this@<ecx>,
        int a2@<ebp>,
        char **a3,
        char *Dst,
        unsigned int *a5,
        char a6,
        _DWORD *a7)
{
  char *v7; // esi
  char v8; // al
  char *v9; // edi
  char v10; // bl
  int v11; // eax
  __int16 v12; // cx
  __int16 v13; // dx
  int v14; // ebx
  unsigned int v15; // ebp
  char *v16; // edx
  char v17; // cl
  char *v18; // eax
  char v19; // al
  char v20; // dl
  _BYTE *v21; // esi
  char *v22; // edi
  char v23; // cl
  _BYTE *v24; // esi
  char *v25; // edi
  char v26; // dl
  _BYTE *v27; // edi
  _BYTE *v28; // esi
  _BYTE *v29; // esi
  char v30; // cl
  _BYTE *v31; // edi
  char v32; // dl
  char v33; // al
  char v34; // cl
  char v35; // al
  _BYTE *v36; // esi
  _BYTE *v37; // edi
  char v38; // al
  char v39; // al
  char *v40; // ebp
  size_t v42; // [esp-Ch] [ebp-24h]
  char v43; // [esp+Ah] [ebp-Eh]
  char v44; // [esp+Bh] [ebp-Dh]
  int v45; // [esp+Ch] [ebp-Ch]
  int v46; // [esp+10h] [ebp-8h]
  char v48; // [esp+28h] [ebp+10h]

  v7 = *a3;
  *a5 = 0x10;
  v8 = *v7;
  v9 = Dst;
  v43 = 1;
  if ( *v7 )
  {
    while ( v8 < 0x21 )
    {
      ++v7;
      if ( a6 )
      {
        if ( a7 )
          ++*a7;
      }
      v8 = *v7;
      if ( !*v7 )
        goto LABEL_54;
    }
    v10 = *v7;
    v48 = *v7;
    if ( !*v7 )
      goto LABEL_54;
    v11 = v7 - (char *)&Script_OperatorList - 5;
    HIDWORD(v42) = a2;
    v45 = v11;
    do
    {
      v12 = *(_WORD *)(v7 + 1);
      switch ( v10 )
      {
        case 0x58:
          if ( v12 >= 0x1000 && v12 < 0x1171 )
          {
            v13 = *(_WORD *)(v7 + 3) + 5;
            v14 = v13;
            LODWORD(v42) = v13;
            memcpy(v9, v7, v42);
            v9 += v14;
            v7 += v14;
            goto LABEL_54;
          }
          break;
        case 0x73:
        case 0x6C:
        case 0x66:
        case 0x47:
        case 0x5A:
        case 0x72:
          *v9 = v10;
          v20 = v7[1];
          v21 = v7 + 1;
          v22 = v9 + 1;
          *v22++ = v20;
          *v22 = v21[1];
          v11 += 3;
          v9 = v22 + 1;
          v7 = v21 + 2;
          v45 = v11;
          if ( v10 != 0x72 )
            goto LABEL_54;
          goto LABEL_39;
        case 0x6E:
          *v9 = *v7;
          v23 = v7[1];
          v24 = v7 + 1;
          v25 = v9 + 1;
          *v25 = v23;
          v26 = v24[1];
          v27 = v25 + 1;
          v28 = v24 + 1;
LABEL_43:
          *v27 = v26;
          v35 = v28[1];
          v36 = v28 + 1;
          v37 = v27 + 1;
          *v37++ = v35;
          *v37 = v36[1];
          v9 = v37 + 1;
          v7 = v36 + 2;
          goto LABEL_54;
        case 0x7A:
          *v9 = *v7;
          v9[1] = v7[1];
          v29 = v7 + 1;
          v30 = v29[1];
          v31 = v9 + 1;
          ++v29;
          v31[1] = v30;
          v32 = v29[1];
          ++v31;
          ++v29;
          v31[1] = v32;
          v33 = *++v29;
          v31 += 2;
          *v31 = v33;
          v34 = *++v29;
          *++v31 = v34;
          v26 = v29[1];
          v27 = v31 + 1;
          v28 = v29 + 1;
          goto LABEL_43;
        case 0x22:
          ++v7;
          *v9 = 0x22;
          v38 = *v7;
          ++v9;
          if ( *v7 )
          {
            while ( v38 != 0x22 )
            {
              ++v7;
              *v9 = v38;
              v38 = *v7;
              ++v9;
              if ( !*v7 )
                goto LABEL_47;
            }
          }
          else
          {
LABEL_47:
            if ( *v7 != 0x22 )
              goto LABEL_54;
          }
          *v9++ = *v7++;
          goto LABEL_54;
        case 0x20:
        case 9:
          goto LABEL_54;
      }
      v44 = 0;
      v15 = 0;
      v16 = byte_B0A12D;
      v46 = v11;
      while ( 2 )
      {
        v17 = *v16;
        v18 = v16;
        if ( *v16 )
        {
          while ( v17 == v18[v46] )
          {
            v17 = *++v18;
            v44 = 1;
            if ( !v17 )
            {
              v10 = v48;
              goto LABEL_31;
            }
          }
          v46 -= 8;
          ++v15;
          v19 = 0;
          v16 += 8;
          if ( v15 < 0x10 )
          {
            v10 = v48;
            continue;
          }
          v10 = v48;
        }
        else
        {
LABEL_31:
          v19 = 1;
        }
        break;
      }
      *a5 = v15;
      if ( v19 )
      {
        if ( v43 )
        {
          v39 = *(_BYTE *)(8 * v15 + 0xB0A12D);
          v40 = (char *)(8 * v15 + 0xB0A12D);
          if ( v39 )
          {
            do
            {
              ++v40;
              *v9 = v39;
              v39 = *v40;
              ++v9;
              ++v7;
            }
            while ( *v40 );
          }
        }
        else
        {
          *a5 = 0x10;
        }
        break;
      }
      if ( v44 )
        sub_4F3300(this, 5);
      *v9++ = v10;
      ++v7;
      v11 = ++v45;
LABEL_39:
      v10 = *v7;
      v43 = 0;
      v48 = *v7;
    }
    while ( *v7 );
  }
LABEL_54:
  *v9 = 0;
  *a3 = v7;
  return v9 - Dst;
}
