char __userpurge sub_4FF710@<al>(
        void *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        size_t a5,
        _DWORD *a6,
        _DWORD *a7)
{
  int v7; // ebx
  int v8; // eax
  int *v9; // ebp
  int v11; // ebx
  __int16 v12; // ax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  char *v16; // eax
  unsigned __int8 (__cdecl *v17)(unsigned int, void *, int *, _DWORD); // ebx
  char *v18; // eax
  char *v19; // edx
  char v20; // cl
  void *v21; // eax
  double *v22; // ebp
  int v23; // eax
  bool v24; // al
  char *v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // eax
  void *v30; // ebp
  unsigned int v31; // eax
  __int16 v32; // dx
  unsigned int v33; // eax
  int v34; // ebp
  int v35; // edx
  int v36; // edx
  int v37; // [esp+0h] [ebp-1170h]
  int v38; // [esp+4h] [ebp-116Ch]
  int v39; // [esp+8h] [ebp-1168h]
  int v40; // [esp+Ch] [ebp-1164h]
  int v41; // [esp+10h] [ebp-1160h]
  unsigned int v42; // [esp+14h] [ebp-115Ch] BYREF
  void *source; // [esp+18h] [ebp-1158h]
  unsigned int byteCount; // [esp+1Ch] [ebp-1154h] BYREF
  int ArgList[128]; // [esp+20h] [ebp-1150h] BYREF
  int v46; // [esp+220h] [ebp-F50h]
  char v47; // [esp+224h] [ebp-F4Ch]
  int v48; // [esp+228h] [ebp-F48h]
  UInt32 v49; // [esp+22Ch] [ebp-F44h]
  int v50; // [esp+230h] [ebp-F40h]
  _DWORD v51[452]; // [esp+234h] [ebp-F3Ch] BYREF
  int v52; // [esp+944h] [ebp-82Ch] BYREF
  char v53[520]; // [esp+948h] [ebp-828h] BYREF
  _BYTE Src[512]; // [esp+B50h] [ebp-620h] BYREF
  int Size; // [esp+D50h] [ebp-420h]
  _BYTE v56[512]; // [esp+D60h] [ebp-410h] BYREF
  _BYTE v57[512]; // [esp+F60h] [ebp-210h] BYREF
  unsigned int v58; // [esp+116Ch] [ebp-4h]

  v7 = 0; /*0x4ff764*/
  source = this; /*0x4ff76b*/
  byteCount = a5; /*0x4ff775*/
  v46 = 0; /*0x4ff779*/
  v49 = 0; /*0x4ff780*/
  v47 = 0; /*0x4ff787*/
  v48 = 0; /*0x4ff78e*/
  v50 = 0; /*0x4ff795*/
  _memset((int)ArgList, 0, sizeof(ArgList)); /*0x4ff79c*/
  sub_4F32E0(v51); /*0x4ff7ab*/
  v8 = a6[0x104]; /*0x4ff7b0*/
  v9 = a6 + 0x82; /*0x4ff7bc*/
  v58 = 0; /*0x4ff7c2*/
  a6[0x103] = 0; /*0x4ff7c9*/
  a6[0x82] = 0; /*0x4ff7cf*/
  switch ( v8 ) /*0x4ff7df*/
  {
    case 0x10: /*0x4ff7df*/
      if ( sub_4FD7C0(st5_0, st6_0, a4, (char *)HIDWORD(a5), (char *)ArgList, (int)(a6 + 1), a6 + 0x82, 0, 0) ) /*0x4ff7f3*/
      {
        v42 = (unsigned int)&off_B0AF4C; /*0x4ff803*/
        while ( CRT_StricmpLocaleDispatch(*(const char **)(v42 - 4), (const char *)ArgList) /*0x4ff83a*/
             && CRT_StricmpLocaleDispatch(*(const char **)v42, (const char *)ArgList) )
        {
          ++v7; /*0x4ff843*/
          v42 += 0x28; /*0x4ff84b*/
          if ( (int)v42 >= (int)&Script_ConsoleCommandList[0].super.numBuckets ) /*0x4ff84f*/
          {
            sub_4FCE30( /*0x4ff857*/
              SHIDWORD(a5),
              "Syntax Error.  Invalid block type in 'begin' command.",
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              (int)source,
              byteCount,
              ArgList[0]);
            v58 = 0xFFFFFFFF; /*0x4ff866*/
            Shared_NoOpVirtual_60D0A0(v51); /*0x4ff871*/
            return 0; /*0x4ff878*/
          }
        }
        v11 = 0x14 * v7; /*0x4ff88c*/
        v12 = word_B0AF50[v11]; /*0x4ff88e*/
        v13 = 2 * v11; /*0x4ff896*/
        *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = v12; /*0x4ff899*/
        a6[0x103] += 2; /*0x4ff8a1*/
        if ( sub_4FD370((int)v9, st5_0, st6_0, a4, SHIDWORD(a5), a6) == 0xFFFFFFFF ) /*0x4ff8b1*/
        {
          sub_4FCE30( /*0x4ff8b9*/
            SHIDWORD(a5),
            "Mismatched begin/end block.",
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            (int)source,
            byteCount,
            ArgList[0]);
          goto LABEL_10; /*0x4ff8b9*/
        }
        *(_DWORD *)((char *)a6 + a6[0x103] + 0x20C) = 0x55555555; /*0x4ff8e5*/
        v14 = a6[0x103]; /*0x4ff8f0*/
        v15 = v14 + *(_DWORD *)(HIDWORD(a5) + 0x24); /*0x4ff8f9*/
        a6[0x103] = v14 + 4; /*0x4ff8fe*/
        v16 = (char *)&Script_BlockTypeList + v13; /*0x4ff904*/
        dword_B361CC[0xB] = v15; /*0x4ff90c*/
        if ( !(char **)((char *)&Script_BlockTypeList + v13) ) /*0x4ff904*/
          goto LABEL_20; /*0x4ff904*/
        if ( v16[0x10] && *(_BYTE *)(HIDWORD(a5) + 0x38) ) /*0x4ff91e*/
        {
          sub_4FCE30( /*0x4ff92a*/
            SHIDWORD(a5),
            "Invalid block type for quest script.",
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            (int)source,
            byteCount,
            ArgList[0]);
          v58 = 0xFFFFFFFF; /*0x4ff939*/
          Shared_NoOpVirtual_60D0A0(v51); /*0x4ff944*/
          return 0; /*0x4ff94b*/
        }
        source = *((void **)v16 + 5); /*0x4ff955*/
        if ( !source ) /*0x4ff959*/
        {
LABEL_20:
          if ( v15 ) /*0x4ffa01*/
            *(_DWORD *)((char *)a6 + v15 - *(_DWORD *)(HIDWORD(a5) + 0x24) + 0x20C) = *(_DWORD *)(HIDWORD(a5) + 0x24) /*0x4ffa16*/
                                                                                    + a6[0x103];
          goto LABEL_59; /*0x4ffa1d*/
        }
        v17 = *((unsigned __int8 (__cdecl **)(unsigned int, void *, int *, _DWORD))v16 + 7); /*0x4ff963*/
        v42 = *((unsigned __int16 *)v16 + 9); /*0x4ff96d*/
        sub_4FCC40(&v52); /*0x4ff971*/
        v18 = (char *)a6 + *v9 + 4; /*0x4ff979*/
        v19 = (char *)(v53 - v18); /*0x4ff984*/
        do /*0x4ff990*/
        {
          v20 = *v18; /*0x4ff986*/
          v18[(_DWORD)v19] = *v18; /*0x4ff988*/
          ++v18; /*0x4ff98b*/
        }
        while ( v20 ); /*0x4ff990*/
        v52 = *a6; /*0x4ff9a1*/
        Size = 0; /*0x4ff9ae*/
        if ( v17(v42, source, &v52, HIDWORD(a5)) ) /*0x4ff9b9*/
        {
          memcpy((char *)a6 + a6[0x103] + 0x20C, Src, Size); /*0x4ff9e4*/
          v15 = dword_B361CC[0xB]; /*0x4ff9f0*/
          a6[0x103] += Size; /*0x4ff9f9*/
          goto LABEL_20; /*0x4ff9f9*/
        }
LABEL_10:
        v58 = 0xFFFFFFFF; /*0x4ff8c1*/
        Shared_NoOpVirtual_60D0A0(v51); /*0x4ff8d3*/
        return 0; /*0x4ff8da*/
      }
      sub_4FCE30( /*0x4ffa28*/
        SHIDWORD(a5),
        "Syntax Error.  Missing block type in 'begin' command.",
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        (int)source,
        byteCount,
        ArgList[0]);
      v58 = 0xFFFFFFFF; /*0x4ffa37*/
      Shared_NoOpVirtual_60D0A0(v51); /*0x4ffa42*/
      return 0; /*0x4ffa49*/
    case 0x11: /*0x4ff7df*/
      if ( dword_B361CC[0xB] ) /*0x4ffa4e*/
      {
        *(_DWORD *)(*(_DWORD *)(HIDWORD(a5) + 0x20) + dword_B361CC[0xB] + 4) = *(_DWORD *)(HIDWORD(a5) + 0x24) /*0x4ffa65*/
                                                                             - *(_DWORD *)(*(_DWORD *)(HIDWORD(a5) + 0x20)
                                                                                         + dword_B361CC[0xB]
                                                                                         + 4);
        dword_B361CC[0xB] = 0; /*0x4ffa67*/
        goto LABEL_59; /*0x4ffa6d*/
      }
      sub_4FCE30( /*0x4ffa78*/
        SHIDWORD(a5),
        "Syntax Error.  Failed to store the 'begin' 'end' jump block.",
        v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        (int)source,
        byteCount,
        ArgList[0]);
      v58 = 0xFFFFFFFF; /*0x4ffa87*/
      Shared_NoOpVirtual_60D0A0(v51); /*0x4ffa92*/
      return 0; /*0x4ffa99*/
    case 0x12: /*0x4ff7df*/
    case 0x13: /*0x4ff7df*/
    case 0x14: /*0x4ff7df*/
    case 0x1F: /*0x4ff7df*/
      if ( !sub_4FD7C0(st5_0, st6_0, a4, (char *)HIDWORD(a5), (char *)ArgList, (int)(a6 + 1), a6 + 0x82, 0, 0) ) /*0x4ffab5*/
      {
        sub_4FCE30( /*0x4ffb6a*/
          SHIDWORD(a5),
          "Missing variable name in variable declaration.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        v58 = 0xFFFFFFFF; /*0x4ffb79*/
        Shared_NoOpVirtual_60D0A0(v51); /*0x4ffb84*/
        return 0; /*0x4ffb8b*/
      }
      v21 = (void *)FormHeapAlloc(0x20u); /*0x4ffabd*/
      source = v21; /*0x4ffac5*/
      LOBYTE(v58) = 1; /*0x4ffacb*/
      if ( v21 ) /*0x4ffad3*/
        v22 = ScriptVariableInfo_Constructor((double *)v21); /*0x4ffadc*/
      else
        v22 = 0; /*0x4ffae0*/
      v23 = a6[0x104]; /*0x4ffae2*/
      LOBYTE(v58) = 0; /*0x4ffaeb*/
      v24 = v23 != 0x14 && v23 != 0x1F; /*0x4ffb01*/
      *((_BYTE *)v22 + 0x10) = v24; /*0x4ffb0c*/
      BSStringT_Set((BSStringT *)v22 + 3, (const char *)ArgList, 0); /*0x4ffb0f*/
      if ( !sub_4FAA90((Script *)byteCount, *((char **)v22 + 6), (UInt32 *)v22) ) /*0x4ffb1d*/
        *(_DWORD *)v22 = ++*(_DWORD *)(HIDWORD(a5) + 0x34); /*0x4ffb2d*/
      BSSimpleList_PushBack((_DWORD *)(HIDWORD(a5) + 0x3C), (int)v22); /*0x4ffb34*/
      if ( a6[0x104] == 0x1F ) /*0x4ffb40*/
      {
        v49 = *(_DWORD *)v22; /*0x4ffb53*/
        sub_4FD0A0((char *)HIDWORD(a5), st5_0, st6_0, a4, (char *)ArgList, 1, 0); /*0x4ffb5a*/
      }
      goto LABEL_59; /*0x4ffb5f*/
    case 0x15: /*0x4ff7df*/
      if ( !sub_4FD7C0(st5_0, st6_0, a4, (char *)HIDWORD(a5), (char *)ArgList, (int)(a6 + 1), a6 + 0x82, 1, 1) ) /*0x4ffb9f*/
      {
        sub_4FCE30( /*0x4ffbb1*/
          SHIDWORD(a5),
          "Missing variable name in set command.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        v58 = 0xFFFFFFFF; /*0x4ffbc0*/
        Shared_NoOpVirtual_60D0A0(v51); /*0x4ffbcb*/
        return 0; /*0x4ffbd2*/
      }
      if ( !v47 ) /*0x4ffbdf*/
      {
        sub_4FCE30( /*0x4ffbec*/
          SHIDWORD(a5),
          "Unknown variable '%s'.",
          (int)ArgList,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount);
        goto LABEL_10; /*0x4ffbf4*/
      }
      sub_4FCC00((int)&v52); /*0x4ffc00*/
      sub_4FD7C0(st5_0, st6_0, a4, (char *)HIDWORD(a5), (char *)&v52, (int)(a6 + 1), a6 + 0x82, 0, 0); /*0x4ffc15*/
      if ( tolower((char)v52) != 0x74 || tolower(SBYTE1(v52)) != 0x6F ) /*0x4ffc48*/
      {
        sub_4FCE30( /*0x4ffdfe*/
          SHIDWORD(a5),
          "Syntax Error.  Missing \"to\" in set command.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        goto LABEL_10; /*0x4ffdfe*/
      }
      if ( v46 ) /*0x4ffc55*/
      {
        if ( v47 == 0x47 ) /*0x4ffc60*/
          *((_BYTE *)a6 + a6[0x103] + 0x20C) = 0x47; /*0x4ffc68*/
        else
          *((_BYTE *)a6 + a6[0x103] + 0x20C) = 0x72; /*0x4ffc77*/
        *(_WORD *)((char *)a6 + ++a6[0x103] + 0x20C) = v46; /*0x4ffc94*/
        a6[0x103] += 2; /*0x4ffc9c*/
      }
      if ( v49 ) /*0x4ffcaa*/
      {
        *((_BYTE *)a6 + a6[0x103]++ + 0x20C) = v47; /*0x4ffcb9*/
        *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = v49; /*0x4ffcd5*/
        a6[0x103] += 2; /*0x4ffcdd*/
      }
      if ( !sub_4FCB90((int)(a6 + 1), *v9) ) /*0x4ffcf6*/
        goto LABEL_10; /*0x4ffcf6*/
      sub_4FCBD0((int)(a6 + 1), a6 + 0x82); /*0x4ffd01*/
      _memset((int)v56, 0, sizeof(v56)); /*0x4ffd14*/
      byteCount = sub_4FDAF0(st5_0, st6_0, a4, SHIDWORD(a5), a6, (const char *)a6 + *v9 + 4, (int)v56); /*0x4ffd3d*/
      if ( !byteCount ) /*0x4ffd41*/
      {
        sub_4FCE30( /*0x4ffd48*/
          SHIDWORD(a5),
          "Syntax Error.  Missing expression in set command.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          0,
          ArgList[0]);
        goto LABEL_10; /*0x4ffd48*/
      }
      v25 = sub_4F4080(v51, v56, &byteCount); /*0x4ffd61*/
      if ( v51[0] ) /*0x4ffd6d*/
      {
        sub_4FCE30( /*0x4ffd74*/
          SHIDWORD(a5),
          "InfixToPostfix Error.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        goto LABEL_10; /*0x4ffd74*/
      }
      *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = byteCount; /*0x4ffd84*/
      v26 = byteCount; /*0x4ffd8c*/
      a6[0x103] += 2; /*0x4ffd90*/
      memcpy((char *)a6 + a6[0x103] + 0x20C, v25, v26); /*0x4ffda7*/
      v27 = byteCount; /*0x4ffdac*/
      goto LABEL_58; /*0x4ffdac*/
    case 0x16: /*0x4ff7df*/
    case 0x18: /*0x4ff7df*/
      byteCount = 0; /*0x4ffe08*/
      if ( !sub_4FCB90((int)(a6 + 1), 0) ) /*0x4ffe0c*/
      {
        sub_4FCE30( /*0x4ffe1d*/
          SHIDWORD(a5),
          "Mismatched parentheses.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        goto LABEL_10; /*0x4ffe1d*/
      }
      sub_4FCBD0((int)(a6 + 1), &byteCount); /*0x4ffe28*/
      _memset((int)v57, 0, sizeof(v57)); /*0x4ffe3b*/
      v30 = source; /*0x4ffe44*/
      v42 = sub_4FDAF0(st5_0, st6_0, a4, SHIDWORD(a5), a6, (const char *)a6 + byteCount + 4, (int)v57); /*0x4ffe67*/
      if ( !v42 ) /*0x4ffe6b*/
        goto LABEL_10; /*0x4ffe6b*/
      source = sub_4F4080(v51, v57, &v42); /*0x4ffe8a*/
      if ( v51[0] ) /*0x4ffe97*/
      {
        sub_4FCE30( /*0x4ffea1*/
          SHIDWORD(a5),
          *(char **)(4 * v51[0] + 0xB09DC0),
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        goto LABEL_10; /*0x4ffea1*/
      }
      v31 = sub_4FD430((int)v30, st5_0, st6_0, a4, SHIDWORD(a5), a6); /*0x4ffeaa*/
      if ( v31 == 0xFFFFFFFF ) /*0x4ffeb2*/
      {
LABEL_71:
        sub_4FCE30( /*0x4ffeb4*/
          SHIDWORD(a5),
          "Mismatched if/then/else block.",
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          (int)source,
          byteCount,
          ArgList[0]);
        goto LABEL_10; /*0x4ffeb9*/
      }
      *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = v31; /*0x4ffec4*/
      v32 = v42; /*0x4ffecc*/
      a6[0x103] += 2; /*0x4ffed6*/
      *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = v32; /*0x4ffee2*/
      a6[0x103] += 2; /*0x4ffeea*/
      memcpy((char *)a6 + a6[0x103] + 0x20C, source, v42); /*0x4fff08*/
      v27 = v42; /*0x4fff0d*/
LABEL_58:
      a6[0x103] += v27; /*0x4ffdb3*/
      goto LABEL_59; /*0x4ffdb3*/
    case 0x17: /*0x4ff7df*/
      v33 = sub_4FD430((int)v9, st5_0, st6_0, a4, SHIDWORD(a5), a6); /*0x4fff1f*/
      if ( v33 == 0xFFFFFFFF ) /*0x4fff27*/
        goto LABEL_71; /*0x4fff27*/
      *(_WORD *)((char *)a6 + a6[0x103] + 0x20C) = v33; /*0x4fff2f*/
      a6[0x103] += 2; /*0x4fff37*/
      goto LABEL_59; /*0x4fff3e*/
    case 0x19: /*0x4ff7df*/
    case 0x1C: /*0x4ff7df*/
    case 0x1D: /*0x4ff7df*/
    case 0x1E: /*0x4ff7df*/
      goto LABEL_59;
    default:
      if ( (unsigned int)(v8 - 0x100) > 0x82 ) /*0x4fff4f*/
      {
        if ( (unsigned int)(v8 - 0x1000) > 0x170 ) /*0x4fff69*/
        {
LABEL_80:
          sub_4FCE30( /*0x4fff79*/
            SHIDWORD(a5),
            "Unknown function code %d.",
            v8,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            (int)source,
            byteCount);
          goto LABEL_10; /*0x4fff88*/
        }
        v34 = 0x28 * (v8 - 0x1000) + 0xB0C8C0; /*0x4fff6e*/
      }
      else
      {
        v34 = 0x28 * (v8 - 0x100) + 0xB0B420; /*0x4fff54*/
      }
      if ( !v34 ) /*0x4fff77*/
        goto LABEL_80; /*0x4fff77*/
      if ( *(_BYTE *)(v34 + 0x10) ) /*0x4fff8d*/
      {
        if ( *(_BYTE *)(HIDWORD(a5) + 0x38) && !a6[0x105] ) /*0x4fff9a*/
        {
          sub_4FCE30( /*0x4fffa7*/
            SHIDWORD(a5),
            "Reference function requires explicit reference in quest script.",
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            (int)source,
            byteCount,
            ArgList[0]);
          goto LABEL_10; /*0x4fffa7*/
        }
        if ( a6[0x105] ) /*0x4fffb0*/
        {
          source = (void *)sub_4FCD20((_DWORD *)HIDWORD(a5), a6[0x105]); /*0x4fffcd*/
          if ( !OblivionDynamicCast( /*0x4fffe6*/
                  *((void **)source + 2),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0)
            && !*((_DWORD *)source + 3) )
          {
            sub_4FCE30( /*0x4ffff4*/
              SHIDWORD(a5),
              "Syntax error.  Invalid reference '%s' (only object references and reference variables are allowed in this context).",
              *(_DWORD *)source,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              (int)source,
              byteCount);
            goto LABEL_10; /*0x4ffffc*/
          }
        }
      }
      v35 = *(_DWORD *)(v34 + 0x14); /*0x500001*/
      if ( v35 /*0x500017*/
        && !(*(unsigned __int8 (__cdecl **)(_DWORD, int, _DWORD *, _DWORD))(v34 + 0x1C))(
              *(unsigned __int16 *)(v34 + 0x12),
              v35,
              a6,
              HIDWORD(a5)) )
      {
        goto LABEL_10; /*0x50001e*/
      }
LABEL_59:
      v28 = a6[0x104]; /*0x4ffdb9*/
      if ( v28 < 0x12 || v28 > 0x14 && v28 != 0x1F ) /*0x4ffdd0*/
      {
        v29 = *(_DWORD *)(HIDWORD(a5) + 0x24); /*0x4ffdd6*/
        if ( (unsigned int)(v29 + a6[0x103] + 0xA) >= 0x4000 ) /*0x4ffde9*/
        {
          sub_4FCE30( /*0x4ffdf4*/
            SHIDWORD(a5),
            "MAX_SCRIPT_SIZE exceeded.\r\nCompiled script not saved!",
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            (int)source,
            byteCount,
            ArgList[0]);
          goto LABEL_10; /*0x4ffdf4*/
        }
        if ( a6[0x105] ) /*0x500029*/
        {
          *(_WORD *)(v29 + *(_DWORD *)(HIDWORD(a5) + 0x20)) = 0x1C; /*0x500035*/
          v36 = *(_DWORD *)(HIDWORD(a5) + 0x20); /*0x50003b*/
          *(_DWORD *)(HIDWORD(a5) + 0x24) += 2; /*0x500043*/
          *(_WORD *)(*(_DWORD *)(HIDWORD(a5) + 0x24) + v36) = *((_WORD *)a6 + 0x20A); /*0x500050*/
          *(_DWORD *)(HIDWORD(a5) + 0x24) += 2; /*0x500054*/
        }
        *(_WORD *)(*(_DWORD *)(HIDWORD(a5) + 0x24) + *(_DWORD *)(HIDWORD(a5) + 0x20)) = *((_WORD *)a6 + 0x208); /*0x50006b*/
        *(_DWORD *)(HIDWORD(a5) + 0x24) += 2; /*0x50006f*/
        *(_WORD *)(*(_DWORD *)(HIDWORD(a5) + 0x24) + *(_DWORD *)(HIDWORD(a5) + 0x20)) = *((_WORD *)a6 + 0x206); /*0x50007f*/
        *(_DWORD *)(HIDWORD(a5) + 0x24) += 2; /*0x500083*/
        memcpy((void *)(*(_DWORD *)(HIDWORD(a5) + 0x24) + *(_DWORD *)(HIDWORD(a5) + 0x20)), a6 + 0x83, a6[0x103]); /*0x50009d*/
        *(_DWORD *)(HIDWORD(a5) + 0x24) += a6[0x103]; /*0x5000ab*/
      }
      v58 = 0xFFFFFFFF; /*0x5000b5*/
      Shared_NoOpVirtual_60D0A0(v51); /*0x5000c0*/
      return 1;
  }
}
