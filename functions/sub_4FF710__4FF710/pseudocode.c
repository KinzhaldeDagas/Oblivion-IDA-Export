char __userpurge sub_4FF710@<al>(
        void *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        size_t a4,
        _DWORD *a5,
        _DWORD *a6)
{
  int v7; // ebx
  double v8; // st7
  int v9; // eax
  int *v10; // ebp
  int v12; // ebx
  __int16 v13; // ax
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  char *v17; // eax
  unsigned __int8 (__cdecl *v18)(int, void *, int *, _DWORD); // ebx
  int v19; // eax
  char *v20; // edx
  char v21; // cl
  void *v22; // eax
  double *v23; // ebp
  int v24; // eax
  bool v25; // al
  char *v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  double v31; // st7
  void *v32; // ebp
  unsigned int v33; // eax
  __int16 v34; // dx
  unsigned int v35; // eax
  int v36; // ebp
  int v37; // edx
  int v38; // edx
  size_t v39; // [esp-4h] [ebp-1174h]
  int v40; // [esp+4h] [ebp-116Ch]
  int v41; // [esp+8h] [ebp-1168h]
  int v42; // [esp+Ch] [ebp-1164h]
  int v43; // [esp+10h] [ebp-1160h]
  int v44; // [esp+14h] [ebp-115Ch] BYREF
  void *v45; // [esp+18h] [ebp-1158h]
  int v46; // [esp+1Ch] [ebp-1154h] BYREF
  int ArgList[128]; // [esp+20h] [ebp-1150h] BYREF
  int v48; // [esp+220h] [ebp-F50h]
  char v49; // [esp+224h] [ebp-F4Ch]
  int v50; // [esp+228h] [ebp-F48h]
  UInt32 v51; // [esp+22Ch] [ebp-F44h]
  int v52; // [esp+230h] [ebp-F40h]
  _DWORD v53[452]; // [esp+234h] [ebp-F3Ch] BYREF
  int v54; // [esp+944h] [ebp-82Ch] BYREF
  char v55[520]; // [esp+948h] [ebp-828h] BYREF
  _BYTE Src[512]; // [esp+B50h] [ebp-620h] BYREF
  int Size; // [esp+D50h] [ebp-420h]
  _BYTE v58[512]; // [esp+D60h] [ebp-410h] BYREF
  _BYTE v59[512]; // [esp+F60h] [ebp-210h] BYREF
  unsigned int v60; // [esp+116Ch] [ebp-4h]

  v7 = 0;
  v45 = this;
  v46 = a4;
  v48 = 0;
  v51 = 0;
  v49 = 0;
  v50 = 0;
  v52 = 0;
  v8 = _memset(ArgList, 0, sizeof(ArgList));
  sub_4F32E0(v53);
  v9 = a5[0x104];
  v10 = a5 + 0x82;
  v60 = 0;
  a5[0x103] = 0;
  a5[0x82] = 0;
  switch ( v9 )
  {
    case 0x10:
      if ( sub_4FD7C0(st5_0, st6_0, v8, (char *)HIDWORD(a4), (char *)ArgList, (int)(a5 + 1), a5 + 0x82, 0, 0) )
      {
        v44 = (int)&off_B0AF4C;
        while ( _strcmp(*(char **)(v44 - 4), (char *)ArgList) && _strcmp(*(char **)v44, (char *)ArgList) )
        {
          ++v7;
          v44 += 0x28;
          if ( v44 >= (int)&Script_ConsoleCommandList[0].super.numBuckets )
          {
            sub_4FCE30(
              SHIDWORD(a4),
              "Syntax Error.  Invalid block type in 'begin' command.",
              SHIDWORD(v39),
              v40,
              v41,
              v42,
              v43,
              v44,
              (int)v45,
              v46,
              ArgList[0]);
            v60 = 0xFFFFFFFF;
            TESTexture::ClearComponentReferences(v53);
            return 0;
          }
        }
        v12 = 0x14 * v7;
        v13 = word_B0AF50[v12];
        v14 = 2 * v12;
        *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v13;
        a5[0x103] += 2;
        if ( sub_4FD370((int)v10, st5_0, st6_0, v8, SHIDWORD(a4), a5) == 0xFFFFFFFF )
        {
          sub_4FCE30(
            SHIDWORD(a4),
            "Mismatched begin/end block.",
            SHIDWORD(v39),
            v40,
            v41,
            v42,
            v43,
            v44,
            (int)v45,
            v46,
            ArgList[0]);
          goto LABEL_10;
        }
        *(_DWORD *)((char *)a5 + a5[0x103] + 0x20C) = 0x55555555;
        v15 = a5[0x103];
        v16 = v15 + *(_DWORD *)(HIDWORD(a4) + 0x24);
        a5[0x103] = v15 + 4;
        v17 = (char *)&Script_BlockTypeList + v14;
        dword_B361F8 = v16;
        if ( !(char **)((char *)&Script_BlockTypeList + v14) )
          goto LABEL_20;
        if ( v17[0x10] && *(_BYTE *)(HIDWORD(a4) + 0x38) )
        {
          sub_4FCE30(
            SHIDWORD(a4),
            "Invalid block type for quest script.",
            SHIDWORD(v39),
            v40,
            v41,
            v42,
            v43,
            v44,
            (int)v45,
            v46,
            ArgList[0]);
          v60 = 0xFFFFFFFF;
          TESTexture::ClearComponentReferences(v53);
          return 0;
        }
        v45 = *((void **)v17 + 5);
        if ( !v45 )
        {
LABEL_20:
          if ( v16 )
            *(_DWORD *)((char *)a5 + v16 - *(_DWORD *)(HIDWORD(a4) + 0x24) + 0x20C) = *(_DWORD *)(HIDWORD(a4) + 0x24)
                                                                                    + a5[0x103];
          goto LABEL_59;
        }
        v18 = *((unsigned __int8 (__cdecl **)(int, void *, int *, _DWORD))v17 + 7);
        v44 = *((unsigned __int16 *)v17 + 9);
        sub_4FCC40(&v54);
        v19 = (int)a5 + *v10 + 4;
        v20 = &v55[-v19];
        do
        {
          v21 = *(_BYTE *)v19;
          v20[v19] = *(_BYTE *)v19;
          ++v19;
        }
        while ( v21 );
        v54 = *a5;
        Size = 0;
        if ( v18(v44, v45, &v54, HIDWORD(a4)) )
        {
          LODWORD(v39) = Size;
          memcpy((char *)a5 + a5[0x103] + 0x20C, Src, v39);
          v16 = dword_B361F8;
          a5[0x103] += Size;
          goto LABEL_20;
        }
LABEL_10:
        v60 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v53);
        return 0;
      }
      sub_4FCE30(
        SHIDWORD(a4),
        "Syntax Error.  Missing block type in 'begin' command.",
        SHIDWORD(v39),
        v40,
        v41,
        v42,
        v43,
        v44,
        (int)v45,
        v46,
        ArgList[0]);
      v60 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v53);
      return 0;
    case 0x11:
      if ( dword_B361F8 )
      {
        *(_DWORD *)(*(_DWORD *)(HIDWORD(a4) + 0x20) + dword_B361F8 + 4) = *(_DWORD *)(HIDWORD(a4) + 0x24)
                                                                        - *(_DWORD *)(*(_DWORD *)(HIDWORD(a4) + 0x20)
                                                                                    + dword_B361F8
                                                                                    + 4);
        dword_B361F8 = 0;
        goto LABEL_59;
      }
      sub_4FCE30(
        SHIDWORD(a4),
        "Syntax Error.  Failed to store the 'begin' 'end' jump block.",
        SHIDWORD(v39),
        v40,
        v41,
        v42,
        v43,
        v44,
        (int)v45,
        v46,
        ArgList[0]);
      v60 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v53);
      return 0;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x1F:
      if ( !sub_4FD7C0(st5_0, st6_0, v8, (char *)HIDWORD(a4), (char *)ArgList, (int)(a5 + 1), a5 + 0x82, 0, 0) )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Missing variable name in variable declaration.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        v60 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v53);
        return 0;
      }
      v22 = (void *)FormHeapAlloc(0x20u);
      v45 = v22;
      LOBYTE(v60) = 1;
      if ( v22 )
        v23 = sub_517A80((double *)v22);
      else
        v23 = 0;
      v24 = a5[0x104];
      LOBYTE(v60) = 0;
      v25 = v24 != 0x14 && v24 != 0x1F;
      *((_BYTE *)v23 + 0x10) = v25;
      BSStringT_Set((BSStringT *)v23 + 3, (const char *)ArgList, 0);
      if ( !sub_4FAA90((Script *)v46, *((char **)v23 + 6), (UInt32 *)v23) )
        *(_DWORD *)v23 = ++*(_DWORD *)(HIDWORD(a4) + 0x34);
      BSSimpleList_PushBack((_DWORD *)(HIDWORD(a4) + 0x3C), (int)v23);
      if ( a5[0x104] == 0x1F )
      {
        v51 = *(_DWORD *)v23;
        sub_4FD0A0((char *)HIDWORD(a4), st5_0, st6_0, v8, (char *)ArgList, 1, 0);
      }
      goto LABEL_59;
    case 0x15:
      if ( !sub_4FD7C0(st5_0, st6_0, v8, (char *)HIDWORD(a4), (char *)ArgList, (int)(a5 + 1), a5 + 0x82, 1, 1) )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Missing variable name in set command.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        v60 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v53);
        return 0;
      }
      if ( !v49 )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Unknown variable '%s'.",
          (int)ArgList,
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46);
        goto LABEL_10;
      }
      sub_4FCC00((int)&v54);
      sub_4FD7C0(st5_0, st6_0, v8, (char *)HIDWORD(a4), (char *)&v54, (int)(a5 + 1), a5 + 0x82, 0, 0);
      if ( tolower((char)v54) != 0x74 || tolower(SBYTE1(v54)) != 0x6F )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Syntax Error.  Missing \"to\" in set command.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        goto LABEL_10;
      }
      if ( v48 )
      {
        if ( v49 == 0x47 )
          *((_BYTE *)a5 + a5[0x103] + 0x20C) = 0x47;
        else
          *((_BYTE *)a5 + a5[0x103] + 0x20C) = 0x72;
        *(_WORD *)((char *)a5 + ++a5[0x103] + 0x20C) = v48;
        a5[0x103] += 2;
      }
      if ( v51 )
      {
        *((_BYTE *)a5 + a5[0x103]++ + 0x20C) = v49;
        *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v51;
        a5[0x103] += 2;
      }
      if ( !sub_4FCB90((int)(a5 + 1), *v10) )
        goto LABEL_10;
      sub_4FCBD0((int)(a5 + 1), a5 + 0x82);
      _memset(v58, 0, sizeof(v58));
      v46 = sub_4FDAF0(st5_0, st6_0, SHIDWORD(a4), a5, (const char *)a5 + *v10 + 4, (int)v58);
      if ( !v46 )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Syntax Error.  Missing expression in set command.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          0,
          ArgList[0]);
        goto LABEL_10;
      }
      v26 = sub_4F4080(v53, v58, &v46);
      if ( v53[0] )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "InfixToPostfix Error.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        goto LABEL_10;
      }
      *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v46;
      v27 = v46;
      a5[0x103] += 2;
      LODWORD(v39) = v27;
      memcpy((char *)a5 + a5[0x103] + 0x20C, v26, v39);
      v28 = v46;
      goto LABEL_58;
    case 0x16:
    case 0x18:
      v46 = 0;
      if ( !sub_4FCB90((int)(a5 + 1), 0) )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          "Mismatched parentheses.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        goto LABEL_10;
      }
      sub_4FCBD0((int)(a5 + 1), &v46);
      v31 = _memset(v59, 0, sizeof(v59));
      v32 = v45;
      v44 = sub_4FDAF0(st5_0, st6_0, SHIDWORD(a4), a5, (const char *)a5 + v46 + 4, (int)v59);
      if ( !v44 )
        goto LABEL_10;
      v45 = sub_4F4080(v53, v59, &v44);
      if ( v53[0] )
      {
        sub_4FCE30(
          SHIDWORD(a4),
          *(char **)(4 * v53[0] + 0xB09DC0),
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        goto LABEL_10;
      }
      v33 = sub_4FD430((int)v32, st5_0, st6_0, v31, SHIDWORD(a4), a5);
      if ( v33 == 0xFFFFFFFF )
      {
LABEL_71:
        sub_4FCE30(
          SHIDWORD(a4),
          "Mismatched if/then/else block.",
          SHIDWORD(v39),
          v40,
          v41,
          v42,
          v43,
          v44,
          (int)v45,
          v46,
          ArgList[0]);
        goto LABEL_10;
      }
      *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v33;
      v34 = v44;
      a5[0x103] += 2;
      *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v34;
      a5[0x103] += 2;
      LODWORD(v39) = v44;
      memcpy((char *)a5 + a5[0x103] + 0x20C, v45, v39);
      v28 = v44;
LABEL_58:
      a5[0x103] += v28;
      goto LABEL_59;
    case 0x17:
      v35 = sub_4FD430((int)v10, st5_0, st6_0, v8, SHIDWORD(a4), a5);
      if ( v35 == 0xFFFFFFFF )
        goto LABEL_71;
      *(_WORD *)((char *)a5 + a5[0x103] + 0x20C) = v35;
      a5[0x103] += 2;
      goto LABEL_59;
    case 0x19:
    case 0x1C:
    case 0x1D:
    case 0x1E:
      goto LABEL_59;
    default:
      if ( (unsigned int)(v9 - 0x100) > 0x82 )
      {
        if ( (unsigned int)(v9 - 0x1000) > 0x170 )
        {
LABEL_80:
          sub_4FCE30(
            SHIDWORD(a4),
            "Unknown function code %d.",
            v9,
            SHIDWORD(v39),
            v40,
            v41,
            v42,
            v43,
            v44,
            (int)v45,
            v46);
          goto LABEL_10;
        }
        v36 = 0x28 * (v9 - 0x1000) + 0xB0C8C0;
      }
      else
      {
        v36 = 0x28 * (v9 - 0x100) + 0xB0B420;
      }
      if ( !v36 )
        goto LABEL_80;
      if ( *(_BYTE *)(v36 + 0x10) )
      {
        if ( *(_BYTE *)(HIDWORD(a4) + 0x38) && !a5[0x105] )
        {
          sub_4FCE30(
            SHIDWORD(a4),
            "Reference function requires explicit reference in quest script.",
            SHIDWORD(v39),
            v40,
            v41,
            v42,
            v43,
            v44,
            (int)v45,
            v46,
            ArgList[0]);
          goto LABEL_10;
        }
        if ( a5[0x105] )
        {
          v45 = (void *)sub_4FCD20((_DWORD *)HIDWORD(a4), a5[0x105]);
          if ( !OblivionDynamicCast(
                  *((void **)v45 + 2),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                  0)
            && !*((_DWORD *)v45 + 3) )
          {
            sub_4FCE30(
              SHIDWORD(a4),
              "Syntax error.  Invalid reference '%s' (only object references and reference variables are allowed in this context).",
              *(_DWORD *)v45,
              SHIDWORD(v39),
              v40,
              v41,
              v42,
              v43,
              v44,
              (int)v45,
              v46);
            goto LABEL_10;
          }
        }
      }
      v37 = *(_DWORD *)(v36 + 0x14);
      if ( v37
        && !(*(unsigned __int8 (__cdecl **)(_DWORD, int, _DWORD *, _DWORD))(v36 + 0x1C))(
              *(unsigned __int16 *)(v36 + 0x12),
              v37,
              a5,
              HIDWORD(a4)) )
      {
        goto LABEL_10;
      }
LABEL_59:
      v29 = a5[0x104];
      if ( v29 < 0x12 || v29 > 0x14 && v29 != 0x1F )
      {
        v30 = *(_DWORD *)(HIDWORD(a4) + 0x24);
        if ( (unsigned int)(v30 + a5[0x103] + 0xA) >= 0x4000 )
        {
          sub_4FCE30(
            SHIDWORD(a4),
            "MAX_SCRIPT_SIZE exceeded.\r\nCompiled script not saved!",
            SHIDWORD(v39),
            v40,
            v41,
            v42,
            v43,
            v44,
            (int)v45,
            v46,
            ArgList[0]);
          goto LABEL_10;
        }
        if ( a5[0x105] )
        {
          *(_WORD *)(v30 + *(_DWORD *)(HIDWORD(a4) + 0x20)) = 0x1C;
          v38 = *(_DWORD *)(HIDWORD(a4) + 0x20);
          *(_DWORD *)(HIDWORD(a4) + 0x24) += 2;
          *(_WORD *)(*(_DWORD *)(HIDWORD(a4) + 0x24) + v38) = *((_WORD *)a5 + 0x20A);
          *(_DWORD *)(HIDWORD(a4) + 0x24) += 2;
        }
        *(_WORD *)(*(_DWORD *)(HIDWORD(a4) + 0x24) + *(_DWORD *)(HIDWORD(a4) + 0x20)) = *((_WORD *)a5 + 0x208);
        *(_DWORD *)(HIDWORD(a4) + 0x24) += 2;
        *(_WORD *)(*(_DWORD *)(HIDWORD(a4) + 0x24) + *(_DWORD *)(HIDWORD(a4) + 0x20)) = *((_WORD *)a5 + 0x206);
        *(_DWORD *)(HIDWORD(a4) + 0x24) += 2;
        LODWORD(v39) = a5[0x103];
        memcpy((void *)(*(_DWORD *)(HIDWORD(a4) + 0x24) + *(_DWORD *)(HIDWORD(a4) + 0x20)), a5 + 0x83, v39);
        *(_DWORD *)(HIDWORD(a4) + 0x24) += a5[0x103];
      }
      v60 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v53);
      return 1;
  }
}
