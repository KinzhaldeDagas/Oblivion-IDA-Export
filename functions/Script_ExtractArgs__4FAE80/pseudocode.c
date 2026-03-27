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
  if ( !a1 )
    return 0;
  v9 = *a3;
  v10 = *(_WORD *)((char *)a2 + *a3);
  HIDWORD(v42) = v7;
  va_copy((va_list)v11, va);
  v45 = (unsigned __int16)v10;
  *a3 = v9 + 2;
  v43 = 0;
  if ( v10 <= 0 )
    return 1;
  v12 = a3;
  while ( 1 )
  {
    p_typeID = &a1[v43].typeID;
    if ( *(_BYTE *)(8 * *p_typeID + 0xB0A54D) )
      break;
    switch ( *p_typeID )
    {
      case 0u:
        v32 = *(_WORD *)((char *)a2 + *v12);
        v33 = *v12 + 2;
        *v12 = v33;
        if ( (a6->super.member.flags & 8) != 0 )
        {
          v34 = *v11;
          LODWORD(v42) = v32;
          ++v11;
          memcpy(v34, (char *)a2 + v33, v42);
          *((_BYTE *)v34 + v32) = 0;
          v12 = a3;
        }
        *v12 += v32;
        break;
      case 1u:
      case 0x17u:
        v44 = 0.0;
        if ( !ExecuteScriptInstruction_((int)&v44, (UInt8 *)a2, v12, (TESForm *)a4, a5, a6, l, 1) )
          return 0;
        if ( (a6->super.member.flags & 8) != 0 )
        {
          ++v11;
          *(_DWORD *)v11[0xFFFFFFFF] = Double_To_SInt32(v44);
        }
        break;
      case 2u:
        v46 = 0.0;
        if ( !ExecuteScriptInstruction_((int)&v46, (UInt8 *)a2, v12, (TESForm *)a4, a5, a6, l, 1) )
          return 0;
        if ( (a6->super.member.flags & 8) != 0 )
        {
          v35 = (float *)*v11;
          *(float *)&v44 = v46;
          ++v11;
          *v35 = *(float *)&v44;
        }
        break;
      case 5u:
      case 0xAu:
      case 0x12u:
      case 0x1Cu:
        v39 = *(_WORD *)((char *)a2 + *v12);
        *v12 += 2;
        if ( (a6->super.member.flags & 8) != 0 )
        {
          v40 = *v11++;
          *v40 = v39;
        }
        break;
      case 8u:
        if ( (a6->super.member.flags & 8) != 0 )
        {
          v36 = *v11++;
          *v36 = *((_BYTE *)a2 + *v12);
        }
        ++*v12;
        break;
      case 0x21u:
        v37 = *(_WORD *)((char *)a2 + *v12);
        *v12 += 2;
        if ( (a6->super.member.flags & 8) != 0 )
        {
          v38 = *v11++;
          *v38 = v37;
        }
        break;
      default:
        return 0;
    }
Script_ExtractArgs___ArgLoop_Next:
    if ( ++v43 >= (__int16)v45 )
      return 1;
  }
  v14 = *((_BYTE *)a2 + *v12);
  v15 = *v12 + 1;
  *v12 = v15;
  if ( v14 == 0x72 )
  {
    v16 = *(_WORD *)((char *)a2 + v15);
    *v12 = v15 + 2;
    RefVariableByIndex = Script_GetRefVariableByIndex(a6, v16, l);
    v18 = RefVariableByIndex;
    if ( (a6->super.member.flags & kFormFlags_Linked) != 0 )
    {
      if ( RefVariableByIndex )
      {
        form = (TESObject *)RefVariableByIndex->form;
        if ( form )
        {
          switch ( *p_typeID )
          {
            case 3u:
              if ( TESContainer_IsInventoryItemType(form->member.type) )
              {
                v20 = (TESForm **)*v11++;
                *v20 = 0;
                if ( v18->form )
                {
                  if ( v18->form->vtbl->Unk_2A(v18->form) )
                    *v20 = v18->form;
                  if ( *v20 )
                    goto Script_ExtractArgs___ArgLoop_Next;
                }
              }
              return 0;
            case 4u:
            case 0x18u:
            case 0x1Au:
              if ( (unsigned int)form->member.type - 0x31 > 2 )
                return 0;
              v21 = (TESForm **)*v11++;
              *v21 = 0;
              v22 = v18->form;
              if ( !v22 )
                return 0;
              v23 = (unsigned int)v22->member.type - 0x31 <= 2;
              goto LABEL_20;
            case 6u:
              if ( (unsigned int)form->member.type - 0x32 > 1 )
                return 0;
              goto LABEL_62;
            case 7u:
              v25 = *v11++;
              p_vtbl = OblivionDynamicCast(
                         form,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &SpellItem `RTTI Type Descriptor',
                         0);
              *v25 = p_vtbl;
              if ( p_vtbl )
                goto Script_ExtractArgs___ArgLoop_Next;
              v27 = v18->form;
              if ( v27 )
              {
                if ( v27->member.type == kFormType_Book )
                  p_vtbl = &v27->vtbl;
              }
              *v25 = p_vtbl;
              if ( p_vtbl )
              {
                if ( p_vtbl[0x19] )
                  goto Script_ExtractArgs___ArgLoop_Next;
              }
              return 0;
            case 9u:
              v24 = form->member.type == kFormType_Cell;
              goto LABEL_61;
            case 0xBu:
              v41 = &MagicItem `RTTI Type Descriptor';
              goto LABEL_34;
            case 0xCu:
              v24 = form->member.type == kFormType_Sound;
              goto LABEL_61;
            case 0xDu:
              v24 = form->member.type == kFormType_Dialog;
              goto LABEL_61;
            case 0xEu:
              v24 = form->member.type == kFormType_Quest;
              goto LABEL_61;
            case 0xFu:
              v24 = form->member.type == kFormType_Race;
              goto LABEL_61;
            case 0x10u:
              v24 = form->member.type == kFormType_Class;
              goto LABEL_61;
            case 0x11u:
              v24 = form->member.type == kFormType_Faction;
              goto LABEL_61;
            case 0x13u:
              v24 = form->member.type == kFormType_Global;
              goto LABEL_61;
            case 0x14u:
              v24 = form->member.type == kFormType_Furniture;
              goto LABEL_61;
            case 0x15u:
              v29 = (TESForm **)*v11++;
              *v29 = 0;
              if ( v18->form )
              {
                if ( v18->form->vtbl->Unk_2A(v18->form) )
                  *v29 = v18->form;
                if ( *v29 )
                  goto Script_ExtractArgs___ArgLoop_Next;
              }
              return 0;
            case 0x19u:
              v21 = (TESForm **)*v11++;
              *v21 = 0;
              v22 = v18->form;
              if ( !v22 )
                return 0;
              v23 = (unsigned int)v22->member.type - 0x23 <= 1;
LABEL_20:
              if ( v23 )
                goto LABEL_21;
              return 0;
            case 0x1Bu:
              v24 = form->member.type == kFormType_WorldSpace;
              goto LABEL_61;
            case 0x1Du:
              v24 = form->member.type == kFormType_Package;
              goto LABEL_61;
            case 0x1Eu:
              v24 = form->member.type == kFormType_CombatStyle;
              goto LABEL_61;
            case 0x1Fu:
              v41 = &EffectSetting `RTTI Type Descriptor';
LABEL_34:
              v28 = (TESObject **)*v11++;
              form = (TESObject *)OblivionDynamicCast(
                                    form,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    v41,
                                    0);
              *v28 = form;
              goto LABEL_63;
            case 0x20u:
              v24 = form->member.type == kFormType_BirthSign;
              goto LABEL_61;
            case 0x22u:
              v24 = form->member.type == kFormType_Weather;
              goto LABEL_61;
            case 0x23u:
              v24 = form->member.type == kFormType_NPC;
              goto LABEL_61;
            case 0x24u:
              v21 = (TESForm **)*v11++;
              *v21 = 0;
              v22 = v18->form;
              if ( !v22 )
                return 0;
              type = v22->member.type;
              if ( type != 6 && type != 0x23 )
                return 0;
LABEL_21:
              *v21 = v22;
              goto Script_ExtractArgs___ArgLoop_Next;
            case 0x25u:
              v24 = form->member.type == kFormType_EffectShader;
LABEL_61:
              if ( !v24 )
                return 0;
LABEL_62:
              v31 = (TESObject **)*v11++;
              *v31 = form;
LABEL_63:
              if ( form )
                goto Script_ExtractArgs___ArgLoop_Next;
              return 0;
            default:
              return 0;
          }
        }
      }
    }
  }
  return 0;
}
