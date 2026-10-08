// TES4 authoritative default command parser. It compiles a command's ParamInfo list into script bytecode consumed later by Script_ExtractArgs.
char __cdecl CommandDefaultParse(UInt32 a1, ParamInfo *a2, ScriptLineBuffer *a3, char *a4)
{
  double v4; // st5
  double v5; // st6
  double v6; // st7
  UInt8 *v7; // ecx
  int v8; // eax
  char v9; // bl
  UInt32 *p_typeID; // ebp
  unsigned int v11; // edi
  UInt8 v12; // cl
  int v13; // edx
  UInt32 v14; // eax
  char result; // al
  TESObjectREFR *v16; // ecx
  TESObjectCELL *v17; // eax
  char v18; // al
  UInt32 v19; // ebp
  int v20; // edi
  unsigned int v21; // eax
  UInt8 v22; // al
  int v23; // ebp
  unsigned __int8 **v24; // edi
  int v25; // edi
  int v26; // eax
  size_t v27; // [esp-4h] [ebp-244h]
  int v28; // [esp+4h] [ebp-23Ch]
  int v29; // [esp+8h] [ebp-238h]
  int v30; // [esp+Ch] [ebp-234h]
  int v31; // [esp+10h] [ebp-230h]
  int v32; // [esp+1Ch] [ebp-224h]
  UInt8 *v33; // [esp+20h] [ebp-220h]
  char Src[512]; // [esp+28h] [ebp-218h] BYREF
  int v35; // [esp+228h] [ebp-18h]
  UInt8 v36; // [esp+22Ch] [ebp-14h]
  int v37; // [esp+230h] [ebp-10h]
  int v38; // [esp+234h] [ebp-Ch]
  void *v39; // [esp+238h] [ebp-8h]

  v7 = &a3->dataBuf[a3->dataOffset]; /*0x4fde6c*/
  a3->lineOffset = 0; /*0x4fde7b*/
  *(_WORD *)v7 = a1; /*0x4fde81*/
  a3->dataOffset += 2; /*0x4fde84*/
  v33 = v7; /*0x4fde91*/
  v31 = 0; /*0x4fde95*/
  if ( !(_WORD)a1 ) /*0x4fde9d*/
  {
LABEL_164:
    if ( a3->lineOffset < a3->paramTextLen ) /*0x4fec62*/
    {
      sub_4FCE30( /*0x4fec7e*/
        (int)a4,
        "Expected end of line.\r\nCompiled script not saved!",
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4,
        v32);
      return 0; /*0x4fec88*/
    }
    return 1; /*0x4fecdc*/
  }
  v8 = 0; /*0x4fdea3*/
  while ( 1 ) /*0x4fdeb0*/
  {
    v9 = *(_BYTE *)(8 * a2[v8].typeID + 0xB0A54C); /*0x4fdeb0*/
    p_typeID = &a2[v8].typeID; /*0x4fdeb9*/
    LOBYTE(v32) = v9; /*0x4fdec8*/
    v35 = 0; /*0x4fdecc*/
    v38 = 0; /*0x4fded3*/
    v36 = 0; /*0x4fdeda*/
    v37 = 0; /*0x4fdee2*/
    v39 = 0; /*0x4fdee9*/
    _memset((int)Src, 0, sizeof(Src)); /*0x4fdef0*/
    v11 = sub_4FD7C0(v4, v5, v6, a4, Src, (int)a3->paramText, (int *)&a3->lineOffset, v9, 0); /*0x4fdf15*/
    if ( !v11 ) /*0x4fdf1c*/
    {
      if ( !LOBYTE(a2[(__int16)v31].isOptional) ) /*0x4fec98*/
      {
        sub_4FCE30( /*0x4fecaf*/
          (int)a4,
          "Missing parameter %s.\r\nCompiled script not saved!",
          (int)a2[(__int16)v31].typeStr,
          SHIDWORD(v27),
          v28,
          v29,
          v30,
          v31,
          (int)a2,
          (int)a4,
          v32);
        return 0; /*0x4fecb9*/
      }
      *(_WORD *)v33 = v31; /*0x4fecbf*/
      return 1; /*0x4fecbf*/
    }
    v12 = v36; /*0x4fdf24*/
    v13 = v35; /*0x4fdf2b*/
    if ( !v9 && (v35 || v36) ) /*0x4fdf3e*/
    {
      sub_4FCE30( /*0x4fecf7*/
        (int)a4,
        "Parameter %s may not be a variable.\r\nCompiled script not saved!",
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4,
        v32);
      return 0; /*0x4fed01*/
    }
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) ) /*0x4fdf47*/
    {
      if ( !sub_4FD0A0(a4, v4, v5, v6, Src, 0, 0) || (v13 = v35) == 0 ) /*0x4fdf76*/
      {
        sub_4FCE30( /*0x4fed1e*/
          (int)a4,
          "Item '%s' not found for parameter %s.\r\nCompiled script not saved!",
          (int)Src,
          (int)a2[(__int16)v31].typeStr,
          SHIDWORD(v27),
          v28,
          v29,
          v30,
          v31,
          (int)a2,
          (int)a4);
        return 0; /*0x4fed28*/
      }
      v12 = v36; /*0x4fdf7c*/
    }
    v14 = *p_typeID; /*0x4fdf83*/
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) ) /*0x4fdf86*/
      break; /*0x4fdf86*/
    switch ( v14 ) /*0x4fe89b*/
    {
      case 0u: /*0x4fe89b*/
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v11; /*0x4fe8a8*/
        a3->dataOffset += 2; /*0x4fe8b0*/
        LODWORD(v27) = v11; /*0x4fe8bd*/
        memcpy(&a3->dataBuf[a3->dataOffset], Src, v27); /*0x4fe8cb*/
        a3->dataOffset += v11; /*0x4fe8d3*/
        goto LABEL_163; /*0x4fe8d9*/
      case 1u: /*0x4fe89b*/
      case 2u: /*0x4fe89b*/
      case 0x17u: /*0x4fe89b*/
        if ( v13 ) /*0x4fe8e0*/
        {
          if ( v12 == 0x47 ) /*0x4fe8e5*/
            a3->dataBuf[a3->dataOffset] = 0x47; /*0x4fe8ed*/
          else
            a3->dataBuf[a3->dataOffset] = 0x72; /*0x4fe8fd*/
          *(_WORD *)&a3->dataBuf[++a3->dataOffset] = v35; /*0x4fe91a*/
          a3->dataOffset += 2; /*0x4fe922*/
          v12 = v36; /*0x4fe929*/
        }
        if ( v12 == 0x47 ) /*0x4fe933*/
          goto LABEL_163; /*0x4fe933*/
        if ( !v38 ) /*0x4fe941*/
        {
          v19 = *p_typeID; /*0x4fe972*/
          if ( v19 == 1 || v19 == 0x17 ) /*0x4fe981*/
          {
            if ( sub_47D550(Src) ) /*0x4fe9d7*/
            {
              a3->dataBuf[a3->dataOffset++] = 0x6E; /*0x4fe9f1*/
              *(_DWORD *)&a3->dataBuf[a3->dataOffset] = atol(Src); /*0x4fea0e*/
              a3->dataOffset += 4; /*0x4fea15*/
              goto LABEL_163; /*0x4fea1c*/
            }
            LODWORD(v27) = a2[(__int16)v31].typeStr; /*0x4fedc9*/
          }
          else
          {
            if ( sub_47D5B0(Src) ) /*0x4fe988*/
            {
              a3->dataBuf[a3->dataOffset++] = 0x7A; /*0x4fe9a2*/
              v6 = atof(Src); /*0x4fe9b1*/
              *(double *)&a3->dataBuf[a3->dataOffset] = v6; /*0x4fe9bc*/
              a3->dataOffset += 8; /*0x4fe9c6*/
              goto LABEL_163; /*0x4fe9cd*/
            }
            LODWORD(v27) = a2[(__int16)v31].typeStr; /*0x4fedb2*/
          }
          sub_4FCE30( /*0x4fedd5*/
            (int)a4,
            "Unknown variable '%s' for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            v27,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          return 0; /*0x4feddf*/
        }
        a3->dataBuf[a3->dataOffset++] = v12; /*0x4fe949*/
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v38; /*0x4fe965*/
LABEL_162:
        a3->dataOffset += 2; /*0x4fec37*/
LABEL_163:
        v8 = (__int16)++v31; /*0x4fec49*/
        if ( (__int16)v31 >= (int)(unsigned __int16)a1 ) /*0x4fec50*/
          goto LABEL_164; /*0x4fec50*/
        break; /*0x4fec50*/
      case 5u: /*0x4fe89b*/
        v20 = 0; /*0x4fea21*/
        while ( CRT_StricmpLocaleDispatch(*(unsigned __int8 **)(4 * v20 + 0xB0A1A8), (unsigned __int8 *)Src) ) /*0x4fea3a*/
        {
          if ( ++v20 >= 0x48 ) /*0x4fea42*/
          {
            sub_4FCE30( /*0x4fea5f*/
              (int)a4,
              "Invalid actor value '%s' for parameter %s.\r\nCompiled script not saved!",
              (int)Src,
              (int)a2[(__int16)v31].typeStr,
              SHIDWORD(v27),
              v28,
              v29,
              v30,
              v31,
              (int)a2,
              (int)a4);
            return 0; /*0x4fea69*/
          }
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v20; /*0x4fea74*/
        goto LABEL_162; /*0x4fea7c*/
      case 8u: /*0x4fe89b*/
        v22 = toupper(Src[0]); /*0x4feac5*/
        if ( v22 != 0x58 && v22 != 0x59 && v22 != 0x5A ) /*0x4fead7*/
        {
          sub_4FCE30( /*0x4fee52*/
            (int)a4,
            "Axis (X,Y,Z) required for parameter %s.\r\nCompiled script not saved!",
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4,
            v32);
          return 0; /*0x4fee5c*/
        }
        a3->dataBuf[a3->dataOffset++] = v22; /*0x4feae3*/
        goto LABEL_163; /*0x4feaf1*/
      case 0xAu: /*0x4fe89b*/
        v23 = 0; /*0x4feb55*/
        v24 = (unsigned __int8 **)animGroupInfos_ptr;// Default command parser hit in animation console-command search set; parses command args before handlers such as PlayGroup/PickIdle/LoopGroup. /*0x4feb57*/
        while ( CRT_StricmpLocaleDispatch((unsigned __int8 *)Src, *v24) ) /*0x4feb72*/
        {
          v24 += 9; /*0x4feb74*/
          ++v23; /*0x4feb77*/
          if ( (int)v24 >= (int)off_B108EC ) /*0x4feb80*/
            goto LABEL_153; /*0x4feb80*/
        }
        if ( v23 == 0xFF ) /*0x4febb6*/
        {
LABEL_153:
          sub_4FCE30( /*0x4feb82*/
            (int)a4,
            "Animation group \"%s\" not found for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          return 0; /*0x4febab*/
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v23; /*0x4febbe*/
        goto LABEL_162; /*0x4febc6*/
      case 0x12u: /*0x4fe89b*/
        if ( !CRT_StricmpLocaleDispatch((unsigned __int8 *)Src, *(unsigned __int8 **)off_B10BC4) ) /*0x4feb02*/
        {
          *(_WORD *)&a3->dataBuf[a3->dataOffset] = 0; /*0x4feb14*/
        }
        else
        {
          if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)Src, (unsigned __int8 *)off_B10BC8) ) /*0x4feb2d*/
          {
            sub_4FCE30( /*0x4fee77*/
              (int)a4,
              "Sex (Male, Female) required for parameter %s.\r\nCompiled script not saved!",
              (int)a2[(__int16)v31].typeStr,
              SHIDWORD(v27),
              v28,
              v29,
              v30,
              v31,
              (int)a2,
              (int)a4,
              v32);
            return 0; /*0x4fee81*/
          }
          *(_WORD *)&a3->dataBuf[a3->dataOffset] = 1; /*0x4feb48*/
        }
        goto LABEL_162; /*0x4feb1c*/
      case 0x1Cu: /*0x4fe89b*/
        if ( !sub_47D550(Src) || (v21 = atol(Src), v21 > 5) ) /*0x4feaa6*/
        {
          sub_4FCE30( /*0x4fee01*/
            (int)a4,
            "Invalid crime type '%s' for parameter %s.  Crime type must be a numeric value from 0-%d.\r\n"
            "Compiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            5,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2);
          return 0; /*0x4fee0b*/
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v21; /*0x4feab2*/
        goto LABEL_162; /*0x4feaba*/
      case 0x21u: /*0x4fe89b*/
        v25 = 0; /*0x4febc8*/
        while ( CRT_StricmpLocaleDispatch((unsigned __int8 *)Src, *(unsigned __int8 **)(4 * v25 + 0xB081D0)) ) /*0x4febe7*/
        {
          if ( ++v25 >= 0x24 ) /*0x4febef*/
            goto LABEL_159; /*0x4febef*/
        }
        v26 = (unsigned __int8)byte_B081AC[v25]; /*0x4fec1b*/
        if ( !(_BYTE)v26 ) /*0x4fec23*/
        {
LABEL_159:
          sub_4FCE30( /*0x4febf1*/
            (int)a4,
            "Form Type \"%s\" not found for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          return 0; /*0x4fec16*/
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = (unsigned __int8)v26; /*0x4fec2f*/
        goto LABEL_162; /*0x4fec2f*/
      default:
        PrintError("Param type '%d' unimplemented in ScriptCompiler::StandardCompile.", a2[(__int16)v31].typeID); /*0x4fee9c*/
        return 0; /*0x4feea4*/
    }
  }
  switch ( v14 ) /*0x4fdfa0*/
  {
    case 3u: /*0x4fdfa0*/
      if ( v38 || v39 && TESContainer_IsInventoryItemType(*((_BYTE *)v39 + 4)) ) /*0x4fdfc5*/
        goto LABEL_117; /*0x4fdfcf*/
      sub_4FCE30( /*0x4fdff0*/
        (int)a4,
        "Invalid inventory object '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fdff8*/
      break; /*0x4fdffa*/
    case 4u: /*0x4fdfa0*/
    case 6u: /*0x4fdfa0*/
    case 0x18u: /*0x4fdfa0*/
    case 0x1Au: /*0x4fdfa0*/
      if ( v38 ) /*0x4fe007*/
        goto LABEL_117; /*0x4fe007*/
      v16 = (TESObjectREFR *)OblivionDynamicCast( /*0x4fe028*/
                               v39,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      if ( v16 ) /*0x4fe02f*/
      {
        if ( *p_typeID == 6 ) /*0x4fe03b*/
        {
          if ( v16->vtbl->IsActor(v16) ) /*0x4fe0ce*/
            goto LABEL_117; /*0x4fe0d2*/
          sub_4FCE30( /*0x4fe0f3*/
            (int)a4,
            "Invalid actor '%s' for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          result = 0; /*0x4fe0fb*/
        }
        else if ( *p_typeID == 0x18 ) /*0x4fe044*/
        {
          if ( v16->vtbl->GetBaseForm(v16) == (TESForm *)MEMORY[0xB35EA8] ) /*0x4fe096*/
            goto LABEL_117; /*0x4fe096*/
          sub_4FCE30( /*0x4fe0b7*/
            (int)a4,
            "Invalid map marker '%s' for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          result = 0; /*0x4fe0bf*/
        }
        else
        {
          if ( *p_typeID != 0x1A || TESObjectREFR_GetContainer(v16) ) /*0x4fe04f*/
            goto LABEL_117; /*0x4fe056*/
          sub_4FCE30( /*0x4fe077*/
            (int)a4,
            "Invalid container reference '%s' for parameter %s.\r\nCompiled script not saved!",
            (int)Src,
            (int)a2[(__int16)v31].typeStr,
            SHIDWORD(v27),
            v28,
            v29,
            v30,
            v31,
            (int)a2,
            (int)a4);
          result = 0; /*0x4fe07f*/
        }
      }
      else
      {
        sub_4FCE30( /*0x4fed45*/
          (int)a4,
          "Invalid object reference '%s' for parameter %s.\r\nCompiled script not saved!",
          (int)Src,
          (int)a2[(__int16)v31].typeStr,
          SHIDWORD(v27),
          v28,
          v29,
          v30,
          v31,
          (int)a2,
          (int)a4);
        result = 0; /*0x4fed4d*/
      }
      break; /*0x4fe081*/
    case 7u: /*0x4fdfa0*/
      if ( v38 /*0x4fe14e*/
        || v39
        && (OblivionDynamicCast(
              v39,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0)
         || OblivionDynamicCast(
              v39,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectBOOK `RTTI Type Descriptor',
              0)) )
      {
        goto LABEL_117; /*0x4fe158*/
      }
      sub_4FCE30( /*0x4fe179*/
        (int)a4,
        "Invalid spell item '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe181*/
      break; /*0x4fe183*/
    case 9u: /*0x4fdfa0*/
      v17 = (TESObjectCELL *)OblivionDynamicCast( /*0x4fe19e*/
                               v39,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectCELL `RTTI Type Descriptor',
                               0);
      if ( v38 || v17 && TESObjectCELL_IsInterior(v17) ) /*0x4fe1ba*/
        goto LABEL_117; /*0x4fe1c1*/
      sub_4FCE30( /*0x4fe1e2*/
        (int)a4,
        "Invalid interior cell '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe1ea*/
      break; /*0x4fe1ec*/
    case 0xBu: /*0x4fdfa0*/
      if ( v38 /*0x4fe27b*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &MagicItem `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe285*/
      }
      sub_4FCE30( /*0x4fe2a6*/
        (int)a4,
        "Invalid magic item '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe2ae*/
      break; /*0x4fe2b0*/
    case 0xCu: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0xA ) /*0x4fe334*/
        goto LABEL_117; /*0x4fe334*/
      sub_4FCE30( /*0x4fe355*/
        (int)a4,
        "Invalid sound '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe35d*/
      break; /*0x4fe35f*/
    case 0xDu: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x39 ) /*0x4fe381*/
        goto LABEL_117; /*0x4fe381*/
      sub_4FCE30( /*0x4fe3a2*/
        (int)a4,
        "Invalid topic '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe3aa*/
      break; /*0x4fe3ac*/
    case 0xEu: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x3B ) /*0x4fe3ce*/
        goto LABEL_117; /*0x4fe3ce*/
      sub_4FCE30( /*0x4fe3ef*/
        (int)a4,
        "Invalid info '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe3f7*/
      break; /*0x4fe3f9*/
    case 0xFu: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 9 ) /*0x4fe41b*/
        goto LABEL_117; /*0x4fe41b*/
      sub_4FCE30( /*0x4fe43c*/
        (int)a4,
        "Invalid race '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe444*/
      break; /*0x4fe446*/
    case 0x10u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 5 ) /*0x4fe468*/
        goto LABEL_117; /*0x4fe468*/
      sub_4FCE30( /*0x4fe489*/
        (int)a4,
        "Invalid class '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe491*/
      break; /*0x4fe493*/
    case 0x11u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 6 ) /*0x4fe502*/
        goto LABEL_117; /*0x4fe502*/
      sub_4FCE30( /*0x4fe523*/
        (int)a4,
        "Invalid faction '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe52b*/
      break; /*0x4fe52d*/
    case 0x13u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 4 ) /*0x4fe54f*/
        goto LABEL_117; /*0x4fe54f*/
      sub_4FCE30( /*0x4fe570*/
        (int)a4,
        "Invalid global '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe578*/
      break; /*0x4fe57a*/
    case 0x14u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x20 ) /*0x4fe59c*/
        goto LABEL_117; /*0x4fe59c*/
      sub_4FCE30( /*0x4fe5bd*/
        (int)a4,
        "Invalid furniture object '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe5c5*/
      break; /*0x4fe5c7*/
    case 0x15u: /*0x4fdfa0*/
      if ( v38 /*0x4fe5f4*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObject `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe5fe*/
      }
      sub_4FCE30( /*0x4fe61f*/
        (int)a4,
        "Invalid object '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe627*/
      break; /*0x4fe629*/
    case 0x19u: /*0x4fdfa0*/
      if ( v38 /*0x4fe656*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESActorBase `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe660*/
      }
      sub_4FCE30( /*0x4fe681*/
        (int)a4,
        "Invalid actor base '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe689*/
      break; /*0x4fe68b*/
    case 0x1Bu: /*0x4fdfa0*/
      if ( v38 /*0x4fe219*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESWorldSpace `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe223*/
      }
      sub_4FCE30( /*0x4fe244*/
        (int)a4,
        "Invalid worldspace '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe24c*/
      break; /*0x4fe24e*/
    case 0x1Du: /*0x4fdfa0*/
      if ( v38 /*0x4fe6b8*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESPackage `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe6c2*/
      }
      sub_4FCE30( /*0x4fe6e3*/
        (int)a4,
        "Invalid package '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe6eb*/
      break; /*0x4fe6ed*/
    case 0x1Eu: /*0x4fdfa0*/
      if ( v38 /*0x4fe71a*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESCombatStyle `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe724*/
      }
      sub_4FCE30( /*0x4fe745*/
        (int)a4,
        "Invalid combat style '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe74d*/
      break; /*0x4fe74f*/
    case 0x1Fu: /*0x4fdfa0*/
      if ( v38 /*0x4fe2dd*/
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &EffectSetting `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117; /*0x4fe2e7*/
      }
      sub_4FCE30( /*0x4fe308*/
        (int)a4,
        "Invalid effect setting '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe310*/
      break; /*0x4fe312*/
    case 0x20u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x11 ) /*0x4fe4b5*/
        goto LABEL_117; /*0x4fe4b5*/
      sub_4FCE30( /*0x4fe4d6*/
        (int)a4,
        "Invalid birthsign '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe4de*/
      break; /*0x4fe4e0*/
    case 0x22u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x2D ) /*0x4fe771*/
        goto LABEL_117; /*0x4fe771*/
      sub_4FCE30( /*0x4fe792*/
        (int)a4,
        "Invalid weather '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe79a*/
      break; /*0x4fe79c*/
    case 0x23u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x23 ) /*0x4fe7be*/
        goto LABEL_117; /*0x4fe7be*/
      sub_4FCE30( /*0x4fe7df*/
        (int)a4,
        "Invalid NPC '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe7e7*/
      break; /*0x4fe7e9*/
    case 0x24u: /*0x4fdfa0*/
      if ( v38 ) /*0x4fe7f6*/
        goto LABEL_117; /*0x4fe7f6*/
      if ( v39 ) /*0x4fe801*/
      {
        v18 = *((_BYTE *)v39 + 4); /*0x4fe803*/
        if ( v18 == 0x23 || v18 == 6 ) /*0x4fe80c*/
          goto LABEL_117; /*0x4fe80c*/
      }
      sub_4FCE30( /*0x4fe829*/
        (int)a4,
        "Invalid owner '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fe831*/
      break; /*0x4fe833*/
    case 0x25u: /*0x4fdfa0*/
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x43 ) /*0x4fe855*/
      {
LABEL_117:
        a3->dataBuf[a3->dataOffset++] = 0x72; /*0x4fe85b*/
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v35; /*0x4fe87e*/
        goto LABEL_162; /*0x4fe886*/
      }
      sub_4FCE30( /*0x4fed6f*/
        (int)a4,
        "Invalid Effect Shader '%s' for parameter %s.\r\nCompiled script not saved!",
        (int)Src,
        (int)a2[(__int16)v31].typeStr,
        SHIDWORD(v27),
        v28,
        v29,
        v30,
        v31,
        (int)a2,
        (int)a4);
      result = 0; /*0x4fed77*/
      break; /*0x4fed79*/
    default:
      PrintError( /*0x4fed94*/
        "Param type '%d' (referenced object) unimplemented in ScriptCompiler::StandardCompile.",
        a2[(__int16)v31].typeID);
      result = 0; /*0x4fed9c*/
      break; /*0x4fed9e*/
  }
  return result; /*0x4fecc4*/
}
