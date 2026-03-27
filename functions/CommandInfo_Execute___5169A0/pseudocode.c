bool __thiscall CommandInfo_Execute_(
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

  data = a5->data;
  v76 = a8;
  v13 = a9;
  a1a.m_data = (char *)a4;
  v79 = (RefVariable *)a10;
  a3 = a9;
  if ( ArgList != 0x10 )
  {
    if ( a13 )
      return 1;
    switch ( ArgList )
    {
      case 0x11:
      case 0x1C:
      case 0x1D:
        return 1;
      case 0x15:
        eventList = a1->eventList;
        v23 = a9 + 1;
        v77 = data[a9];
        v21 = v77;
        a3 = a9 + 1;
        v76 = 0;
        v78 = (int)eventList;
        v79 = 0;
        if ( v77 != 0x47 && v77 != 0x72 )
          goto LABEL_35;
        v24 = *(_WORD *)&data[v23];
        a3 = a9 + 3;
        if ( v77 == 0x72 )
        {
          v77 = data[a9 + 3];
          a3 = a9 + 4;
          v21 = v77;
        }
        RefVariableByIndex = Script_GetRefVariableByIndex(a5, v24, (ScriptEventList *)v78);
        v79 = RefVariableByIndex;
        if ( (_BYTE)a12 )
          goto LABEL_34;
        if ( v21 == 0x72 )
          return 0;
        if ( !RefVariableByIndex )
          return 0;
        form = RefVariableByIndex->form;
        if ( !form )
          return 0;
        v27 = (TESObjectREFR *)OblivionDynamicCast(
                                 form,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                 0);
        if ( v27 )
        {
          v78 = (int)sub_4D7250(v27);
        }
        else
        {
          v28 = (TESQuest *)OblivionDynamicCast(
                              v79->form,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESQuest `RTTI Type Descriptor',
                              0);
          if ( v28 )
            v78 = (int)v28[3].super.modlist.data;
        }
        if ( !v78 )
          return 0;
LABEL_34:
        v23 = a3;
LABEL_35:
        if ( v21 != 0x47 )
        {
          v29 = *(unsigned __int16 *)&data[v23];
          v23 += 2;
          v76 = v29;
          a3 = v23;
        }
        v30 = *(_WORD *)&data[v23];
        a3 = v23 + 2;
        sub_4F32E0(v81);
        HIDWORD(v63) = a12;
        LODWORD(v63) = v30;
        v61 = a1->eventList;
        unk00 = a1->unk00;
        v82 = 0;
        sub_4F3620(v81, v10, &data[a3], (TESObjectREFR *)a1a.m_data, unk00, a5, v61, v63, v73);
        a3 += v30;
        v80 = v10;
        if ( v81[0] )
        {
          v31 = (const char *)((int (__thiscall *)(Script *, int, _DWORD))a5->super.vtbl->GetEditorName)(
                                a5,
                                a11,
                                *(_DWORD *)(4 * v81[0] + 0xB09DC0));
          PrintError("Script '%s', line %d: Set expression returned an error: %s.\r\n", v31, v64, v69);
          a5->info.dataLength = 0;
          goto LABEL_39;
        }
        if ( (_BYTE)a12 )
          goto LABEL_66;
        if ( v77 != 0x47 )
        {
          v34 = (int *)v78;
          if ( !v78 )
            goto LABEL_39;
          if ( v77 == 0x66 )
          {
            sub_4FB630((int *)v78, (__int16)v76, v10);
            if ( IsConsoleMode )
            {
              v37 = (const char *)sub_4FA840(*(char **)v78, (__int16)v76);
              Interface_ConsolePrint("set %s >> %.2f", v37, v80);
            }
          }
          else if ( v77 == 0x6C || v77 == 0x73 )
          {
            v35 = Double_To_SInt32(v10);
            v78 = v35;
            sub_4FB630(v34, (__int16)v76, (double)v35);
            if ( IsConsoleMode )
            {
              v36 = (const char *)sub_4FA840((char *)*v34, (__int16)v76);
              Interface_ConsolePrint("set %s >> %i", v36, v35);
            }
          }
          if ( v79 && v79->form || a1a.m_data )
          {
            if ( v79 )
              m_data = (TESObjectREFR *)OblivionDynamicCast(
                                          v79->form,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                          0);
            else
              m_data = (TESObjectREFR *)a1a.m_data;
            if ( m_data )
            {
              if ( (m_data->member.super.flags & 0x4000) == 0
                && (!TESObjectREFR_GetParentCell(m_data)
                 || TESObjectREFR_GetParentCell(m_data)->members.cellProcessLevel != 6) )
              {
                sub_441670(TES, (int)m_data);
              }
            }
          }
          goto LABEL_66;
        }
        if ( v79 )
        {
          v32 = v79->form;
          if ( v32 )
          {
            *(float *)&a1a.m_data = v10;
            v33 = *(float *)&a1a.m_data;
            v32[1].member.refID = (UInt32)a1a.m_data;
            if ( IsConsoleMode )
              Interface_ConsolePrint("set global >> %0.2f", v33);
            goto LABEL_66;
          }
        }
        goto LABEL_39;
      case 0x16:
        v39 = a1->unk18[2];
        if ( a1->unk18[v39 + 3] )
          a1->unk18[2] = v39 + 1;
        a1->unk18[a1->unk18[2] + 3] = 1;
        v13 = a3;
        goto LABEL_70;
      case 0x17:
        v44 = *(_WORD *)&data[a9];
        a3 = a9 + 2;
        v45 = a1->unk18[2];
        v46 = (a1->unk18[v45 + 3] & 2) == 0;
        v47 = &a1->unk18[v45 + 3];
        if ( v46 )
        {
          *v47 |= 2u;
        }
        else if ( !(_BYTE)a12 )
        {
          *a10 += v44;
        }
        return 1;
      case 0x18:
LABEL_70:
        v40 = *(unsigned __int16 *)&data[v13];
        a3 = v13 + 2;
        v41 = (char *)*(unsigned __int16 *)&data[v13 + 2];
        v76 = v40;
        a1a.m_data = v41;
        a3 = v13 + 4;
        sub_4F32E0(v81);
        v82 = 1;
        if ( (_BYTE)a12 )
        {
          HIDWORD(v65) = a12;
          LODWORD(v65) = SLOWORD(a1a.m_data);
          sub_4F3620(v81, v10, &data[a3], (TESObjectREFR *)a4, a1->unk00, a5, a1->eventList, v65, v73);
          a1->unk18[a1->unk18[2] + 3] |= 2u;
        }
        else if ( (a1->unk18[a1->unk18[2] + 3] & 2) != 0
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
          v79->name.m_data += (__int16)v76;
        }
        else
        {
          a1->unk18[a1->unk18[2] + 3] |= 2u;
        }
        if ( !v81[0] )
        {
          a3 += SLOWORD(a1a.m_data);
LABEL_66:
          v82 = 0xFFFFFFFF;
          TESTexture::ClearComponentReferences(v81);
          return 1;
        }
        a1->unk18[0] = 6;
        v42 = (const char *)((int (__thiscall *)(Script *, int))a5->super.vtbl->GetEditorName)(a5, a11);
        PrintError("Script '%s', line %d: failed to evaluate expression.", v42, v70);
        v43 = v81[0];
        a5->info.dataLength = 0;
        a1->unk18[1] = v43;
LABEL_39:
        v82 = 0xFFFFFFFF;
        TESTexture::ClearComponentReferences(v81);
        return 0;
      case 0x19:
        a1->unk18[a1->unk18[2] + 3] = 0;
        v48 = a1->unk18[2];
        if ( v48 )
          a1->unk18[2] = v48 - 1;
        return 1;
      case 0x1E:
        if ( (_BYTE)a12 )
          return 1;
        goto CommandInfo_Execute?___def_516B76;
      default:
CommandInfo_Execute?___def_516B76:
        v49 = ScriptRunner_LookupCommandByOpcode(ArgList);
        if ( !v49 )
        {
          a1a.m_data = 0;
          *(_DWORD *)&a1a.m_dataLen = 0;
          GetEditorName = a5->super.vtbl->GetEditorName;
          v82 = 2;
          v51 = GetEditorName(&a5->super);
          BSStringT_Static_Format(
            &a1a,
            "Unable to find function definition for command %d in script '%s'.",
            ArgList,
            v51);
          v52 = a1a.m_data;
          if ( IsConsoleMode )
            Interface_ConsolePrint(a1a.m_data);
          else
            PrintError(a1a.m_data);
          FormHeapFree((unsigned int)v52);
          return 0;
        }
        v46 = LOBYTE(v49->needsParent) == 0;
        params = (char *)v49->params;
        a1a.m_data = params;
        if ( v46 || a4 )
        {
          if ( !(_BYTE)a12 )
          {
            execute = v49->execute;
            if ( BYTE1(v49->flags) )
              a1->unkA1 = 1;
            return execute
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
          a1a.m_data = 0;
          *(_DWORD *)&a1a.m_dataLen = 0;
          longName = v49->longName;
          v54 = a5->super.vtbl->GetEditorName;
          v82 = 3;
          v55 = (const char *)((int (__thiscall *)(Script *, int, const char *))v54)(a5, a11, longName);
          BSStringT_Static_Format(&a1a, "Script '%s', line %d: Function '%s' requires a reference.", v55, v66, v72);
          if ( IsConsoleMode )
            Interface_ConsolePrint(a1a.m_data);
          else
            PrintError(a1a.m_data);
          v82 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&a1a);
          return 0;
        }
        if ( params )
        {
          if ( *(_DWORD *)v76 )
          {
            Script_ExtractArgs(
              (ParamInfo *)a1a.m_data,
              data,
              &a3,
              (TESObjectREFR *)a4,
              (TESObjectREFR *)a1->unk00,
              a5,
              a1->eventList);
            if ( ArgList == 0x1000 )
            {
              v57 = *(_WORD *)&data[a3];
              a3 += 2;
              if ( v57 > 0 )
              {
                v76 = (unsigned __int16)v57;
                do
                {
                  ExecuteScriptInstruction_(
                    (int)&v80,
                    data,
                    &a3,
                    (TESForm *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList,
                    1);
                  --v76;
                }
                while ( v76 );
              }
              v58 = *(_WORD *)&data[a3];
              a3 += 2;
              if ( v58 > 0 )
              {
                v76 = (unsigned __int16)v58;
                do
                {
                  Script_ExtractArgs(
                    (ParamInfo *)a1a.m_data,
                    data,
                    &a3,
                    (TESObjectREFR *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList);
                  --v76;
                }
                while ( v76 );
              }
            }
            else if ( ArgList == 0x1059 )
            {
              v56 = *(_WORD *)&data[a3];
              a3 += 2;
              if ( v56 > 0 )
              {
                a1a.m_data = (char *)(unsigned __int16)v56;
                do
                {
                  ExecuteScriptInstruction_(
                    (int)&v80,
                    data,
                    &a3,
                    (TESForm *)a4,
                    (TESObjectREFR *)a1->unk00,
                    a5,
                    a1->eventList,
                    1);
                  --a1a.m_data;
                }
                while ( a1a.m_data );
              }
            }
          }
        }
        return 1;
    }
  }
  v14 = *(__int16 *)&data[a9];
  a3 = a9 + 2;
  if ( v14 > 0x1E )
    return 0;
  v79 = *(RefVariable **)&data[a9 + 2];
  v15 = 0x28 * v14;
  v16 = a9 + 6;
  a1a.m_data = (char *)dword_B0AF5C[0xA * v14];
  v17 = (unsigned __int8 (__cdecl *)(char *, _BYTE *, BSStringT *, UInt32, Script *, ScriptEventList *, BSStringT *, UInt32 *))*(&off_B0AF60 + 0xA * v14);
  a3 = a9 + 6;
  if ( (_BYTE)a12 )
  {
    if ( a1a.m_data )
    {
      if ( *(_DWORD *)v76 )
        Script_ExtractArgs(
          (ParamInfo *)a1a.m_data,
          data,
          &a3,
          (TESObjectREFR *)a4,
          (TESObjectREFR *)a1->unk00,
          a5,
          a1->eventList);
    }
    return 1;
  }
  if ( byte_B0AF58[v15] && !a4 )
  {
    v18 = (const char *)((int (__thiscall *)(Script *, int))a5->super.vtbl->GetEditorName)(a5, a11);
    PrintError("Script '%s', line %d: Null for a required ref pointer.", v18, v67);
    return 0;
  }
  if ( v17 )
  {
    if ( v17(a1a.m_data, data, a4, a1->unk00, a5, a1->eventList, &a1a, &a3) )
    {
      if ( 0.0 == *(double *)&a1a || a13 )
        *(_DWORD *)v76 += v79;
      return 1;
    }
    v16 = a3;
  }
  v20 = (const char *)((int (__thiscall *)(Script *, int, UInt32))a5->super.vtbl->GetEditorName)(a5, a11, v16);
  PrintError("Script '%s', line %d: Error Executing line (Offset %d).", v20, v62, v68);
  return 0;
}
