char __cdecl ExecuteScriptInstruction_(
        int a1,
        UInt8 *a2,
        UInt32 *a3,
        TESObjectREFR *a4,
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
  double VariableValue; // st7
  TESForm *v16; // ebp
  ExtraScript *data; // eax
  TESForm *v18; // eax
  int *v19; // eax
  CommandInfo *v20; // eax
  TESForm *v22; // edx
  ParamInfo *params; // edx
  Cmd_Execute *execute; // eax
  __int16 v25; // cx
  unsigned int refID; // [esp-8h] [ebp-38h]
  int v27; // [esp-8h] [ebp-38h]
  ScriptEventList *v28; // [esp+10h] [ebp-20h]
  RefVariable *v29; // [esp+18h] [ebp-18h]
  TESObjectREFR *ReferencePointer; // [esp+20h] [ebp-10h]

  v8 = l; /*0x4fab3b*/
  v28 = l; /*0x4fab63*/
  if ( !l ) /*0x4fab67*/
    return 0; /*0x4fab7c*/
  v29 = 0; /*0x4fab82*/
  if ( a8 ) /*0x4fab8a*/
  {
    if ( (a6->super.member.flags & 8) != 0 ) /*0x4fab94*/
      a8 = 0; /*0x4fab96*/
  }
  v10 = a2[*a3]; /*0x4fab9e*/
  v11 = *a3 + 1; /*0x4faba4*/
  *a3 = v11; /*0x4fabad*/
  switch ( v10 ) /*0x4fabbc*/
  {
    case 'G': /*0x4fabbc*/
    case 'Z': /*0x4fabbc*/
    case 'r': /*0x4fabbc*/
      v12 = *(_WORD *)&a2[v11]; /*0x4fabc3*/
      *a3 = v11 + 2; /*0x4fabce*/
      RefVariableByIndex = Script_GetRefVariableByIndex(a6, v12, l); /*0x4fabd5*/
      v29 = RefVariableByIndex; /*0x4fabdc*/
      if ( !RefVariableByIndex ) /*0x4fabe0*/
        return 0; /*0x4fabe0*/
      form = RefVariableByIndex->form; /*0x4fabe6*/
      if ( !form && !a8 ) /*0x4fabf1*/
      {
        if ( !RefVariableByIndex->varIdx ) /*0x4fabf6*/
          return 0; /*0x4fabf6*/
        VariableValue = 0.0; /*0x4fabfc*/
        goto LABEL_49; /*0x4fabfe*/
      }
      if ( v10 == 0x47 ) /*0x4fac06*/
      {
        *(double *)a1 = *(float *)&form[1].member.refID; /*0x4fac10*/
        return 1; /*0x4fac25*/
      }
      if ( v10 == 0x5A ) /*0x4fac29*/
      {
        *(_DWORD *)a1 = form->member.refID; /*0x4fac35*/
        return 1; /*0x4fac48*/
      }
      v10 = a2[(*a3)++]; /*0x4fac4b*/
      if ( v10 == 0x58 ) /*0x4fac56*/
        goto LABEL_32; /*0x4fac56*/
      v16 = RefVariableByIndex->form; /*0x4fac60*/
      if ( !v16 ) /*0x4fac65*/
        goto LABEL_26; /*0x4fac65*/
      if ( v16->member.type == kFormType_Quest ) /*0x4fac6b*/
      {
        data = (ExtraScript *)v16[3].member.modlist.data; /*0x4fac6d*/
      }
      else
      {
        if ( (unsigned int)v16->member.type - 0x31 > 2 ) /*0x4fac80*/
          goto LABEL_26; /*0x4fac80*/
        if ( ExtraDataList_GetReferencePointer((ExtraDataList *)&v16[2].member.modlist.next) ) /*0x4fac85*/
        {
          ReferencePointer = ExtraDataList_GetReferencePointer((ExtraDataList *)&v16[2].member.modlist.next); /*0x4fac99*/
          refID = v16->member.refID; /*0x4faca0*/
          v18 = (TESForm *)((int (__thiscall *)(TESForm *))v16->vtbl[1].SetQuestItem)(v16); /*0x4faca9*/
          v19 = (int *)sub_4D8D70(ReferencePointer, v18, refID); /*0x4facb0*/
          if ( !v19 ) /*0x4facb7*/
            goto LABEL_26; /*0x4facb7*/
          data = sub_484F50(v19); /*0x4facbb*/
        }
        else
        {
          data = sub_4D7250((TESObjectREFR *)v16); /*0x4facc4*/
        }
      }
      v28 = (ScriptEventList *)data; /*0x4facc9*/
LABEL_26:
      if ( v28 ) /*0x4facd2*/
      {
        v8 = l; /*0x4fad2a*/
        goto LABEL_31; /*0x4fad2a*/
      }
      return 0; /*0x4face8*/
    case 'n': /*0x4fabbc*/
      *(double *)a1 = (double)*(int *)&a2[v11]; /*0x4facf0*/
      *a3 += 4; /*0x4facf2*/
      return 1; /*0x4fad05*/
    case 'z': /*0x4fabbc*/
      *(_DWORD *)a1 = *(_DWORD *)&a2[v11]; /*0x4fad09*/
      *(_DWORD *)(a1 + 4) = *(_DWORD *)&a2[v11 + 4]; /*0x4fad10*/
      *a3 += 8; /*0x4fad13*/
      return 1; /*0x4fad29*/
    default:
LABEL_31:
      if ( v10 == 0x58 ) /*0x4fad31*/
      {
LABEL_32:
        v27 = *(__int16 *)&a2[*a3]; /*0x4fad37*/
        *a3 += 4; /*0x4fad41*/
        v20 = ScriptRunner_LookupCommandInfoByOpcode(v27); /*0x4fad43*/
        if ( !v20 ) /*0x4fad4d*/
          return 0; /*0x4fad4d*/
        if ( v29 ) /*0x4fad5d*/
        {
          v22 = v29->form; /*0x4fad5f*/
          if ( v22 ) /*0x4fad64*/
          {
            a4 = 0; /*0x4fad6d*/
            if ( (unsigned int)v22->member.type - 0x31 <= 2 ) /*0x4fad72*/
              a4 = (TESObjectREFR *)v29->form; /*0x4fad74*/
          }
        }
        params = v20->params; /*0x4fad7b*/
        if ( a8 ) /*0x4fad7e*/
        {
          if ( params ) /*0x4fad82*/
          {
            Script_ExtractArgs(params, a2, a3, a4, a5, a6, v8); /*0x4fad93*/
            return 0; /*0x4fadaf*/
          }
          return 0; /*0x4fad82*/
        }
        if ( LOBYTE(v20->needsParent) && !a4 ) /*0x4fadb8*/
          return 0; /*0x4fadb8*/
        execute = v20->execute; /*0x4fadba*/
        if ( !execute /*0x4fadd5*/
          || !((unsigned __int8 (__cdecl *)(ParamInfo *, UInt8 *, TESObjectREFR *, TESObjectREFR *, Script *, ScriptEventList *, int, UInt32 *))execute)(
                params,
                a2,
                a4,
                a5,
                a6,
                v8,
                a1,
                a3) )
        {
          return 0; /*0x4fadf2*/
        }
      }
      else
      {
        v25 = *(_WORD *)&a2[*a3]; /*0x4fadf5*/
        *a3 += 2; /*0x4fadff*/
        if ( v10 != 0x66 && v10 != 0x6C && v10 != 0x73 ) /*0x4fae0b*/
          return 0; /*0x4fae0b*/
        VariableValue = ScriptEventList::GetVariableValue(v28, v25, a6); /*0x4fae1a*/
LABEL_49:
        *(double *)a1 = VariableValue; /*0x4fae1f*/
      }
      return 1;
  }
}
