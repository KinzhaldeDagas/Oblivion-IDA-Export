int __thiscall sub_43D770(volatile LONG *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  int *v5; // edi
  IOTask *v6; // edi
  int v7; // eax
  IOTask *v8; // ebp
  bool v9; // zf
  TESForm *NthForm; // edi
  UInt32 unk10; // eax
  unsigned int v12; // eax
  unsigned __int8 v13; // bl
  signed int v14; // eax
  IOTask *v15; // edi
  unsigned __int8 v16; // bl
  int *BipedModel; // eax
  IOTask *v18; // ebx
  unsigned __int8 v19; // bl
  int *v20; // eax
  IOTask *v21; // edi
  int Level; // eax
  TESForm::FormType type; // al
  _DWORD *v24; // edi
  unsigned __int8 v25; // bl
  signed int v26; // eax
  int v27; // eax
  int (__thiscall *v28)(volatile LONG *); // eax
  signed int v30; // [esp-10h] [ebp-5Ch]
  signed int v31; // [esp-10h] [ebp-5Ch]
  char v32; // [esp+17h] [ebp-35h]
  int v33; // [esp+18h] [ebp-34h]
  IOTask *v34; // [esp+1Ch] [ebp-30h] BYREF
  IOTask *v35; // [esp+20h] [ebp-2Ch] BYREF
  IOTask *v36; // [esp+24h] [ebp-28h] BYREF
  IOTask *v37; // [esp+28h] [ebp-24h] BYREF
  IOTask *v38; // [esp+2Ch] [ebp-20h] BYREF
  int v39[4]; // [esp+30h] [ebp-1Ch] BYREF
  unsigned int v40; // [esp+48h] [ebp-4h]

  v2 = *((_DWORD *)this + 9);
  LOWORD(v3) = *(_WORD *)(v2 + 0x20);
  v32 = 0;
  if ( (_WORD)v3 == 0xFFFF )
    v3 = strlen(*(const char **)(v2 + 0x1C));
  else
    v3 = (unsigned __int16)v3;
  if ( v3 )
  {
    if ( !EffectSetting_IsUnkA0Negative((_DWORD *)v2) )
    {
      v4 = *((_DWORD *)this + 9);
      if ( v4 )
        v5 = (int *)(v4 + 0x18);
      else
        v5 = 0;
      sub_43B280((int **)ModelLoaderPtr, &v34, v5, BYTE2(*((_DWORD *)this + 4)), this, 0, 0, 1, 0);
      if ( v34 )
      {
        v6 = v34;
        if ( !InterlockedDecrement((volatile LONG *)&v34->members.unk08) )
          (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1);
      }
      v32 = 1;
    }
  }
  sub_415EB0(*((int **)this + 9));
  v7 = *((_DWORD *)this + 8);
  if ( v7 )
    v33 = v7 + 0xC;
  else
    v33 = 0;
  if ( (*(_DWORD *)(v33 + 8) || *(_DWORD *)(v33 + 4)) && v33 )
  {
    while ( 1 )
    {
      v8 = *(IOTask **)(*(_DWORD *)(v33 + 4) + 0x1C);
      v9 = (v8[3].members.unk10 & 0x70000) == 0;
      v34 = v8;
      if ( v9 || v32 && EffectSetting_IsUnkA4Negative(v8) )
        goto LABEL_54;
      NthForm = TESForm_LookupByFormID((UInt32)v8[4].vtbl);
      if ( NthForm )
      {
        unk10 = v8[3].members.unk10;
        if ( (unk10 & 0x10000) != 0 )
        {
          if ( NthForm->member.type == kFormType_Weapon )
          {
            LOWORD(v12) = NthForm[2].member.flags;
            if ( (_WORD)v12 == 0xFFFF )
              v12 = strlen(*(const char **)&NthForm[2].member.type);
            else
              v12 = (unsigned __int16)v12;
            if ( v12 )
            {
              v13 = BYTE2(*((_DWORD *)this + 4));
              v14 = sub_4A2A30((int)NthForm);
              sub_43B280((int **)ModelLoaderPtr, &v35, (int *)&NthForm[2], v13, this, v14, 0, 1, 0);
              if ( v35 )
              {
                v15 = v35;
                if ( !InterlockedDecrement((volatile LONG *)&v35->members.unk08) )
                  (*(void (__thiscall **)(IOTask *, int))v15->vtbl)(v15, 1);
              }
            }
          }
          goto LABEL_49;
        }
        if ( (unk10 & 0x20000) != 0 )
        {
          if ( NthForm->member.type == kFormType_Armor )
          {
            v16 = BYTE2(*((_DWORD *)this + 4));
            v30 = sub_4A2A30((int)NthForm);
            BipedModel = (int *)TESBipedModelForm_GetBipedModel(&NthForm[4].member, 0);
            sub_43B280((int **)ModelLoaderPtr, &v36, BipedModel, v16, this, v30, 0, 1, 0);
            if ( v36 )
            {
              v18 = v36;
              if ( !InterlockedDecrement((volatile LONG *)&v36->members.unk08) )
                (*(void (__thiscall **)(IOTask *, int))v18->vtbl)(v18, 1);
            }
            v19 = BYTE2(*((_DWORD *)this + 4));
            v31 = sub_4A2A30((int)NthForm);
            v20 = (int *)TESBipedModelForm_GetBipedModel(&NthForm[4].member, 1);
            sub_43B280((int **)ModelLoaderPtr, &v37, v20, v19, this, v31, 0, 1, 0);
            if ( v37 )
            {
              v21 = v37;
              if ( !InterlockedDecrement((volatile LONG *)&v37->members.unk08) )
                (*(void (__thiscall **)(IOTask *, int))v21->vtbl)(v21, 1);
            }
            goto LABEL_48;
          }
        }
        else
        {
          if ( (unk10 & 0x40000) == 0 )
            goto LABEL_49;
          if ( NthForm->member.type == kFormType_LeveledCreature )
          {
            TESContainer_constr((TESContainer *)v39);
            v40 = 0;
            Level = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, 1);
            TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, Level, (int)v39);
            NthForm = (TESForm *)TESContainer_GetNthForm(v39, 0);
            v40 = 0xFFFFFFFF;
            TESContainer_destr(v39);
          }
          if ( !NthForm )
            goto LABEL_49;
          type = NthForm->member.type;
          if ( type == kFormType_NPC )
          {
            v24 = sub_5234F0((char *)NthForm, 1, 1);
            sub_43BC20((int *)ModelLoaderPtr, (int)v24, 0, BYTE2(*((_DWORD *)this + 4)), this, 0);
            BSSimpleList_Clear(v24);
            FormHeapFree((unsigned int)v24);
          }
          else if ( type == kFormType_Creature )
          {
            sub_43D000((int *)ModelLoaderPtr, &NthForm[7].member, BYTE2(*((_DWORD *)this + 4)), this, 0, 1, 1);
            v25 = BYTE2(*((_DWORD *)this + 4));
            v26 = sub_4A2A30((int)NthForm);
            sub_43B280((int **)ModelLoaderPtr, &v38, (int *)&NthForm[7].member, v25, this, v26, 1, 1, 0);
            sub_4BDDC0(&v38);
            sub_43CDE0((int *)ModelLoaderPtr, &NthForm[7].member, BYTE2(*((_DWORD *)this + 4)), this, 0);
LABEL_48:
            v8 = v34;
          }
        }
      }
LABEL_49:
      if ( !EffectSetting_IsUnkA4Positive(v8)
        && !EffectSetting_IsUnkA4Negative(v8)
        && (v8[3].members.unk10 & 0x40000) != 0 )
      {
        ++dword_B33518;
      }
      sub_415E50((int *)v8);
LABEL_54:
      v27 = *(_DWORD *)(v33 + 8);
      if ( v27 )
      {
        v33 = v27 - 4;
        if ( v27 != 4 )
          continue;
      }
      break;
    }
  }
  v28 = *(int (__thiscall **)(volatile LONG *))(*this + 0x28);
  *((_DWORD *)this + 3) = 5;
  return v28(this);
}
