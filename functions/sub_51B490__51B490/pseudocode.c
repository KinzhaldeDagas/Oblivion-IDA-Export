int __cdecl sub_51B490(int a1, char *Str)
{
  char v2; // cl
  int v3; // esi
  char *v4; // eax
  char *v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  char v9; // al
  int v10; // esi
  const char *v11; // ebx
  const char *v12; // eax
  int v13; // esi
  int v14; // eax
  char *v15; // edx
  int v16; // eax
  char *v17; // ecx
  const char *v18; // ebp
  char *i; // eax
  char v20; // cl
  int v21; // edi
  int v22; // esi
  int v23; // ebx
  char *v24; // eax
  _DWORD *v25; // ebx
  TESAnimGroup *v26; // ecx
  TESAnimGroup *v27; // eax
  TESAnimGroup *v28; // eax
  int v29; // eax
  char *v30; // eax
  char *v31; // edi
  unsigned int v32; // ecx
  bool v33; // bl
  char *v34; // eax
  char *v35; // eax
  char *v36; // edx
  char v37; // cl
  const char *v38; // esi
  char *v39; // eax
  char j; // al
  char *v41; // eax
  int v42; // ebx
  char *k; // eax
  char v44; // cl
  unsigned int v45; // esi
  unsigned int v46; // edi
  bool v47; // cc
  int v48; // eax
  int v49; // eax
  int v50; // esi
  int v51; // ebx
  unsigned int v52; // edi
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  double v57; // st7
  char *v58; // eax
  size_t v60; // [esp+Ch] [ebp-1C4h]
  char v61; // [esp+27h] [ebp-1A9h]
  char *Str1; // [esp+28h] [ebp-1A8h]
  char *Str1a; // [esp+28h] [ebp-1A8h]
  float Str1b; // [esp+28h] [ebp-1A8h]
  int v65; // [esp+2Ch] [ebp-1A4h]
  char *v66; // [esp+34h] [ebp-19Ch]
  char *Str2; // [esp+38h] [ebp-198h] BYREF
  char *String; // [esp+3Ch] [ebp-194h]
  char v69[4]; // [esp+40h] [ebp-190h]
  char v70; // [esp+47h] [ebp-189h]
  int v71; // [esp+48h] [ebp-188h]
  int v72; // [esp+4Ch] [ebp-184h]
  float v73; // [esp+50h] [ebp-180h]
  double v74; // [esp+54h] [ebp-17Ch]
  int v75; // [esp+5Ch] [ebp-174h]
  char *v76; // [esp+60h] [ebp-170h]
  int v77; // [esp+64h] [ebp-16Ch]
  int v78; // [esp+68h] [ebp-168h]
  int v79; // [esp+6Ch] [ebp-164h]
  int v80; // [esp+70h] [ebp-160h]
  const char *v81; // [esp+74h] [ebp-15Ch]
  int v82; // [esp+78h] [ebp-158h]
  char v83[64]; // [esp+7Ch] [ebp-154h] BYREF
  char v84[260]; // [esp+BCh] [ebp-114h] BYREF
  int v85; // [esp+1CCh] [ebp-4h]

  v2 = bDisableWarning_MESSAGES;
  v3 = 0;
  *(_DWORD *)v69 = Str;
  v70 = v2;
  v61 = 0;
  v65 = 0;
  v75 = 0xFF;
  v72 = 0;
  v80 = 0;
  v77 = 0;
  v4 = strrchr(Str, 0x5C);
  bDisableWarning_MESSAGES = 1;
  v5 = *(char **)(a1 + 0x5C);
  Str1 = v4;
  v6 = 0xFFFFFFFF;
  v7 = 0xFFFFFFFF;
  _sprintf(v83, "%s NonAccum", v5);
  if ( *(_DWORD *)(a1 + 0xC) )
  {
    while ( 1 )
    {
      sub_6C66B0((_DWORD *)a1, v3, &Str2);
      if ( !_strcmp(v5, Str2) )
      {
        v6 = v3;
      }
      else if ( !_strcmp(v83, Str2) )
      {
        v7 = v3;
      }
      FormHeapFree((unsigned int)Str2);
      if ( v6 != 0xFFFFFFFF && v7 != 0xFFFFFFFF )
        break;
      if ( (unsigned int)++v3 >= *(_DWORD *)(a1 + 0xC) )
        goto LABEL_15;
    }
    v8 = *(_DWORD *)(a1 + 0xC);
    if ( v6 >= v8 )
      v9 = 0xFF;
    else
      v9 = *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + 0x10 * v6 + 0xD);
    if ( v7 < v8 )
      *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + 0x10 * v7 + 0xD) = v9;
  }
LABEL_15:
  if ( Str1 )
  {
    v10 = 1;
    Str1a = Str1 + 1;
    while ( 1 )
    {
      LODWORD(v60) = strlen(*(const char **)(4 * v10 + 0xB102B8));
      v11 = Str1a;
      if ( !_strnicmp(Str1a, *(const char **)(4 * v10 + 0xB102B8), v60) )
        break;
      if ( ++v10 >= 4 )
        goto LABEL_21;
    }
    v12 = *(const char **)(4 * v10 + 0xB102B8);
    v80 = v10;
    v11 = &Str1a[strlen(v12)];
LABEL_21:
    v13 = 1;
    while ( 1 )
    {
      LODWORD(v60) = strlen(*(const char **)(4 * v13 + 0xB102C8));
      if ( !_strnicmp(v11, *(const char **)(4 * v13 + 0xB102C8), v60) )
        break;
      if ( ++v13 >= 6 )
        goto LABEL_26;
    }
    v77 = v13;
  }
LABEL_26:
  v14 = *(_DWORD *)(a1 + 0x20);
  if ( v14 )
  {
    v15 = *(char **)(v14 + 0xC);
    v16 = *(_DWORD *)(v14 + 0x10);
    v17 = 0;
    v76 = v15;
    v82 = v16;
    Str2 = 0;
    if ( v15 )
    {
      while ( 1 )
      {
        v18 = *(const char **)(v16 + 8 * (_DWORD)v17 + 4);
        Str1b = *(float *)(v16 + 8 * (_DWORD)v17);
        v66 = (char *)v18;
        v81 = v18;
        if ( !v18 )
        {
          PrintError(
            "AnimGroup empty note key at time %.2f in sequence '%s' in model '%s'.",
            Str1b,
            *(const char **)(a1 + 8),
            *(const char **)v69);
LABEL_91:
          v61 = 1;
          goto LABEL_92;
        }
LABEL_32:
        if ( !strlen(v18) )
          goto LABEL_92;
        if ( *v18 == 0xD )
        {
          for ( i = strchr(v18, 0xA); i; ++i )
          {
            v20 = *i;
            if ( !*i )
              break;
            if ( v20 != 0xD && v20 != 0xA )
            {
              if ( !*i )
                break;
              v18 = i;
              goto LABEL_40;
            }
          }
          v18 = 0;
LABEL_40:
          v66 = (char *)v18;
        }
        LODWORD(v60) = strlen(off_B241C4);
        if ( !_strnicmp(v18, off_B241C4, v60) )
        {
          if ( !*(_BYTE *)(v65 + 0x20) )
            *(_BYTE *)(v65 + 0x20) = v66[2];
          goto LABEL_120;
        }
        LODWORD(v60) = 6;
        if ( !_strnicmp(v18, "Blend:", v60) )
        {
          if ( v18[6] == 0x20 )
            *(_BYTE *)(v65 + 0x21) = j__atol(v18 + 7);
          else
            *(_BYTE *)(v65 + 0x21) = j__atol(v18 + 6);
          goto LABEL_120;
        }
        LODWORD(v60) = 6;
        if ( _strnicmp(v18, "Sound:", v60) )
        {
          LODWORD(v60) = 5;
          if ( _strnicmp(v18, "Enum:", v60) )
            break;
        }
        LODWORD(v60) = 5;
        v33 = _strnicmp(v18, "Enum:", v60) == 0;
        if ( v65 )
        {
          v34 = strchr(v66, 0xD);
          LODWORD(v74) = v34;
          if ( v34 )
            *v34 = 0;
          v35 = v66 + 6;
          if ( !v33 )
            v35 = v66 + 7;
          v36 = (char *)(v84 - v35);
          do
          {
            v37 = *v35;
            v35[(_DWORD)v36] = *v35;
            ++v35;
          }
          while ( v37 );
          v38 = 0;
          *(float *)&String = 0.0;
          v39 = strchr(v84, 0x2C);
          if ( v39 || (v39 = strchr(v84, 0x20)) != 0 )
          {
            v38 = v39 + 1;
            *v39 = 0;
            if ( v39 != (char *)0xFFFFFFFF )
            {
              for ( j = *v38; j == 0x20; j = *++v38 )
              {
                if ( j == 0xD )
                  break;
              }
              v41 = strchr(v38, 0x2C);
              if ( v41 )
              {
                String = v41 + 1;
                goto LABEL_112;
              }
              v41 = strchr(v38, 0x20);
              if ( v41 )
              {
                String = v41 + 1;
LABEL_112:
                *v41 = 0;
              }
            }
          }
          if ( v33 )
          {
            v42 = 0;
            while ( _strcmp(*(char **)(4 * v42 + 0xB109C0), v84) )
            {
              if ( ++v42 >= 0x10 )
                goto LABEL_117;
            }
            v45 = *(_DWORD *)(v65 + 0x24);
            v46 = (unsigned int)Str2 | ((v66 - v81) << 8);
            sub_51ACF0(v65, v65, v45 + 1);
            v47 = v45 <= *(_DWORD *)(v65 + 0x24);
            if ( v45 < *(_DWORD *)(v65 + 0x24) )
            {
              v48 = *(_DWORD *)(v65 + 0x28);
              if ( v48 )
                *(float *)(0x10 * v45 + v48) = Str1b;
              v47 = v45 <= *(_DWORD *)(v65 + 0x24);
            }
            if ( v47 )
            {
              v49 = *(_DWORD *)(v65 + 0x28);
              if ( v49 )
              {
                v50 = 0x10 * v45;
                *(_BYTE *)(v50 + v49 + 4) = v42;
                *(_DWORD *)(v50 + *(_DWORD *)(v65 + 0x28) + 8) = v46;
              }
            }
          }
          else
          {
            v51 = sub_447490(v84);
            if ( v51 )
            {
              v52 = *(_DWORD *)(v65 + 0x24);
              sub_51ACF0(v65, v65, v52 + 1);
              if ( v52 < *(_DWORD *)(v65 + 0x24) )
              {
                v53 = *(_DWORD *)(v65 + 0x28);
                if ( v53 )
                  *(float *)(0x10 * v52 + v53) = Str1b;
                if ( v52 < *(_DWORD *)(v65 + 0x24) )
                {
                  v54 = *(_DWORD *)(v65 + 0x28);
                  if ( v54 )
                    *(_DWORD *)(0x10 * v52 + v54 + 0xC) = v51;
                }
              }
              if ( v38 )
              {
                v73 = atof(v38);
                if ( v52 < *(_DWORD *)(v65 + 0x24) )
                {
                  v55 = *(_DWORD *)(v65 + 0x28);
                  if ( v55 )
                  {
                    v71 = (int)(v73 * dbl_A529C0);
                    *(_BYTE *)(0x10 * v52 + v55 + 4) = v71;
                  }
                }
              }
              if ( *(float *)&String != 0.0 )
              {
                *(float *)&v71 = atof(String);
                if ( v52 < *(_DWORD *)(v65 + 0x24) )
                {
                  v56 = *(_DWORD *)(v65 + 0x28);
                  if ( v56 )
                    *(float *)(0x10 * v52 + v56 + 8) = *(float *)&v71;
                }
              }
            }
            else
            {
LABEL_117:
              *(float *)&v71 = Str1b * dbl_A3AA50;
              v79 = (int)*(float *)&v71;
              PrintError("Bad note string \"%s\" frame %d in \"%s\".", v66, v79, *(const char **)v69);
              v61 = 1;
            }
          }
          if ( LODWORD(v74) )
            *(_BYTE *)LODWORD(v74) = 0xD;
        }
LABEL_120:
        if ( v66 )
        {
          for ( k = strchr(v66, 0xA); k; ++k )
          {
            v44 = *k;
            if ( !*k )
              break;
            if ( v44 != 0xD && v44 != 0xA )
            {
              if ( !*k )
                break;
              v66 = k;
              v18 = k;
              goto LABEL_32;
            }
          }
        }
LABEL_92:
        v17 = ++Str2;
        if ( Str2 >= v76 )
        {
          if ( v65 )
          {
            v32 = 1;
            switch ( *(_DWORD *)(0x24 * *(unsigned __int8 *)(v65 + 8) + 0xB102EC) )
            {
              case 2:
              case 3:
              case 5:
                v32 = 2;
                break;
              case 4:
                v32 = 3;
                break;
              case 7:
                v32 = 4;
                break;
              default:
                break;
            }
            v74 = sub_51AE20(v65, v32);
            v57 = sub_51AE20(v65, 0);
            if ( v57 >= v74 )
            {
              PrintError(
                "%s: End frame is less than or equal to Start frame in \"%s\".",
                *(const char **)(0x24 * *(unsigned __int8 *)(v65 + 8) + 0xB102E0),
                *(const char **)v69);
              v61 = 1;
            }
          }
          goto LABEL_156;
        }
        v16 = v82;
      }
      v21 = v75;
      v22 = 0;
      while ( 1 )
      {
        if ( v21 != 0xFF )
          v22 = v21;
        if ( !_strcmp(*(char **)(a1 + 8), *(char **)(0x24 * v22 + 0xB102E0)) )
          break;
        if ( v22 != v21 && ++v22 < 0x2B )
          continue;
        goto LABEL_89;
      }
      v23 = v22 + v72 + 8 * v22;
      v24 = *(char **)(4 * v23 + 0xB102F0);
      v25 = (_DWORD *)(4 * v23 + 0xB102F0);
      v75 = v22;
      String = v24;
      if ( v24 != (char *)0xFFFFFFFF )
      {
        LODWORD(v60) = strlen(*(const char **)(4 * (*(_DWORD *)(0x24 * v22 + 0xB102EC) + 8 * (_DWORD)String) + 0xB10900));
        if ( !_strnicmp(
                v18,
                *(const char **)(4 * (*(_DWORD *)(0x24 * v22 + 0xB102EC) + 8 * (_DWORD)String) + 0xB10900),
                v60) )
        {
          v26 = (TESAnimGroup *)v65;
          if ( v65 )
            goto LABEL_69;
          v27 = (TESAnimGroup *)FormHeapAlloc(0x2Cu);
          LODWORD(v74) = v27;
          if ( v22 == 2 )
          {
            v85 = 0;
            if ( v27 )
            {
              v28 = TESAnimGroup::TESAnimGroup(v27, 2);
LABEL_68:
              v26 = v28;
              v65 = (int)v28;
              v85 = 0xFFFFFFFF;
LABEL_69:
              if ( Str1b > (double)flt_A30634 )
              {
                v29 = *((_DWORD *)v26 + 4);
                if ( v29 )
                {
                  if ( (unsigned int)String < *((_DWORD *)v26 + 3) )
                    *(float *)(v29 + 4 * (_DWORD)String) = Str1b;
                }
              }
              if ( v22 == 2 )
                goto LABEL_81;
              if ( *(_DWORD *)(0x24 * v22 + 0xB102EC) == 1 )
              {
                if ( !*(_DWORD *)(a1 + 0x24) )
                  goto LABEL_81;
                PrintError("'%s' should be a looping animation.", *(_DWORD *)v69);
              }
              else
              {
                if ( *(_DWORD *)(a1 + 0x24) )
                {
LABEL_81:
                  ++v72;
                  goto LABEL_89;
                }
                PrintError("'%s' should NOT be a looping animation.", *(_DWORD *)v69);
              }
              v61 = 1;
              goto LABEL_81;
            }
          }
          else
          {
            v85 = 1;
            if ( v27 )
            {
              v28 = TESAnimGroup::TESAnimGroup(v27, v22 + (((_WORD)v77 + 0x10 * (_WORD)v80) << 8));
              goto LABEL_68;
            }
          }
          v28 = 0;
          goto LABEL_68;
        }
        if ( v72 == 5 || *v25 == 0xFFFFFFFF )
        {
          v30 = strchr(v18, 0xD);
          v31 = v30;
          if ( v30 )
            *v30 = 0;
          *(float *)&String = Str1b * dbl_A3AA50;
          v78 = (int)*(float *)&String;
          PrintError("Bad note string \"%s\" frame %d in \"%s\".", v18, v78, *(const char **)v69);
          if ( v31 )
            *v31 = 0xD;
          v61 = 1;
        }
      }
LABEL_89:
      if ( v22 == 0x2B )
      {
        PrintError(
          "AnimGroup unable to find sequence '%s' in model '%s'.",
          *(const char **)(a1 + 8),
          *(const char **)v69);
        Str2 = v76;
        goto LABEL_91;
      }
      goto LABEL_120;
    }
  }
LABEL_156:
  bDisableWarning_MESSAGES = v70;
  if ( v61 )
  {
    v58 = sub_494480();
    PrintError("Animation group note problem. See %s file.", v58);
  }
  return v65;
}
