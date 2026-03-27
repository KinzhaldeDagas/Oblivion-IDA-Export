char __cdecl ExecuteScriptInstruction_(
        int a1,
        UInt8 *a2,
        UInt32 *a3,
        TESForm *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        char a8)
{
  ScriptEventList *v8; // ebp
  UInt8 v10; // bl
  UInt32 v11; // eax
  __int16 v12; // dx
  RefVariable *RefVariableByIndex; // eax
  TESForm *form; // ecx
  double v15; // st7
  TESForm *v16; // ebp
  ExtraScript *data; // eax
  TESForm *v18; // eax
  int *v19; // eax
  CommandInfo *v20; // eax
  TESForm *v22; // edx
  ParamInfo *params; // edx
  Cmd_Execute *execute; // eax
  __int16 v25; // cx
  int refID; // [esp-8h] [ebp-38h]
  int v27; // [esp-8h] [ebp-38h]
  ScriptEventList *v28; // [esp+10h] [ebp-20h]
  RefVariable *v29; // [esp+18h] [ebp-18h]
  BSExtraDataVtbl *ReferencePointer; // [esp+20h] [ebp-10h]

  v8 = l;
  v28 = l;
  if ( !l )
    return 0;
  v29 = 0;
  if ( a8 )
  {
    if ( (a6->super.member.flags & 8) != 0 )
      a8 = 0;
  }
  v10 = a2[*a3];
  v11 = *a3 + 1;
  *a3 = v11;
  switch ( v10 )
  {
    case 'G':
    case 'Z':
    case 'r':
      v12 = *(_WORD *)&a2[v11];
      *a3 = v11 + 2;
      RefVariableByIndex = Script_GetRefVariableByIndex(a6, v12, l);
      v29 = RefVariableByIndex;
      if ( !RefVariableByIndex )
        return 0;
      form = RefVariableByIndex->form;
      if ( !form && !a8 )
      {
        if ( !RefVariableByIndex->varIdx )
          return 0;
        v15 = 0.0;
        goto LABEL_49;
      }
      if ( v10 == 0x47 )
      {
        *(double *)a1 = *(float *)&form[1].member.refID;
        return 1;
      }
      if ( v10 == 0x5A )
      {
        *(_DWORD *)a1 = form->member.refID;
        return 1;
      }
      v10 = a2[(*a3)++];
      if ( v10 == 0x58 )
        goto LABEL_32;
      v16 = RefVariableByIndex->form;
      if ( !v16 )
        goto LABEL_26;
      if ( v16->member.type == kFormType_Quest )
      {
        data = (ExtraScript *)v16[3].member.modlist.data;
      }
      else
      {
        if ( (unsigned int)v16->member.type - 0x31 > 2 )
          goto LABEL_26;
        if ( ExtraDataList_GetReferencePointer((ExtraDataList *)&v16[2].member.modlist.next) )
        {
          ReferencePointer = ExtraDataList_GetReferencePointer((ExtraDataList *)&v16[2].member.modlist.next);
          refID = v16->member.refID;
          v18 = (TESForm *)((int (__thiscall *)(TESForm *))v16->vtbl[1].SetQuestItem)(v16);
          v19 = (int *)sub_4D8D70(ReferencePointer, v18, refID);
          if ( !v19 )
            goto LABEL_26;
          data = sub_484F50(v19);
        }
        else
        {
          data = sub_4D7250((TESObjectREFR *)v16);
        }
      }
      v28 = (ScriptEventList *)data;
LABEL_26:
      if ( v28 )
      {
        v8 = l;
        goto LABEL_31;
      }
      return 0;
    case 'n':
      *(double *)a1 = (double)*(int *)&a2[v11];
      *a3 += 4;
      return 1;
    case 'z':
      *(_DWORD *)a1 = *(_DWORD *)&a2[v11];
      *(_DWORD *)(a1 + 4) = *(_DWORD *)&a2[v11 + 4];
      *a3 += 8;
      return 1;
    default:
LABEL_31:
      if ( v10 == 0x58 )
      {
LABEL_32:
        v27 = *(__int16 *)&a2[*a3];
        *a3 += 4;
        v20 = ScriptRunner_LookupCommandByOpcode(v27);
        if ( !v20 )
          return 0;
        if ( v29 )
        {
          v22 = v29->form;
          if ( v22 )
          {
            a4 = 0;
            if ( (unsigned int)v22->member.type - 0x31 <= 2 )
              a4 = v29->form;
          }
        }
        params = v20->params;
        if ( a8 )
        {
          if ( params )
          {
            Script_ExtractArgs(params, a2, a3, (TESObjectREFR *)a4, a5, a6, v8);
            return 0;
          }
          return 0;
        }
        if ( LOBYTE(v20->needsParent) && !a4 )
          return 0;
        execute = v20->execute;
        if ( !execute
          || !((unsigned __int8 (__cdecl *)(ParamInfo *, UInt8 *, TESForm *, TESObjectREFR *, Script *, ScriptEventList *, int, UInt32 *))execute)(
                params,
                a2,
                a4,
                a5,
                a6,
                v8,
                a1,
                a3) )
        {
          return 0;
        }
      }
      else
      {
        v25 = *(_WORD *)&a2[*a3];
        *a3 += 2;
        if ( v10 != 0x66 && v10 != 0x6C && v10 != 0x73 )
          return 0;
        v15 = sub_4FA110(v28, v25, a6);
LABEL_49:
        *(double *)a1 = v15;
      }
      return 1;
  }
}
