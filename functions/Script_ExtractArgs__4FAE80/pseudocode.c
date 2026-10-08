// TES4 authoritative: Script_ExtractArgs consumes compiled command arguments using ParamInfo records. ParamInfo is 0x0C bytes: +0 type string, +4 type id, +8 optional flag.
bool Script_ExtractArgs(
        ParamInfo *a1,
        void *a2,
        UInt32 *a3,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        ...)
{
  int v7; // edi
  UInt32 v9; // eax
  __int16 v10; // dx
  void **v11; // esi
  UInt32 *v12; // ebp
  UInt32 *p_typeID; // ebx
  char v14; // cl
  int v15; // eax
  __int16 v16; // cx
  RefVariable *RefVariableByIndex; // eax
  RefVariable *v18; // edi
  TESObject *form; // eax
  TESForm **v20; // ebx
  TESForm **v21; // eax
  TESForm *v22; // edi
  bool v23; // cc
  bool v24; // zf
  _DWORD *v25; // ebx
  _DWORD *p_vtbl; // eax
  TESForm *v27; // edi
  TESObject **v28; // edi
  TESForm **v29; // ebx
  int type; // ecx
  TESObject **v31; // ecx
  __int16 v32; // bx
  int v33; // eax
  void *v34; // edi
  float *v35; // edx
  _BYTE *v36; // eax
  __int16 v37; // cx
  _BYTE *v38; // edx
  __int16 v39; // cx
  _DWORD *v40; // edx
  struct TypeDescriptor *v41; // [esp-18h] [ebp-30h]
  size_t v42; // [esp-14h] [ebp-2Ch]
  __int16 v43; // [esp+0h] [ebp-18h]
  double v44; // [esp+4h] [ebp-14h] BYREF
  int v45; // [esp+Ch] [ebp-Ch]
  double v46; // [esp+10h] [ebp-8h] BYREF
  va_list va; // [esp+38h] [ebp+20h] BYREF

  va_start(va, l);
  if ( !a1 ) /*0x4fae88*/
    return 0; /*0x4fae8a*/
  v9 = *a3;                                     // Reads the compiled argument count word at scriptData+*opcodeOffset, then advances the offset by two bytes before per-argument extraction. /*0x4fae94*/
  v10 = *(_WORD *)((char *)a2 + *a3); /*0x4fae9a*/
  HIDWORD(v42) = v7; /*0x4faea7*/
  va_copy((va_list)v11, va); /*0x4faea8*/
  v45 = (unsigned __int16)v10; /*0x4faeac*/
  *a3 = v9 + 2; /*0x4faeb0*/
  v43 = 0; /*0x4faeb2*/
  if ( v10 <= 0 ) /*0x4faeba*/
    return 1; /*0x4fb34b*/
  v12 = a3; /*0x4faec0*/
  while ( 1 ) /*0x4faed0*/
  {
    p_typeID = &a1[v43].typeID;                 // Per-argument loop indexes ParamInfo records with 0x0C-byte stride and dispatches by ParamInfo.typeID. /*0x4faed0*/
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) ) /*0x4faed6*/
      break;                                    // Type table byte at 0xB0A54D+(8*typeID) selects the form/ref-variable extraction path. /*0x4faed6*/
    switch ( *p_typeID ) /*0x4fb1b1*/
    {
      case 0u: /*0x4fb1b1*/
        v32 = *(_WORD *)((char *)a2 + *v12);    // Param typeID 0 extracts a string: compiled form stores uint16 length followed by bytes. /*0x4fb1c1*/
        v33 = *v12 + 2; /*0x4fb1c9*/
        *v12 = v33; /*0x4fb1cc*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb1d8*/
        {
          v34 = *v11; /*0x4fb1de*/
          LODWORD(v42) = v32; /*0x4fb1e3*/
          ++v11; /*0x4fb1e6*/
          memcpy(v34, (char *)a2 + v33, v42); /*0x4fb1eb*/
          *((_BYTE *)v34 + v32) = 0; /*0x4fb1f0*/
          v12 = a3; /*0x4fb1f4*/
        }
        *v12 += v32; /*0x4fb1fe*/
        break; /*0x4fb201*/
      case 1u: /*0x4fb1b1*/
      case 0x17u: /*0x4fb1b1*/
        v44 = 0.0;                              // Param typeID 1/0x17 extracts an integer through ExecuteScriptInstruction_ expression evaluation, then writes SInt32 to the caller output. /*0x4fb20a*/
        if ( !ExecuteScriptInstruction_((int)&v44, (UInt8 *)a2, v12, (TESForm *)a4, a5, a6, l, 1) ) /*0x4fb235*/
          return 0; /*0x4fb235*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb243*/
        {
          ++v11; /*0x4fb24d*/
          *(_DWORD *)v11[0xFFFFFFFF] = Double_To_SInt32(v44); /*0x4fb258*/
        }
        break; /*0x4fb25a*/
      case 2u: /*0x4fb1b1*/
        v46 = 0.0;                              // Param typeID 2 extracts a float through ExecuteScriptInstruction_ expression evaluation, then writes float to the caller output. /*0x4fb263*/
        if ( !ExecuteScriptInstruction_((int)&v46, (UInt8 *)a2, v12, (TESForm *)a4, a5, a6, l, 1) ) /*0x4fb28e*/
          return 0; /*0x4fb28e*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb29d*/
        {
          v35 = (float *)*v11; /*0x4fb2a7*/
          *(float *)&v44 = v46; /*0x4fb2a9*/
          ++v11; /*0x4fb2ad*/
          *v35 = *(float *)&v44; /*0x4fb2b4*/
        }
        break; /*0x4fb2b6*/
      case 5u: /*0x4fb1b1*/
      case 0xAu: /*0x4fb1b1*/
      case 0x12u: /*0x4fb1b1*/
      case 0x1Cu: /*0x4fb1b1*/
        v39 = *(_WORD *)((char *)a2 + *v12);    // Param typeID 5/0xA/0x12/0x1C extracts a uint16 enum/id style value, used by Actor Value and similar parameter kinds. /*0x4fb313*/
        *v12 += 2; /*0x4fb31e*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb329*/
        {
          v40 = *v11++; /*0x4fb32b*/
          *v40 = v39; /*0x4fb333*/
        }
        break; /*0x4fb333*/
      case 8u: /*0x4fb1b1*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb2c7*/
        {
          v36 = *v11++; /*0x4fb2d0*/
          *v36 = *((_BYTE *)a2 + *v12); /*0x4fb2d8*/
        }
        ++*v12; /*0x4fb2da*/
        break; /*0x4fb2de*/
      case 0x21u: /*0x4fb1b1*/
        v37 = *(_WORD *)((char *)a2 + *v12); /*0x4fb2e9*/
        *v12 += 2; /*0x4fb2f4*/
        if ( (a6->super.member.flags & 8) != 0 ) /*0x4fb2ff*/
        {
          v38 = *v11++; /*0x4fb301*/
          *v38 = v37; /*0x4fb306*/
        }
        break; /*0x4fb308*/
      default:
        return 0;
    }
Script_ExtractArgs___ArgLoop_Next:
    if ( ++v43 >= (__int16)v45 ) /*0x4fb345*/
      return 1; /*0x4fb345*/
  }
  v14 = *((_BYTE *)a2 + *v12); /*0x4faeed*/
  v15 = *v12 + 1; /*0x4faef0*/
  *v12 = v15; /*0x4faef6*/
  if ( v14 == 0x72 ) /*0x4faef9*/
  {
    v16 = *(_WORD *)((char *)a2 + v15); /*0x4faeff*/
    *v12 = v15 + 2; /*0x4faf06*/
    RefVariableByIndex = Script_GetRefVariableByIndex(a6, v16, l); /*0x4faf16*/
    v18 = RefVariableByIndex; /*0x4faf1f*/
    if ( (a6->super.member.flags & kFormFlags_Linked) != 0 ) /*0x4faf29*/
    {
      if ( RefVariableByIndex ) /*0x4faf31*/
      {
        form = (TESObject *)RefVariableByIndex->form; /*0x4faf37*/
        if ( form ) /*0x4faf3c*/
        {
          switch ( *p_typeID ) /*0x4faf50*/
          {
            case 3u: /*0x4faf50*/
              if ( TESContainer_IsInventoryItemType(form->member.type) ) /*0x4faf5c*/
              {
                v20 = (TESForm **)*v11++; /*0x4faf6c*/
                *v20 = 0; /*0x4faf71*/
                if ( v18->form ) /*0x4faf77*/
                {
                  if ( v18->form->vtbl->Unk_2A(v18->form) ) /*0x4faf8c*/
                    *v20 = v18->form; /*0x4faf95*/
                  if ( *v20 ) /*0x4faf97*/
                    goto Script_ExtractArgs___ArgLoop_Next; /*0x4faf9a*/
                }
              }
              return 0; /*0x4faf9a*/
            case 4u: /*0x4faf50*/
            case 0x18u: /*0x4faf50*/
            case 0x1Au: /*0x4faf50*/
              if ( (unsigned int)form->member.type - 0x31 > 2 ) /*0x4fafaf*/
                return 0; /*0x4fafaf*/
              v21 = (TESForm **)*v11++; /*0x4fafb5*/
              *v21 = 0; /*0x4fafba*/
              v22 = v18->form; /*0x4fafc0*/
              if ( !v22 ) /*0x4fafc5*/
                return 0; /*0x4fafc5*/
              v23 = (unsigned int)v22->member.type - 0x31 <= 2; /*0x4fafd2*/
              goto LABEL_20; /*0x4fafd2*/
            case 6u: /*0x4faf50*/
              if ( (unsigned int)form->member.type - 0x32 > 1 ) /*0x4faff4*/
                return 0; /*0x4faff4*/
              goto LABEL_62; /*0x4faff4*/
            case 7u: /*0x4faf50*/
              v25 = *v11++; /*0x4fb011*/
              p_vtbl = OblivionDynamicCast( /*0x4fb025*/
                         form,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &SpellItem `RTTI Type Descriptor',
                         0);
              *v25 = p_vtbl; /*0x4fb02f*/
              if ( p_vtbl ) /*0x4fb031*/
                goto Script_ExtractArgs___ArgLoop_Next; /*0x4fb031*/
              v27 = v18->form; /*0x4fb037*/
              if ( v27 ) /*0x4fb03c*/
              {
                if ( v27->member.type == kFormType_Book ) /*0x4fb042*/
                  p_vtbl = &v27->vtbl; /*0x4fb044*/
              }
              *v25 = p_vtbl; /*0x4fb048*/
              if ( p_vtbl ) /*0x4fb04a*/
              {
                if ( p_vtbl[0x19] ) /*0x4fb050*/
                  goto Script_ExtractArgs___ArgLoop_Next; /*0x4fb054*/
              }
              return 0; /*0x4fb054*/
            case 9u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Cell; /*0x4fafff*/
              goto LABEL_61; /*0x4fb003*/
            case 0xBu: /*0x4faf50*/
              v41 = &MagicItem `RTTI Type Descriptor'; /*0x4fb061*/
              goto LABEL_34; /*0x4fb061*/
            case 0xCu: /*0x4faf50*/
              v24 = form->member.type == kFormType_Sound; /*0x4fb08b*/
              goto LABEL_61; /*0x4fb08f*/
            case 0xDu: /*0x4faf50*/
              v24 = form->member.type == kFormType_Dialog; /*0x4fb094*/
              goto LABEL_61; /*0x4fb098*/
            case 0xEu: /*0x4faf50*/
              v24 = form->member.type == kFormType_Quest; /*0x4fb09d*/
              goto LABEL_61; /*0x4fb0a1*/
            case 0xFu: /*0x4faf50*/
              v24 = form->member.type == kFormType_Race; /*0x4fb0a6*/
              goto LABEL_61; /*0x4fb0aa*/
            case 0x10u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Class; /*0x4fb0af*/
              goto LABEL_61; /*0x4fb0b3*/
            case 0x11u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Faction; /*0x4fb0c1*/
              goto LABEL_61; /*0x4fb0c5*/
            case 0x13u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Global; /*0x4fb0ca*/
              goto LABEL_61; /*0x4fb0ce*/
            case 0x14u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Furniture; /*0x4fb0d3*/
              goto LABEL_61; /*0x4fb0d7*/
            case 0x15u: /*0x4faf50*/
              v29 = (TESForm **)*v11++; /*0x4fb0dc*/
              *v29 = 0; /*0x4fb0e1*/
              if ( v18->form ) /*0x4fb0e7*/
              {
                if ( v18->form->vtbl->Unk_2A(v18->form) ) /*0x4fb0fc*/
                  *v29 = v18->form; /*0x4fb105*/
                if ( *v29 ) /*0x4fb107*/
                  goto Script_ExtractArgs___ArgLoop_Next; /*0x4fb10a*/
              }
              return 0; /*0x4fb10a*/
            case 0x19u: /*0x4faf50*/
              v21 = (TESForm **)*v11++; /*0x4fb115*/
              *v21 = 0; /*0x4fb11a*/
              v22 = v18->form; /*0x4fb120*/
              if ( !v22 ) /*0x4fb125*/
                return 0; /*0x4fb125*/
              v23 = (unsigned int)v22->member.type - 0x23 <= 1; /*0x4fb132*/
LABEL_20:
              if ( v23 ) /*0x4fafd5*/
                goto LABEL_21; /*0x4fafd5*/
              return 0; /*0x4fafd5*/
            case 0x1Bu: /*0x4faf50*/
              v24 = form->member.type == kFormType_WorldSpace; /*0x4fb008*/
              goto LABEL_61; /*0x4fb00c*/
            case 0x1Du: /*0x4faf50*/
              v24 = form->member.type == kFormType_Package; /*0x4fb13a*/
              goto LABEL_61; /*0x4fb13e*/
            case 0x1Eu: /*0x4faf50*/
              v24 = form->member.type == kFormType_CombatStyle; /*0x4fb140*/
              goto LABEL_61; /*0x4fb144*/
            case 0x1Fu: /*0x4faf50*/
              v41 = &EffectSetting `RTTI Type Descriptor'; /*0x4fb084*/
LABEL_34:
              v28 = (TESObject **)*v11++; /*0x4fb066*/
              form = (TESObject *)OblivionDynamicCast( /*0x4fb073*/
                                    form,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    v41,
                                    0);
              *v28 = form; /*0x4fb07b*/
              goto LABEL_63; /*0x4fb07d*/
            case 0x20u: /*0x4faf50*/
              v24 = form->member.type == kFormType_BirthSign; /*0x4fb0b8*/
              goto LABEL_61; /*0x4fb0bc*/
            case 0x22u: /*0x4faf50*/
              v24 = form->member.type == kFormType_Weather; /*0x4fb146*/
              goto LABEL_61; /*0x4fb14a*/
            case 0x23u: /*0x4faf50*/
              v24 = form->member.type == kFormType_NPC; /*0x4fb14c*/
              goto LABEL_61; /*0x4fb150*/
            case 0x24u: /*0x4faf50*/
              v21 = (TESForm **)*v11++; /*0x4fb152*/
              *v21 = 0; /*0x4fb157*/
              v22 = v18->form; /*0x4fb15d*/
              if ( !v22 ) /*0x4fb162*/
                return 0; /*0x4fb162*/
              type = v22->member.type; /*0x4fb168*/
              if ( type != 6 && type != 0x23 ) /*0x4fb178*/
                return 0; /*0x4fb178*/
LABEL_21:
              *v21 = v22; /*0x4fafdb*/
              goto Script_ExtractArgs___ArgLoop_Next; /*0x4fafe5*/
            case 0x25u: /*0x4faf50*/
              v24 = form->member.type == kFormType_EffectShader; /*0x4fb183*/
LABEL_61:
              if ( !v24 ) /*0x4fb187*/
                return 0; /*0x4fb187*/
LABEL_62:
              v31 = (TESObject **)*v11++; /*0x4fb18d*/
              *v31 = form; /*0x4fb192*/
LABEL_63:
              if ( form ) /*0x4fb196*/
                goto Script_ExtractArgs___ArgLoop_Next; /*0x4fb196*/
              return 0; /*0x4fb196*/
            default:
              return 0;
          }
        }
      }
    }
  }
  return 0; /*0x4fae8c*/
}
