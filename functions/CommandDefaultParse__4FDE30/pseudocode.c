char __cdecl CommandDefaultParse(UInt32 a1, ParamInfo *a2, ScriptLineBuffer *a3, char *a4)
{
  double v4; // st5
  double v5; // st6
  UInt8 *v6; // ecx
  int v7; // eax
  char v8; // bl
  UInt32 *p_typeID; // ebp
  double v10; // st7
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
  char **v24; // edi
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

  v6 = &a3->dataBuf[a3->dataOffset];
  a3->lineOffset = 0;
  *(_WORD *)v6 = a1;
  a3->dataOffset += 2;
  v33 = v6;
  v31 = 0;
  if ( !(_WORD)a1 )
  {
LABEL_164:
    if ( a3->lineOffset < a3->paramTextLen )
    {
      sub_4FCE30(
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
      return 0;
    }
    return 1;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = *(_BYTE *)(8 * a2[v7].typeID + 0xB0A54C);
    p_typeID = &a2[v7].typeID;
    LOBYTE(v32) = v8;
    v35 = 0;
    v38 = 0;
    v36 = 0;
    v37 = 0;
    v39 = 0;
    v10 = _memset(Src, 0, sizeof(Src));
    v11 = sub_4FD7C0(v4, v5, v10, a4, Src, (int)a3->paramText, (int *)&a3->lineOffset, v8, 0);
    if ( !v11 )
    {
      if ( !LOBYTE(a2[(__int16)v31].isOptional) )
      {
        sub_4FCE30(
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
        return 0;
      }
      *(_WORD *)v33 = v31;
      return 1;
    }
    v12 = v36;
    v13 = v35;
    if ( !v8 && (v35 || v36) )
    {
      sub_4FCE30(
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
      return 0;
    }
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) )
    {
      if ( !sub_4FD0A0(a4, v4, v5, v10, Src, 0, 0) || (v13 = v35) == 0 )
      {
        sub_4FCE30(
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
        return 0;
      }
      v12 = v36;
    }
    v14 = *p_typeID;
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) )
      break;
    switch ( v14 )
    {
      case 0u:
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v11;
        a3->dataOffset += 2;
        LODWORD(v27) = v11;
        memcpy(&a3->dataBuf[a3->dataOffset], Src, v27);
        a3->dataOffset += v11;
        goto LABEL_163;
      case 1u:
      case 2u:
      case 0x17u:
        if ( v13 )
        {
          if ( v12 == 0x47 )
            a3->dataBuf[a3->dataOffset] = 0x47;
          else
            a3->dataBuf[a3->dataOffset] = 0x72;
          *(_WORD *)&a3->dataBuf[++a3->dataOffset] = v35;
          a3->dataOffset += 2;
          v12 = v36;
        }
        if ( v12 == 0x47 )
          goto LABEL_163;
        if ( !v38 )
        {
          v19 = *p_typeID;
          if ( v19 == 1 || v19 == 0x17 )
          {
            if ( sub_47D550(Src) )
            {
              a3->dataBuf[a3->dataOffset++] = 0x6E;
              *(_DWORD *)&a3->dataBuf[a3->dataOffset] = atol(Src);
              a3->dataOffset += 4;
              goto LABEL_163;
            }
            LODWORD(v27) = a2[(__int16)v31].typeStr;
          }
          else
          {
            if ( sub_47D5B0(Src) )
            {
              a3->dataBuf[a3->dataOffset++] = 0x7A;
              *(double *)&a3->dataBuf[a3->dataOffset] = atof(Src);
              a3->dataOffset += 8;
              goto LABEL_163;
            }
            LODWORD(v27) = a2[(__int16)v31].typeStr;
          }
          sub_4FCE30(
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
          return 0;
        }
        a3->dataBuf[a3->dataOffset++] = v12;
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v38;
LABEL_162:
        a3->dataOffset += 2;
LABEL_163:
        v7 = (__int16)++v31;
        if ( (__int16)v31 >= (int)(unsigned __int16)a1 )
          goto LABEL_164;
        break;
      case 5u:
        v20 = 0;
        while ( _strcmp(*(char **)(4 * v20 + 0xB0A1A8), Src) )
        {
          if ( ++v20 >= 0x48 )
          {
            sub_4FCE30(
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
            return 0;
          }
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v20;
        goto LABEL_162;
      case 8u:
        v22 = toupper(Src[0]);
        if ( v22 != 0x58 && v22 != 0x59 && v22 != 0x5A )
        {
          sub_4FCE30(
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
          return 0;
        }
        a3->dataBuf[a3->dataOffset++] = v22;
        goto LABEL_163;
      case 0xAu:
        v23 = 0;
        v24 = (char **)animGroupInfos_ptr;
        while ( _strcmp(Src, *v24) )
        {
          v24 += 9;
          ++v23;
          if ( (int)v24 >= (int)off_B108EC )
            goto LABEL_153;
        }
        if ( v23 == 0xFF )
        {
LABEL_153:
          sub_4FCE30(
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
          return 0;
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v23;
        goto LABEL_162;
      case 0x12u:
        if ( !_strcmp(Src, *(char **)off_B10BC4) )
        {
          *(_WORD *)&a3->dataBuf[a3->dataOffset] = 0;
        }
        else
        {
          if ( _strcmp(Src, off_B10BC8) )
          {
            sub_4FCE30(
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
            return 0;
          }
          *(_WORD *)&a3->dataBuf[a3->dataOffset] = 1;
        }
        goto LABEL_162;
      case 0x1Cu:
        if ( !sub_47D550(Src) || (v21 = atol(Src), v21 > 5) )
        {
          sub_4FCE30(
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
          return 0;
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v21;
        goto LABEL_162;
      case 0x21u:
        v25 = 0;
        while ( _strcmp(Src, *(char **)(4 * v25 + 0xB081D0)) )
        {
          if ( ++v25 >= 0x24 )
            goto LABEL_159;
        }
        v26 = (unsigned __int8)byte_B081AC[v25];
        if ( !(_BYTE)v26 )
        {
LABEL_159:
          sub_4FCE30(
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
          return 0;
        }
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = (unsigned __int8)v26;
        goto LABEL_162;
      default:
        PrintError("Param type '%d' unimplemented in ScriptCompiler::StandardCompile.", a2[(__int16)v31].typeID);
        return 0;
    }
  }
  switch ( v14 )
  {
    case 3u:
      if ( v38 || v39 && TESContainer_IsInventoryItemType(*((_BYTE *)v39 + 4)) )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 4u:
    case 6u:
    case 0x18u:
    case 0x1Au:
      if ( v38 )
        goto LABEL_117;
      v16 = (TESObjectREFR *)OblivionDynamicCast(
                               v39,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      if ( v16 )
      {
        if ( *p_typeID == 6 )
        {
          if ( v16->vtbl->IsActor(v16) )
            goto LABEL_117;
          sub_4FCE30(
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
          result = 0;
        }
        else if ( *p_typeID == 0x18 )
        {
          if ( v16->vtbl->GetBaseForm(v16) == (TESForm *)TESDataHandler_g_MapMarker )
            goto LABEL_117;
          sub_4FCE30(
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
          result = 0;
        }
        else
        {
          if ( *p_typeID != 0x1A || TESObjectREFR_GetContainer(v16) )
            goto LABEL_117;
          sub_4FCE30(
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
          result = 0;
        }
      }
      else
      {
        sub_4FCE30(
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
        result = 0;
      }
      break;
    case 7u:
      if ( v38
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
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 9u:
      v17 = (TESObjectCELL *)OblivionDynamicCast(
                               v39,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectCELL `RTTI Type Descriptor',
                               0);
      if ( v38 || v17 && TESObjectCELL_IsInterior(v17) )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0xBu:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &MagicItem `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0xCu:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0xA )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0xDu:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x39 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0xEu:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x3B )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0xFu:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 9 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x10u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 5 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x11u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 6 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x13u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 4 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x14u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x20 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x15u:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObject `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x19u:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESActorBase `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x1Bu:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESWorldSpace `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x1Du:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESPackage `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x1Eu:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESCombatStyle `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x1Fu:
      if ( v38
        || v39
        && OblivionDynamicCast(
             v39,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &EffectSetting `RTTI Type Descriptor',
             0) )
      {
        goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x20u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x11 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x22u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x2D )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x23u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x23 )
        goto LABEL_117;
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x24u:
      if ( v38 )
        goto LABEL_117;
      if ( v39 )
      {
        v18 = *((_BYTE *)v39 + 4);
        if ( v18 == 0x23 || v18 == 6 )
          goto LABEL_117;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    case 0x25u:
      if ( v38 || v39 && *((_BYTE *)v39 + 4) == 0x43 )
      {
LABEL_117:
        a3->dataBuf[a3->dataOffset++] = 0x72;
        *(_WORD *)&a3->dataBuf[a3->dataOffset] = v35;
        goto LABEL_162;
      }
      sub_4FCE30(
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
      result = 0;
      break;
    default:
      PrintError(
        "Param type '%d' (referenced object) unimplemented in ScriptCompiler::StandardCompile.",
        a2[(__int16)v31].typeID);
      result = 0;
      break;
  }
  return result;
}
