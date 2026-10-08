// TES4 authoritative script instruction executor. Handles expression/control opcodes directly and dispatches ordinary CommandInfo execute callbacks for vanilla script commands.
bool __thiscall ScriptRunner_ExecuteCompiledInstruction(
        ScriptRunner *a1,
        Script *a5,
        int ArgList,
        BSStringT *a4,
        int a8,
        int a9,
        _DWORD *a10,
        int a11,
        int a12,
        char a13)
{
  double v10; // st7
  _BYTE *data; // edi
  UInt32 v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  UInt32 v16; // edx
  unsigned __int8 (__cdecl *v17)(char *, _BYTE *, BSStringT *, UInt32, Script *, ScriptEventList *, BSStringT *, UInt32 *); // ecx
  const char *v18; // eax
  const char *v20; // eax
  char v21; // bl
  ScriptEventList *eventList; // edx
  int v23; // eax
  __int16 v24; // cx
  RefVariable *RefVariableByIndex; // eax
  TESForm *form; // eax
  TESObjectREFR *v27; // eax
  TESQuest *v28; // eax
  int v29; // edx
  __int16 v30; // bx
  const char *v31; // eax
  TESForm *v32; // eax
  double v33; // st7
  int *v34; // edi
  int v35; // ebx
  const char *v36; // eax
  const char *v37; // eax
  TESObjectREFR *m_data; // esi
  UInt32 v39; // eax
  int v40; // ecx
  char *v41; // edx
  const char *v42; // eax
  UInt32 v43; // ecx
  __int16 v44; // cx
  UInt32 v45; // eax
  bool v46; // zf
  UInt32 *v47; // esi
  UInt32 v48; // eax
  CommandInfo *v49; // eax
  const char *(__thiscall *GetEditorName)(TESForm *); // eax
  const char *v51; // eax
  char *v52; // esi
  char *params; // ecx
  const char *(__thiscall *v54)(TESForm *); // eax
  const char *v55; // eax
  __int16 v56; // ax
  __int16 v57; // ax
  __int16 v58; // ax
  Cmd_Execute *execute; // ecx
  UInt32 unk00; // [esp-Ch] [ebp-770h]
  ScriptEventList *v61; // [esp-4h] [ebp-768h]
  int v62; // [esp+0h] [ebp-764h]
  size_t v63; // [esp+0h] [ebp-764h]
  int v64; // [esp+0h] [ebp-764h]
  size_t v65; // [esp+0h] [ebp-764h]
  int v66; // [esp+0h] [ebp-764h]
  int v67; // [esp+4h] [ebp-760h]
  int v68; // [esp+4h] [ebp-760h]
  const char *v69; // [esp+4h] [ebp-760h]
  int v70; // [esp+4h] [ebp-760h]
  const char *longName; // [esp+4h] [ebp-760h]
  const char *v72; // [esp+4h] [ebp-760h]
  char v73; // [esp+8h] [ebp-75Ch]
  UInt32 a3; // [esp+1Ch] [ebp-748h] BYREF
  BSStringT a1a; // [esp+20h] [ebp-744h] BYREF
  int v76; // [esp+28h] [ebp-73Ch]
  char v77; // [esp+2Fh] [ebp-735h]
  int v78; // [esp+30h] [ebp-734h]
  RefVariable *v79; // [esp+34h] [ebp-730h] BYREF
  double v80; // [esp+3Ch] [ebp-728h] BYREF
  _DWORD v81[452]; // [esp+44h] [ebp-720h] BYREF
  int v82; // [esp+760h] [ebp-4h]

  data = a5->data; /*0x5169f7*/
  v76 = a8; /*0x516a06*/
  v13 = a9; /*0x516a0a*/
  a1a.m_data = (char *)a4; /*0x516a11*/
  v79 = (RefVariable *)a10; /*0x516a15*/
  a3 = a9; /*0x516a19*/
  if ( ArgList != 0x10 )
  {
    if ( a13 ) /*0x516b5d*/
      return 1; /*0x5172d3*/
    switch ( ArgList )
    {
      case 0x11:
      case 0x1C:
      case 0x1D:
        return 1;
      case 0x15:
        eventList = a1->eventList; /*0x516b80*/
        v23 = a9 + 1; /*0x516b85*/
        v77 = data[a9]; /*0x516b8b*/
        v21 = v77; /*0x516b7d*/
        a3 = a9 + 1; /*0x516b8f*/
        v76 = 0; /*0x516b93*/
        v78 = (int)eventList; /*0x516b97*/
        v79 = 0; /*0x516b9b*/
        if ( v77 != 0x47 && v77 != 0x72 ) /*0x516ba4*/
          goto LABEL_35; /*0x516ba4*/
        v24 = *(_WORD *)&data[v23]; /*0x516baa*/
        a3 = a9 + 3; /*0x516bb4*/
        if ( v77 == 0x72 ) /*0x516bb8*/
        {
          v77 = data[a9 + 3]; /*0x516bc0*/
          a3 = a9 + 4; /*0x516bc4*/
          v21 = v77; /*0x516bc8*/
        }
        RefVariableByIndex = Script_GetRefVariableByIndex(a5, v24, (ScriptEventList *)v78); /*0x516bd5*/
        v79 = RefVariableByIndex; /*0x516be2*/
        if ( (_BYTE)a12 ) /*0x516be6*/
          goto LABEL_34; /*0x516be6*/
        if ( v21 == 0x72 ) /*0x516beb*/
          return 0; /*0x516beb*/
        if ( !RefVariableByIndex ) /*0x516bf3*/
          return 0; /*0x516bf3*/
        form = RefVariableByIndex->form; /*0x516bf9*/
        if ( !form ) /*0x516bfe*/
          return 0; /*0x516bfe*/
        v27 = (TESObjectREFR *)OblivionDynamicCast( /*0x516c13*/
                                 form,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
        if ( v27 ) /*0x516c1d*/
        {
          v78 = (int)sub_4D7250(v27); /*0x516c26*/
        }
        else
        {
          v28 = (TESQuest *)OblivionDynamicCast( /*0x516c42*/
                              v79->form,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESQuest `RTTI Type Descriptor',
                              0);
          if ( v28 ) /*0x516c4c*/
            v78 = (int)v28[3].super.modlist.data; /*0x516c51*/
        }
        if ( !v78 ) /*0x516c5a*/
          return 0; /*0x516c5a*/
LABEL_34:
        v23 = a3; /*0x516c60*/
LABEL_35:
        if ( v21 != 0x47 ) /*0x516c67*/
        {
          v29 = *(unsigned __int16 *)&data[v23]; /*0x516c69*/
          v23 += 2; /*0x516c6d*/
          v76 = v29; /*0x516c70*/
          a3 = v23; /*0x516c74*/
        }
        v30 = *(_WORD *)&data[v23]; /*0x516c78*/
        a3 = v23 + 2; /*0x516c83*/
        sub_4F32E0(v81); /*0x516c87*/
        HIDWORD(v63) = a12; /*0x516c98*/
        LODWORD(v63) = v30; /*0x516ca0*/
        v61 = a1->eventList; /*0x516ca1*/
        unk00 = a1->unk00; /*0x516ca7*/
        v82 = 0; /*0x516cb0*/
        sub_4F3620(v81, v10, &data[a3], (TESObjectREFR *)a1a.m_data, unk00, a5, v61, v63, v73); /*0x516cbb*/
        a3 += v30; /*0x516cc4*/
        v80 = v10; /*0x516cc8*/
        if ( v81[0] )
        {
          v31 = (const char *)((int (__thiscall *)(Script *, int, _DWORD))a5->super.vtbl->GetEditorName)( /*0x516ced*/
                                a5,
                                a11,
                                *(_DWORD *)(4 * v81[0] + 0xB09DC0));
          PrintError("Script '%s', line %d: Set expression returned an error: %s.\r\n", v31, v64, v69);
          a5->info.dataLength = 0; /*0x516cfd*/
          goto LABEL_39; /*0x516cfd*/
        }
        if ( (_BYTE)a12 ) /*0x516d27*/
          goto LABEL_66; /*0x516d27*/
        if ( v77 != 0x47 ) /*0x516d33*/
        {
          v34 = (int *)v78; /*0x516d78*/
          if ( !v78 ) /*0x516d7e*/
            goto LABEL_39; /*0x516d7e*/
          if ( v77 == 0x66 ) /*0x516d82*/
          {
            sub_4FB630((int *)v78, (__int16)v76, v10); /*0x516de2*/
            if ( MEMORY[0xB361AC] ) /*0x516de7*/
            {
              v37 = (const char *)sub_4FA840(*(char **)v78, (__int16)v76); /*0x516dfd*/
              Interface_ConsolePrint("set %s >> %.2f", v37, v80); /*0x516e08*/
            }
          }
          else if ( v77 == 0x6C || v77 == 0x73 ) /*0x516d8a*/
          {
            v35 = Double_To_SInt32(v10); /*0x516d9a*/
            v78 = v35; /*0x516d9c*/
            sub_4FB630(v34, (__int16)v76, (double)v35); /*0x516dad*/
            if ( MEMORY[0xB361AC] ) /*0x516db2*/
            {
              v36 = (const char *)sub_4FA840((char *)*v34, (__int16)v76); /*0x516dbf*/
              Interface_ConsolePrint("set %s >> %i", v36, v35); /*0x516dca*/
            }
          }
          if ( v79 && v79->form || a1a.m_data ) /*0x516e27*/
          {
            if ( v79 ) /*0x516e2b*/
              m_data = (TESObjectREFR *)OblivionDynamicCast( /*0x516e47*/
                                          v79->form,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                          0);
            else
              m_data = (TESObjectREFR *)a1a.m_data; /*0x516e4b*/
            if ( m_data ) /*0x516e51*/
            {
              if ( (m_data->member.super.flags & 0x4000) == 0 /*0x516e74*/
                && (!Shared_GetDwordAtOffset40(m_data)
                 || Shared_GetDwordAtOffset40(m_data)->members.cellProcessLevel != 6) )
              {
                sub_441670(MEMORY[0xB333A0], (int)m_data); /*0x516e7d*/
              }
            }
          }
          goto LABEL_66; /*0x516e7d*/
        }
        if ( v79 ) /*0x516d3b*/
        {
          v32 = v79->form; /*0x516d3d*/
          if ( v32 ) /*0x516d42*/
          {
            *(float *)&a1a.m_data = v10; /*0x516d44*/
            v33 = *(float *)&a1a.m_data; /*0x516d48*/
            v32[1].member.refID = (UInt32)a1a.m_data; /*0x516d4c*/
            if ( MEMORY[0xB361AC] ) /*0x516d4f*/
              Interface_ConsolePrint("set global >> %0.2f", v33); /*0x516d67*/
            goto LABEL_66; /*0x516d6f*/
          }
        }
        goto LABEL_39; /*0x516d42*/
      case 0x16:
        v39 = a1->unk18[2]; /*0x516e9f*/
        if ( a1->unk18[v39 + 3] ) /*0x516ea2*/
          a1->unk18[2] = v39 + 1; /*0x516eac*/
        a1->unk18[a1->unk18[2] + 3] = 1; /*0x516eb2*/
        v13 = a3; /*0x516eba*/
        goto LABEL_70; /*0x516eba*/
      case 0x17:
        v44 = *(_WORD *)&data[a9]; /*0x516fce*/
        a3 = a9 + 2; /*0x516fd5*/
        v45 = a1->unk18[2]; /*0x516fd9*/
        v46 = (a1->unk18[v45 + 3] & 2) == 0; /*0x516fdc*/
        v47 = &a1->unk18[v45 + 3]; /*0x516fe1*/
        if ( v46 ) /*0x516fe5*/
        {
          *v47 |= 2u; /*0x516fe7*/
        }
        else if ( !(_BYTE)a12 ) /*0x516ff7*/
        {
          *a10 += v44; /*0x517000*/
        }
        return 1; /*0x516fea*/
      case 0x18:
LABEL_70:
        v40 = *(unsigned __int16 *)&data[v13]; /*0x516ebe*/
        a3 = v13 + 2; /*0x516ec5*/
        v41 = (char *)*(unsigned __int16 *)&data[v13 + 2]; /*0x516ec9*/
        v76 = v40; /*0x516ecd*/
        a1a.m_data = v41; /*0x516ed8*/
        a3 = v13 + 4; /*0x516edc*/
        sub_4F32E0(v81); /*0x516ee0*/
        v82 = 1; /*0x516eee*/
        if ( (_BYTE)a12 ) /*0x516ef9*/
        {
          HIDWORD(v65) = a12; /*0x516f00*/
          LODWORD(v65) = SLOWORD(a1a.m_data); /*0x516f06*/
          sub_4F3620(v81, v10, &data[a3], (TESObjectREFR *)a4, a1->unk00, a5, a1->eventList, v65, v73); /*0x516f16*/
          a1->unk18[a1->unk18[2] + 3] |= 2u; /*0x516f1e*/
        }
        else if ( (a1->unk18[a1->unk18[2] + 3] & 2) != 0 /*0x516f61*/
               || (sub_4F3620(
                     v81,
                     v10,
                     &data[a3],
                     (TESObjectREFR *)a4,
                     a1->unk00,
                     a5,
                     a1->eventList,
                     (unsigned int)SLOWORD(a1a.m_data),
                     v73),
                   v10 == dbl_A2FC68) )
        {
          v79->name.m_data += (__int16)v76; /*0x516f7a*/
        }
        else
        {
          a1->unk18[a1->unk18[2] + 3] |= 2u; /*0x516f66*/
        }
        if ( !v81[0] ) /*0x516f81*/
        {
          a3 += SLOWORD(a1a.m_data); /*0x516fc5*/
LABEL_66:
          v82 = 0xFFFFFFFF; /*0x516e86*/
          Shared_NoOpVirtual_60D0A0(v81); /*0x516e95*/
          return 1; /*0x516e9a*/
        }
        a1->unk18[0] = 6; /*0x516f8a*/
        v42 = (const char *)((int (__thiscall *)(Script *, int))a5->super.vtbl->GetEditorName)(a5, a11); /*0x516f9d*/
        PrintError("Script '%s', line %d: failed to evaluate expression.", v42, v70);
        v43 = v81[0]; /*0x516faa*/
        a5->info.dataLength = 0; /*0x516fae*/
        a1->unk18[1] = v43; /*0x516fb8*/
LABEL_39:
        v82 = 0xFFFFFFFF; /*0x516d04*/
        Shared_NoOpVirtual_60D0A0(v81); /*0x516d13*/
        return 0; /*0x516d1a*/
      case 0x19:
        a1->unk18[a1->unk18[2] + 3] = 0; /*0x51700a*/
        v48 = a1->unk18[2]; /*0x517012*/
        if ( v48 ) /*0x517017*/
          a1->unk18[2] = v48 - 1; /*0x517020*/
        return 1; /*0x517023*/
      case 0x1E:
        if ( (_BYTE)a12 ) /*0x517030*/
          return 1; /*0x517030*/
        goto CommandInfo_Execute?___def_516B76; /*0x517030*/
      default:
CommandInfo_Execute?___def_516B76:
        v49 = ScriptRunner_LookupCommandInfoByOpcode(ArgList);// Default script-command path: lookup CommandInfo by opcode, error if the opcode is not in the vanilla lookup ranges. /*0x517036*/
        if ( !v49 ) /*0x517048*/
        {
          a1a.m_data = 0; /*0x51704a*/
          *(_DWORD *)&a1a.m_dataLen = 0; /*0x51704e*/
          GetEditorName = a5->super.vtbl->GetEditorName; /*0x51705b*/
          v82 = 2; /*0x517063*/
          v51 = GetEditorName(&a5->super); /*0x51706e*/
          BSStringT_Static_Format( /*0x517083*/
            &a1a,
            "Unable to find function definition for command %d in script '%s'.",
            ArgList,
            v51);
          v52 = a1a.m_data; /*0x517088*/
          if ( MEMORY[0xB361AC] ) /*0x51708f*/
            Interface_ConsolePrint(a1a.m_data); /*0x517099*/
          else
            PrintError(a1a.m_data); /*0x5170b1*/
          FormHeapFree((unsigned int)v52); /*0x5170a2*/
          return 0; /*0x5170ac*/
        }
        v46 = LOBYTE(v49->needsParent) == 0;    // Checks CommandInfo packed field at +0x10 low byte: command requires a parent/reference when nonzero. /*0x5170c9*/
        params = (char *)v49->params; /*0x5170cd*/
        a1a.m_data = params; /*0x5170d0*/
        if ( v46 || a4 )
        {                                       // Execution gate: when a12/skip-mode is clear, vanilla calls CommandInfo.execute; when set, it falls through to the argument-consume path without invoking the command.
          if ( !(_BYTE)a12 ) /*0x517179*/
          {
            execute = v49->execute;             // Calls CommandInfo.execute with vanilla command ABI: ParamInfo*, script data, thisObj, containingObj, Script*, ScriptEventList*, result storage, opcode offset pointer. /*0x517299*/
            if ( BYTE1(v49->flags) )            // CommandInfo +0x24 flag byte1 marks commands that set ScriptRunner +0xA1 before execute; observed on side-effecting commands such as Activate/MoveTo/Position/ForceFlee. /*0x517295*/
              a1->unkA1 = 1; /*0x51729e*/
            return execute /*0x516ad1*/
                && ((unsigned __int8 (__cdecl *)(char *, _BYTE *, BSStringT *, UInt32, Script *, ScriptEventList *, RefVariable **, UInt32 *))execute)(
                     a1a.m_data,
                     data,
                     a4,
                     a1->unk00,
                     a5,
                     a1->eventList,
                     &v79,
                     &a3);
          }
        }
        else if ( !(_BYTE)a12 )
        {
          a1a.m_data = 0; /*0x5170f1*/
          *(_DWORD *)&a1a.m_dataLen = 0; /*0x5170f5*/
          longName = v49->longName; /*0x51710b*/
          v54 = a5->super.vtbl->GetEditorName; /*0x51710c*/
          v82 = 3; /*0x517115*/
          v55 = (const char *)((int (__thiscall *)(Script *, int, const char *))v54)(a5, a11, longName); /*0x517120*/
          BSStringT_Static_Format(&a1a, "Script '%s', line %d: Function '%s' requires a reference.", v55, v66, v72);
          if ( MEMORY[0xB361AC] ) /*0x517135*/
            Interface_ConsolePrint(a1a.m_data); /*0x517142*/
          else
            PrintError(a1a.m_data); /*0x51714e*/
          v82 = 0xFFFFFFFF; /*0x51715a*/
          BSStringT_Clear((unsigned int *)&a1a); /*0x517165*/
          return 0; /*0x51716c*/
        }
        if ( params )                           // Skip-mode/reference-missing fallthrough: if parameters exist, vanilla consumes compiled args with Script_ExtractArgs so the opcode offset remains synchronized. /*0x517181*/
        {
          if ( *(_DWORD *)v76 ) /*0x51718b*/
          {
            Script_ExtractArgs( /*0x5171a8*/
              (ParamInfo *)a1a.m_data,
              data,
              &a3,
              (TESObjectREFR *)a4,
              (TESObjectREFR *)a1->unk00,
              a5,
              a1->eventList);
            if ( ArgList == 0x1000 ) /*0x5171bc*/
            {
              v57 = *(_WORD *)&data[a3]; /*0x517214*/
              a3 += 2; /*0x51721e*/
              if ( v57 > 0 ) /*0x517222*/
              {
                v76 = (unsigned __int16)v57; /*0x517227*/
                do /*0x517253*/
                {
                  ExecuteScriptInstruction_( /*0x517246*/
                    (int)&v80,
                    data,
                    &a3,
                    (TESForm *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList,
                    1);
                  --v76; /*0x51724e*/
                }
                while ( v76 ); /*0x517253*/
              }
              v58 = *(_WORD *)&data[a3]; /*0x517259*/
              a3 += 2; /*0x517263*/
              if ( v58 > 0 ) /*0x517267*/
              {
                v76 = (unsigned __int16)v58; /*0x51726c*/
                do /*0x517291*/
                {
                  Script_ExtractArgs( /*0x517284*/
                    (ParamInfo *)a1a.m_data,
                    data,
                    &a3,
                    (TESObjectREFR *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList);
                  --v76; /*0x51728c*/
                }
                while ( v76 ); /*0x517291*/
              }
            }
            else if ( ArgList == 0x1059 ) /*0x5171c1*/
            {
              v56 = *(_WORD *)&data[a3]; /*0x5171cb*/
              a3 += 2; /*0x5171d5*/
              if ( v56 > 0 ) /*0x5171d9*/
              {
                a1a.m_data = (char *)(unsigned __int16)v56; /*0x5171e2*/
                do /*0x517209*/
                {
                  ExecuteScriptInstruction_( /*0x5171fc*/
                    (int)&v80,
                    data,
                    &a3,
                    (TESForm *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList,
                    1);
                  --a1a.m_data; /*0x517204*/
                }
                while ( a1a.m_data ); /*0x517209*/
              }
            }
          }
        }
        return 1; /*0x517209*/
    }
  }
  v14 = *(__int16 *)&data[a9];                  // Begin-block event id dispatch: opcode 0x10 reads event id, uses the event callback table at 0xB0AF58, and skips the block when the callback result is 0. /*0x516a23*/
  a3 = a9 + 2; /*0x516a2d*/
  if ( v14 > 0x1E ) /*0x516a31*/
    return 0; /*0x516a31*/
  v79 = *(RefVariable **)&data[a9 + 2]; /*0x516a3a*/
  v15 = 0x28 * v14; /*0x516a4c*/
  v16 = a9 + 6; /*0x516a4e*/
  a1a.m_data = (char *)dword_B0AF5C[0xA * v14]; /*0x516a59*/
  v17 = (unsigned __int8 (__cdecl *)(char *, _BYTE *, BSStringT *, UInt32, Script *, ScriptEventList *, BSStringT *, UInt32 *))*(&off_B0AF60 + 0xA * v14); /*0x516a5d*/
  a3 = a9 + 6; /*0x516a63*/
  if ( (_BYTE)a12 ) /*0x516a67*/
  {
    if ( a1a.m_data ) /*0x516a6f*/
    {
      if ( *(_DWORD *)v76 ) /*0x516a79*/
        Script_ExtractArgs( /*0x516a92*/
          (ParamInfo *)a1a.m_data,
          data,
          &a3,
          (TESObjectREFR *)a4,
          (TESObjectREFR *)a1->unk00,
          a5,
          a1->eventList);
    }
    return 1; /*0x516a9a*/
  }
  if ( byte_B0AF58[v15] && !a4 )
  {
    v18 = (const char *)((int (__thiscall *)(Script *, int))a5->super.vtbl->GetEditorName)(a5, a11); /*0x516abf*/
    PrintError("Script '%s', line %d: Null for a required ref pointer.", v18, v67);
    return 0; /*0x516ac7*/
  }
  if ( v17 ) /*0x516ad8*/
  {
    if ( v17(a1a.m_data, data, a4, a1->unk00, a5, a1->eventList, &a1a, &a3) ) /*0x516af3*/
    {
      if ( 0.0 == *(double *)&a1a || a13 ) /*0x516b11*/
        *(_DWORD *)v76 += v79; /*0x516b1f*/
      return 1; /*0x516b21*/
    }
    v16 = a3; /*0x516b26*/
  }
  v20 = (const char *)((int (__thiscall *)(Script *, int, UInt32))a5->super.vtbl->GetEditorName)(a5, a11, v16); /*0x516b3e*/
  PrintError("Script '%s', line %d: Error Executing line (Offset %d).", v20, v62, v68);
  return 0; /*0x5172d5*/
}
