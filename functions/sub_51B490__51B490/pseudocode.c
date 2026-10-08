// Authoritative Oblivion KF-to-TESAnimGroup parser. Consumes a NiControllerSequence and model path, resolves the fixed 43-group table, encodes filename movement/weapon prefixes, parses required action notes plus m:/Blend:/Sound:/Enum:, builds the +0x24/+0x28 event array, validates required-note ordering, and returns the constructed TESAnimGroup. Native scheduling uses each KF's authored note times; it does not impose fixed Hit timestamps. External StarShooting contrast after this native decode: deployed AttackLeft/AttackRight files instantiate class 4 as Start, Hit, a:R/a:L, End; TES3 Shoot Follow Attach is motion-only and not an Oblivion scheduler phase. The current CAS manifest applies groups 17/18/20/21 by broad weapon-name substrings Star/Throwing/Dart (12 rules over 8 files), so unrelated names can match. Its lightweight package validator checks only first/last Start/End and would not catch missing class-4 Hit/a: notes; the older six-file import log is stale.
TESAnimGroup *__cdecl TESAnimGroup_ParseKFModel(NiControllerSequence *sequence, char *modelPath)
{
  char v2; // cl
  int v3; // esi
  char *v4; // eax
  const char *v5; // edi
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
  CAS_TESAnimGroup_Decoded *v26; // ecx
  CAS_TESAnimGroup_Decoded *v27; // eax
  CAS_TESAnimGroup_Decoded *v28; // eax
  float *requiredNoteTimes; // eax
  char *v30; // eax
  char *v31; // edi
  int v32; // ecx
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
  CAS_u32 eventCount; // esi
  unsigned int v46; // edi
  bool v47; // cc
  struct CAS_TESAnimGroupEvent_Decoded *events; // eax
  struct CAS_TESAnimGroupEvent_Decoded *v49; // eax
  int v50; // esi
  int v51; // ebx
  CAS_u32 v52; // edi
  struct CAS_TESAnimGroupEvent_Decoded *v53; // eax
  struct CAS_TESAnimGroupEvent_Decoded *v54; // eax
  struct CAS_TESAnimGroupEvent_Decoded *v55; // ecx
  struct CAS_TESAnimGroupEvent_Decoded *v56; // eax
  double v57; // st7
  char *v58; // eax
  size_t v60; // [esp+Ch] [ebp-1C4h]
  char v61; // [esp+27h] [ebp-1A9h]
  char *Str1; // [esp+28h] [ebp-1A8h]
  char *Str1a; // [esp+28h] [ebp-1A8h]
  float Str1b; // [esp+28h] [ebp-1A8h]
  CAS_TESAnimGroup_Decoded *v65; // [esp+2Ch] [ebp-1A4h]
  char *v66; // [esp+34h] [ebp-19Ch]
  char *Str2; // [esp+38h] [ebp-198h] BYREF
  char *String; // [esp+3Ch] [ebp-194h]
  char v69[4]; // [esp+40h] [ebp-190h]
  char v70; // [esp+47h] [ebp-189h]
  int v71; // [esp+48h] [ebp-188h]
  int v72; // [esp+4Ch] [ebp-184h]
  float v73; // [esp+50h] [ebp-180h]
  double RequiredNoteTime; // [esp+54h] [ebp-17Ch]
  int v75; // [esp+5Ch] [ebp-174h]
  char *v76; // [esp+60h] [ebp-170h]
  int v77; // [esp+64h] [ebp-16Ch]
  int v78; // [esp+68h] [ebp-168h]
  int v79; // [esp+6Ch] [ebp-164h]
  int v80; // [esp+70h] [ebp-160h]
  const char *v81; // [esp+74h] [ebp-15Ch]
  int v82; // [esp+78h] [ebp-158h]
  char left[64]; // [esp+7Ch] [ebp-154h] BYREF
  char right[260]; // [esp+BCh] [ebp-114h] BYREF
  int v85; // [esp+1CCh] [ebp-4h]

  v2 = bDisableWarning_MESSAGES; /*0x51b4d2*/
  v3 = 0; /*0x51b4df*/
  *(_DWORD *)v69 = modelPath; /*0x51b4e8*/
  v70 = v2; /*0x51b4ec*/
  v61 = 0; /*0x51b4f0*/
  v65 = 0; /*0x51b4f5*/
  v75 = 0xFF; /*0x51b4f9*/
  v72 = 0; /*0x51b501*/
  v80 = 0; /*0x51b505*/
  v77 = 0; /*0x51b509*/
  v4 = strrchr(modelPath, 0x5C); /*0x51b50d*/
  bDisableWarning_MESSAGES = 1; /*0x51b512*/
  v5 = *((const char **)sequence + 0x17); /*0x51b519*/
  Str1 = v4; /*0x51b527*/
  v6 = 0xFFFFFFFF; /*0x51b52b*/
  v7 = 0xFFFFFFFF; /*0x51b52e*/
  _sprintf(left, "%s NonAccum", v5);            // Interior of TESAnimGroup_ParseKFModel (actual function start 0x51B490), not a standalone parser entry. This instruction begins construction of the '<name> NonAccum' sequence-name candidate. /*0x51b531*/
  if ( *((_DWORD *)sequence + 3) ) /*0x51b53d*/
  {
    while ( 1 ) /*0x51b550*/
    {
      sub_6C66B0(sequence, v3, &Str2); /*0x51b550*/
      if ( CRT_StricmpLocaleDispatch(v5, Str2) ) /*0x51b55b*/
      {
        if ( !CRT_StricmpLocaleDispatch(left, Str2) ) /*0x51b575*/
          v7 = v3; /*0x51b581*/
      }
      else
      {
        v6 = v3; /*0x51b567*/
      }
      FormHeapFree((unsigned int)Str2); /*0x51b588*/
      if ( v6 != 0xFFFFFFFF && v7 != 0xFFFFFFFF ) /*0x51b598*/
        break; /*0x51b598*/
      if ( (unsigned int)++v3 >= *((_DWORD *)sequence + 3) ) /*0x51b5a4*/
        goto LABEL_15; /*0x51b5a4*/
    }
    v8 = *((_DWORD *)sequence + 3); /*0x51b5ac*/
    if ( v6 >= v8 ) /*0x51b5b1*/
      v9 = 0xFF; /*0x51b5c0*/
    else
      v9 = *(_BYTE *)(*((_DWORD *)sequence + 5) + 0x10 * v6 + 0xD); /*0x51b5b9*/
    if ( v7 < v8 ) /*0x51b5c7*/
      *(_BYTE *)(*((_DWORD *)sequence + 5) + 0x10 * v7 + 0xD) = v9; /*0x51b5cf*/
  }
LABEL_15:
  if ( Str1 ) /*0x51b5d8*/
  {
    v10 = 1; /*0x51b5de*/
    Str1a = Str1 + 1; /*0x51b5e3*/
    while ( 1 ) /*0x51b5f9*/
    {
      LODWORD(v60) = strlen(*(const char **)(4 * v10 + 0xB102B8)); /*0x51b5f9*/
      v11 = Str1a; /*0x51b609*/
      if ( !_strnicmp(Str1a, *(const char **)(4 * v10 + 0xB102B8), v60) ) /*0x51b612*/
        break; /*0x51b612*/
      if ( ++v10 >= 4 ) /*0x51b624*/
        goto LABEL_21; /*0x51b624*/
    }
    v12 = *(const char **)(4 * v10 + 0xB102B8); /*0x51b628*/
    v80 = v10; /*0x51b62f*/
    v11 = &Str1a[strlen(v12)]; /*0x51b641*/
LABEL_21:
    v13 = 1; /*0x51b643*/
    while ( 1 ) /*0x51b659*/
    {
      LODWORD(v60) = strlen(*(const char **)(4 * v13 + 0xB102C8)); /*0x51b659*/
      if ( !_strnicmp(v11, *(const char **)(4 * v13 + 0xB102C8), v60) ) /*0x51b66e*/
        break; /*0x51b66e*/
      if ( ++v13 >= 6 ) /*0x51b680*/
        goto LABEL_26; /*0x51b680*/
    }
    v77 = v13; /*0x51b684*/
  }
LABEL_26:
  v14 = *((_DWORD *)sequence + 8); /*0x51b688*/
  if ( v14 )
  {
    v15 = *(char **)(v14 + 0xC); /*0x51b697*/
    v16 = *(_DWORD *)(v14 + 0x10); /*0x51b69a*/
    v17 = 0; /*0x51b69d*/
    v76 = v15; /*0x51b6a1*/
    v82 = v16; /*0x51b6a5*/
    Str2 = 0; /*0x51b6a9*/
    if ( v15 )
    {
      while ( 1 )
      {
        v18 = *(const char **)(v16 + 8 * (_DWORD)v17 + 4); /*0x51b6b9*/
        Str1b = *(float *)(v16 + 8 * (_DWORD)v17); /*0x51b6c2*/
        v66 = (char *)v18; /*0x51b6c6*/
        v81 = v18; /*0x51b6ca*/
        if ( !v18 ) /*0x51b6ce*/
        {
          PrintError( /*0x51b6ec*/
            "AnimGroup empty note key at time %.2f in sequence '%s' in model '%s'.",
            Str1b,
            *((const char **)sequence + 2),
            *(const char **)v69);
LABEL_91:
          v61 = 1; /*0x51ba36*/
          goto LABEL_92; /*0x51ba36*/
        }
LABEL_32:
        if ( !strlen(v18) ) /*0x51b710*/
          goto LABEL_92; /*0x51b710*/
        if ( *v18 == 0xD ) /*0x51b71a*/
        {
          for ( i = strchr(v18, 0xA); i; ++i ) /*0x51b729*/
          {
            v20 = *i; /*0x51b730*/
            if ( !*i ) /*0x51b730*/
              break; /*0x51b730*/
            if ( v20 != 0xD && v20 != 0xA ) /*0x51b73e*/
            {
              if ( !*i ) /*0x51b790*/
                break; /*0x51b790*/
              v18 = i; /*0x51b792*/
              goto LABEL_40; /*0x51b794*/
            }
          }
          v18 = 0; /*0x51b745*/
LABEL_40:
          v66 = (char *)v18; /*0x51b747*/
        }
        LODWORD(v60) = strlen(off_B241C4); /*0x51b761*/
        if ( !_strnicmp(v18, off_B241C4, v60) ) /*0x51b764*/
        {
          if ( !v65->morphKey ) /*0x51b774*/
            v65->morphKey = v66[2]; /*0x51b785*/
          goto LABEL_120; /*0x51b788*/
        }
        LODWORD(v60) = 6; /*0x51b796*/
        if ( !_strnicmp(v18, "Blend:", v60) ) /*0x51b79e*/
        {
          if ( v18[6] == 0x20 ) /*0x51b7b1*/
            v65->blend = j__atol(v18 + 7); /*0x51b7d8*/
          else
            v65->blend = j__atol(v18 + 6); /*0x51b7c0*/
          goto LABEL_120; /*0x51b7c3*/
        }
        LODWORD(v60) = 6; /*0x51b7e0*/
        if ( _strnicmp(v18, "Sound:", v60) ) /*0x51b7e8*/
        {
          LODWORD(v60) = 5; /*0x51b7f8*/
          if ( _strnicmp(v18, "Enum:", v60) ) /*0x51b800*/
            break; /*0x51b800*/
        }
        LODWORD(v60) = 5; /*0x51ba82*/
        v33 = _strnicmp(v18, "Enum:", v60) == 0; /*0x51ba98*/
        if ( v65 ) /*0x51baa0*/
        {
          v34 = strchr(v66, 0xD); /*0x51baad*/
          LODWORD(RequiredNoteTime) = v34; /*0x51bab7*/
          if ( v34 ) /*0x51babb*/
            *v34 = 0; /*0x51babd*/
          v35 = v66 + 6; /*0x51bac2*/
          if ( !v33 ) /*0x51bac5*/
            v35 = v66 + 7; /*0x51bac7*/
          v36 = (char *)(right - v35); /*0x51bad1*/
          do /*0x51badd*/
          {
            v37 = *v35; /*0x51bad3*/
            v35[(_DWORD)v36] = *v35; /*0x51bad5*/
            ++v35; /*0x51bad8*/
          }
          while ( v37 ); /*0x51badd*/
          v38 = 0; /*0x51bae8*/
          *(float *)&String = 0.0; /*0x51baeb*/
          v39 = strchr(right, 0x2C); /*0x51baef*/
          if ( v39 || (v39 = strchr(right, 0x20)) != 0 ) /*0x51bb0f*/
          {
            v38 = v39 + 1; /*0x51bb11*/
            *v39 = 0; /*0x51bb16*/
            if ( v39 != (char *)0xFFFFFFFF ) /*0x51bb19*/
            {
              for ( j = *v38; j == 0x20; j = *++v38 ) /*0x51bb1f*/
              {
                if ( j == 0xD ) /*0x51bb23*/
                  break; /*0x51bb23*/
              }
              v41 = strchr(v38, 0x2C); /*0x51bb32*/
              if ( v41 ) /*0x51bb3c*/
              {
                String = v41 + 1; /*0x51bb41*/
                goto LABEL_112; /*0x51bb45*/
              }
              v41 = strchr(v38, 0x20); /*0x51bb4a*/
              if ( v41 ) /*0x51bb54*/
              {
                String = v41 + 1; /*0x51bb59*/
LABEL_112:
                *v41 = 0; /*0x51bb5d*/
              }
            }
          }
          if ( v33 ) /*0x51bb62*/
          {
            v42 = 0; /*0x51bb68*/
            while ( CRT_StricmpLocaleDispatch(*(const char **)(4 * v42 + 0xB109C0), right) ) /*0x51bb8a*/
            {
              if ( ++v42 >= 0x10 ) /*0x51bb96*/
                goto LABEL_117; /*0x51bb96*/
            }
            eventCount = v65->eventCount; /*0x51bc33*/
            v46 = (unsigned int)Str2 | ((v66 - v81) << 8); /*0x51bc3c*/
            TESAnimGroup_ResizeTextKeyEvents((int)v65, (char)v65, eventCount + 1); /*0x51bc43*/
            v47 = eventCount <= v65->eventCount; /*0x51bc48*/
            if ( eventCount < v65->eventCount ) /*0x51bc4b*/
            {
              events = v65->events; /*0x51bc4d*/
              if ( events ) /*0x51bc52*/
                events[eventCount].time = Str1b; /*0x51bc5d*/
              v47 = eventCount <= v65->eventCount; /*0x51bc60*/
            }
            if ( v47 ) /*0x51bc63*/
            {
              v49 = v65->events; /*0x51bc69*/
              if ( v49 ) /*0x51bc6e*/
              {
                v50 = eventCount; /*0x51bc74*/
                v49[v50].byteParam = v42; /*0x51bc77*/
                LODWORD(v65->events[v50].floatOrPackedSource) = v46; /*0x51bc7e*/
              }
            }
          }
          else
          {
            v51 = SoundMap_ResolveAnimSoundNote(right); /*0x51bc9a*/
            if ( v51 ) /*0x51bc9e*/
            {
              v52 = v65->eventCount; /*0x51bca4*/
              TESAnimGroup_ResizeTextKeyEvents((int)v65, (char)v65, v52 + 1); /*0x51bcad*/
              if ( v52 < v65->eventCount ) /*0x51bcb5*/
              {
                v53 = v65->events; /*0x51bcb7*/
                if ( v53 ) /*0x51bcbc*/
                  v53[v52].time = Str1b; /*0x51bcc7*/
                if ( v52 < v65->eventCount ) /*0x51bccd*/
                {
                  v54 = v65->events; /*0x51bccf*/
                  if ( v54 ) /*0x51bcd4*/
                    v54[v52].soundMapEntry = (void *)v51; /*0x51bcdb*/
                }
              }
              if ( v38 ) /*0x51bce1*/
              {
                v73 = atof(v38); /*0x51bce9*/
                if ( v52 < v65->eventCount ) /*0x51bcf3*/
                {
                  v55 = v65->events; /*0x51bcf5*/
                  if ( v55 ) /*0x51bcfa*/
                  {
                    v71 = (int)(v73 * dbl_A529C0); /*0x51bd21*/
                    v55[v52].byteParam = v71; /*0x51bd29*/
                  }
                }
              }
              if ( *(float *)&String != 0.0 ) /*0x51bd37*/
              {
                *(float *)&v71 = atof(String); /*0x51bd43*/
                if ( v52 < v65->eventCount ) /*0x51bd4d*/
                {
                  v56 = v65->events; /*0x51bd53*/
                  if ( v56 ) /*0x51bd58*/
                    v56[v52].floatOrPackedSource = *(float *)&v71; /*0x51bd65*/
                }
              }
            }
            else
            {
LABEL_117:
              *(float *)&v71 = Str1b * dbl_A3AA50; /*0x51bb98*/
              v79 = (int)*(float *)&v71; /*0x51bbaa*/
              PrintError("Bad note string \"%s\" frame %d in \"%s\".", v66, v79, *(const char **)v69); /*0x51bbc2*/
              v61 = 1; /*0x51bbca*/
            }
          }
          if ( LODWORD(RequiredNoteTime) ) /*0x51bbd5*/
            *(_BYTE *)LODWORD(RequiredNoteTime) = 0xD; /*0x51bbd7*/
        }
LABEL_120:
        if ( v66 ) /*0x51bbdf*/
        {
          for ( k = strchr(v66, 0xA); k; ++k ) /*0x51bbf6*/
          {
            v44 = *k; /*0x51bc00*/
            if ( !*k ) /*0x51bc00*/
              break; /*0x51bc00*/
            if ( v44 != 0xD && v44 != 0xA ) /*0x51bc12*/
            {
              if ( !*k ) /*0x51bd71*/
                break; /*0x51bd71*/
              v66 = k; /*0x51bd77*/
              v18 = k; /*0x51bd7b*/
              goto LABEL_32; /*0x51bd7d*/
            }
          }
        }
LABEL_92:
        v17 = ++Str2; /*0x51ba3b*/
        if ( Str2 >= v76 )
        {
          if ( v65 )
          {
            v32 = 1; /*0x51ba70*/
            switch ( *(_DWORD *)(0x24 * LOBYTE(v65->encodedKey) + 0xB102EC) ) /*0x51ba7b*/
            {
              case 2: /*0x51ba7b*/
              case 3: /*0x51ba7b*/
              case 5: /*0x51ba7b*/
                v32 = 2; /*0x51bd90*/
                break; /*0x51bd90*/
              case 4: /*0x51ba7b*/
                v32 = 3; /*0x51bd82*/
                break; /*0x51bd87*/
              case 7: /*0x51ba7b*/
                v32 = 4; /*0x51bd89*/
                break; /*0x51bd8e*/
              default:
                break;
            }
            RequiredNoteTime = TESAnimGroup_GetRequiredNoteTime(v65, v32); /*0x51bd95*/
            v57 = TESAnimGroup_GetRequiredNoteTime(v65, 0); /*0x51bda5*/
            if ( v57 >= RequiredNoteTime )
            {
              PrintError(
                "%s: End frame is less than or equal to Start frame in \"%s\".",
                *(const char **)(0x24 * LOBYTE(v65->encodedKey) + 0xB102E0),
                *(const char **)v69);
              v61 = 1; /*0x51bdd6*/
            }
          }
          goto LABEL_156; /*0x51bdd6*/
        }
        v16 = v82; /*0x51b6b5*/
      }
      v21 = v75; /*0x51b810*/
      v22 = 0; /*0x51b814*/
      while ( 1 ) /*0x51b816*/
      {
        if ( v21 != 0xFF ) /*0x51b81c*/
          v22 = v21; /*0x51b81e*/
        if ( !CRT_StricmpLocaleDispatch(*((const char **)sequence + 2), *(const char **)(0x24 * v22 + 0xB102E0)) ) /*0x51b833*/
          break; /*0x51b833*/
        if ( v22 != v21 && ++v22 < 0x2B ) /*0x51b84d*/
          continue; /*0x51b84d*/
        goto LABEL_89; /*0x51b84d*/
      }
      v23 = v22 + v72 + 8 * v22; /*0x51b85b*/
      v24 = *(char **)(4 * v23 + 0xB102F0); /*0x51b85d*/
      v25 = (_DWORD *)(4 * v23 + 0xB102F0); /*0x51b867*/
      v75 = v22; /*0x51b86e*/
      String = v24; /*0x51b872*/
      if ( v24 != (char *)0xFFFFFFFF ) /*0x51b876*/
      {
        LODWORD(v60) = strlen(*(const char **)(4 * (*(_DWORD *)(0x24 * v22 + 0xB102EC) + 8 * (_DWORD)String) + 0xB10900));// TESAnimGroup_ParseKFModel validates required KF text keys through flattened templates: descriptor.requiredNoteBase + 8*phaseIndex. AttackBow base 7 resolves Start, Attach, Hold, Release, End. /*0x51b896*/
        if ( !_strnicmp( /*0x51b8ae*/
                v18,
                *(const char **)(4 * (*(_DWORD *)(0x24 * v22 + 0xB102EC) + 8 * (_DWORD)String) + 0xB10900),
                v60) )
        {
          v26 = v65; /*0x51b8be*/
          if ( v65 ) /*0x51b8c4*/
            goto LABEL_69; /*0x51b8c4*/
          v27 = (CAS_TESAnimGroup_Decoded *)FormHeapAlloc(0x2Cu); /*0x51b8c8*/
          LODWORD(RequiredNoteTime) = v27; /*0x51b8d3*/
          if ( v22 == 2 ) /*0x51b8d7*/
          {
            v85 = 0; /*0x51b8db*/
            if ( v27 ) /*0x51b8e6*/
            {
              v28 = TESAnimGroup_ctor(v27, 2u); /*0x51b8eb*/
LABEL_68:
              v26 = v28; /*0x51b91d*/
              v65 = v28; /*0x51b91f*/
              v85 = 0xFFFFFFFF; /*0x51b923*/
LABEL_69:
              if ( Str1b > (double)kTerrainLODQuadRayDirectionZ ) /*0x51b941*/
              {
                requiredNoteTimes = v26->requiredNoteTimes; /*0x51b943*/
                if ( requiredNoteTimes ) /*0x51b948*/
                {
                  if ( (unsigned int)String < v26->requiredNoteCount ) /*0x51b951*/
                    requiredNoteTimes[(_DWORD)String] = Str1b; /*0x51b953*/
                }
              }
              if ( v22 == 2 ) /*0x51b95d*/
                goto LABEL_81; /*0x51b95d*/
              if ( *(_DWORD *)(0x24 * v22 + 0xB102EC) == 1 ) /*0x51b96c*/
              {
                if ( !*((_DWORD *)sequence + 9) ) /*0x51b976*/
                  goto LABEL_81; /*0x51b976*/
                PrintError("'%s' should be a looping animation.", *(_DWORD *)v69); /*0x51b982*/
              }
              else
              {
                if ( *((_DWORD *)sequence + 9) ) /*0x51b98d*/
                {
LABEL_81:
                  ++v72; /*0x51b9aa*/
                  goto LABEL_89; /*0x51b9af*/
                }
                PrintError("'%s' should NOT be a looping animation.", *(_DWORD *)v69); /*0x51b99d*/
              }
              v61 = 1; /*0x51b9a2*/
              goto LABEL_81; /*0x51b9a2*/
            }
          }
          else
          {
            v85 = 1; /*0x51b8f4*/
            if ( v27 ) /*0x51b8ff*/
            {
              v28 = TESAnimGroup_ctor(v27, v22 + (((_WORD)v77 + 0x10 * (_WORD)v80) << 8)); /*0x51b914*/
              goto LABEL_68; /*0x51b919*/
            }
          }
          v28 = 0; /*0x51b91b*/
          goto LABEL_68; /*0x51b91b*/
        }
        if ( v72 == 5 || *v25 == 0xFFFFFFFF ) /*0x51b9bb*/
        {
          v30 = strchr(v18, 0xD); /*0x51b9c0*/
          v31 = v30; /*0x51b9c5*/
          if ( v30 ) /*0x51b9cc*/
            *v30 = 0; /*0x51b9ce*/
          *(float *)&String = Str1b * dbl_A3AA50; /*0x51b9db*/
          v78 = (int)*(float *)&String; /*0x51b9e3*/
          PrintError("Bad note string \"%s\" frame %d in \"%s\".", v18, v78, *(const char **)v69); /*0x51b9f7*/
          if ( v31 ) /*0x51ba01*/
            *v31 = 0xD; /*0x51ba03*/
          v61 = 1; /*0x51ba06*/
        }
      }
LABEL_89:
      if ( v22 == 0x2B ) /*0x51ba0e*/
      {
        PrintError( /*0x51ba26*/
          "AnimGroup unable to find sequence '%s' in model '%s'.",
          *((const char **)sequence + 2),
          *(const char **)v69);
        Str2 = v76; /*0x51ba32*/
        goto LABEL_91; /*0x51ba32*/
      }
      goto LABEL_120; /*0x51ba0e*/
    }
  }
LABEL_156:
  bDisableWarning_MESSAGES = v70; /*0x51bddb*/
  if ( v61 ) /*0x51bdea*/
  {
    v58 = sub_494480(); /*0x51bdec*/
    PrintError("Animation group note problem. See %s file.", v58); /*0x51bdf7*/
  }
  return (TESAnimGroup *)v65; /*0x51be03*/
}
