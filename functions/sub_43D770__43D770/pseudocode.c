int __thiscall sub_43D770(volatile LONG *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // eax
  int *v5; // edi
  IOTask *v6; // edi
  int v7; // eax
  int *v8; // ebp
  TESForm *NthForm; // edi
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int8 v12; // bl
  signed int v13; // eax
  IOTask *v14; // edi
  unsigned __int8 v15; // bl
  int *BipedModel; // eax
  IOTask *v17; // ebx
  unsigned __int8 v18; // bl
  int *v19; // eax
  IOTask *v20; // edi
  int v21; // eax
  TESForm::FormType type; // al
  _DWORD *v23; // edi
  unsigned __int8 v24; // bl
  signed int v25; // eax
  int v26; // eax
  int (__cdecl *v27)(int *); // eax
  signed int v29; // [esp-18h] [ebp-64h]
  signed int v30; // [esp-14h] [ebp-60h]
  int *v31; // [esp-8h] [ebp-54h]
  int *v32; // [esp+10h] [ebp-3Ch]
  int v33; // [esp+14h] [ebp-38h]
  IOTask *v34; // [esp+1Ch] [ebp-30h] BYREF
  IOTask *v35; // [esp+20h] [ebp-2Ch] BYREF
  IOTask *v36; // [esp+24h] [ebp-28h] BYREF
  int v37; // [esp+28h] [ebp-24h] BYREF
  int v38[8]; // [esp+2Ch] [ebp-20h] BYREF

  v2 = *((_DWORD *)this + 9); /*0x43d799*/
  LOWORD(v3) = *(_WORD *)(v2 + 0x20); /*0x43d79c*/
  if ( (_WORD)v3 == 0xFFFF ) /*0x43d7a9*/
    v3 = strlen(*(const char **)(v2 + 0x1C)); /*0x43d7ae*/
  else
    v3 = (unsigned __int16)v3; /*0x43d7be*/
  if ( v3 ) /*0x43d7c3*/
  {
    if ( !EffectSetting_IsUnkA0Negative((_DWORD *)v2) ) /*0x43d7c5*/
    {
      v4 = *((_DWORD *)this + 9); /*0x43d7ce*/
      if ( v4 ) /*0x43d7d3*/
        v5 = (int *)(v4 + 0x18); /*0x43d7d5*/
      else
        v5 = 0; /*0x43d7da*/
      sub_43B280((int **)MEMORY[0xB33A1C], &v34, v5, BYTE2(*((_DWORD *)this + 4)), this, 0, 0, 1, 0); /*0x43d802*/
      if ( v34 ) /*0x43d80d*/
      {
        v6 = v34; /*0x43d80f*/
        if ( !InterlockedDecrement((volatile LONG *)&v34->members.unk08) ) /*0x43d815*/
          (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1); /*0x43d82b*/
      }
      HIBYTE(v32) = 1; /*0x43d82d*/
    }
  }
  sub_415EB0(*((int **)this + 9)); /*0x43d835*/
  v7 = *((_DWORD *)this + 8); /*0x43d83a*/
  if ( v7 ) /*0x43d83f*/
    v33 = v7 + 0xC; /*0x43d844*/
  else
    v33 = 0; /*0x43d84a*/
  if ( (*(_DWORD *)(v33 + 8) || *(_DWORD *)(v33 + 4)) && v33 ) /*0x43d868*/
  {
    while ( 1 ) /*0x43d875*/
    {
      v8 = *(int **)(*(_DWORD *)(v33 + 4) + 0x1C); /*0x43d875*/
      if ( (v8[0x16] & 0x70000) == 0 || HIBYTE(v32) && EffectSetting_IsUnkA4Negative(v8) ) /*0x43d892*/
        goto LABEL_54; /*0x43d899*/
      NthForm = TESForm_LookupByFormID(v8[0x18]); /*0x43d8a8*/
      if ( NthForm ) /*0x43d8af*/
      {
        v10 = v8[0x16]; /*0x43d8b5*/
        if ( (v10 & 0x10000) != 0 ) /*0x43d8c0*/
        {
          if ( NthForm->member.type == kFormType_Weapon ) /*0x43d8ca*/
          {
            LOWORD(v11) = NthForm[2].member.flags; /*0x43d8d0*/
            if ( (_WORD)v11 == 0xFFFF ) /*0x43d8d8*/
              v11 = strlen(*(const char **)&NthForm[2].member.type); /*0x43d8dd*/
            else
              v11 = (unsigned __int16)v11; /*0x43d8ed*/
            if ( v11 ) /*0x43d8f2*/
            {
              v12 = BYTE2(*((_DWORD *)this + 4)); /*0x43d90c*/
              v13 = sub_4A2A30((int)NthForm); /*0x43d90f*/
              sub_43B280((int **)MEMORY[0xB33A1C], &v34, (int *)&NthForm[2], v12, this, v13, 0, 1, 0); /*0x43d929*/
              if ( v34 ) /*0x43d934*/
              {
                v14 = v34; /*0x43d93a*/
                if ( !InterlockedDecrement((volatile LONG *)&v34->members.unk08) ) /*0x43d940*/
                  (*(void (__thiscall **)(IOTask *, int))v14->vtbl)(v14, 1); /*0x43d95e*/
              }
            }
          }
          goto LABEL_49; /*0x43d960*/
        }
        if ( (v10 & 0x20000) != 0 ) /*0x43d96d*/
        {
          if ( NthForm->member.type == kFormType_Armor ) /*0x43d977*/
          {
            v15 = BYTE2(*((_DWORD *)this + 4)); /*0x43d991*/
            v30 = sub_4A2A30((int)NthForm); /*0x43d99f*/
            BipedModel = (int *)TESBipedModelForm_GetBipedModel((const char **)&NthForm[4].member, 0); /*0x43d9a6*/
            sub_43B280((int **)MEMORY[0xB33A1C], &v35, BipedModel, v15, this, v30, 0, 1, 0); /*0x43d9b7*/
            if ( v35 ) /*0x43d9c2*/
            {
              v17 = v35; /*0x43d9c4*/
              if ( !InterlockedDecrement((volatile LONG *)&v35->members.unk08) ) /*0x43d9ca*/
                (*(void (__thiscall **)(IOTask *, int))v17->vtbl)(v17, 1); /*0x43d9e0*/
            }
            v18 = BYTE2(*((_DWORD *)this + 4)); /*0x43d9f6*/
            v29 = sub_4A2A30((int)NthForm); /*0x43da01*/
            v19 = (int *)TESBipedModelForm_GetBipedModel((const char **)&NthForm[4].member, 1); /*0x43da08*/
            sub_43B280((int **)MEMORY[0xB33A1C], &v35, v19, v18, this, v29, 0, 1, 0); /*0x43da19*/
            if ( v35 ) /*0x43da24*/
            {
              v20 = v35; /*0x43da2a*/
              if ( !InterlockedDecrement((volatile LONG *)&v35->members.unk08) ) /*0x43da30*/
                (*(void (__thiscall **)(IOTask *, int))v20->vtbl)(v20, 1); /*0x43da4e*/
            }
            goto LABEL_48; /*0x43da50*/
          }
        }
        else
        {
          if ( (v10 & 0x40000) == 0 ) /*0x43da5a*/
            goto LABEL_49; /*0x43da5a*/
          if ( NthForm->member.type == kFormType_LeveledCreature ) /*0x43da64*/
          {
            TESContainer_constr((TESContainer *)v38); /*0x43da6a*/
            v31 = v38; /*0x43da73*/
            v38[6] = 0; /*0x43da7c*/
            LOWORD(v21) = Actor_GetLevel((Actor *)reference); /*0x43da84*/
            TESLeveledList_CalcLeveledForm(&NthForm[1].member.refID, v21, 1); /*0x43da8d*/
            NthForm = (TESForm *)TESContainer_GetNthForm(&v37, 0); /*0x43daa1*/
            v38[5] = 0xFFFFFFFF; /*0x43daa3*/
            TESContainer_destr(&v37); /*0x43daab*/
          }
          if ( !NthForm ) /*0x43dab2*/
            goto LABEL_49; /*0x43dab2*/
          type = NthForm->member.type; /*0x43dab8*/
          if ( type == kFormType_NPC ) /*0x43dabd*/
          {
            v23 = sub_5234F0((char *)NthForm, 1, 1); /*0x43dacf*/
            sub_43BC20((int *)MEMORY[0xB33A1C], (int)v23, 0, BYTE2(*((_DWORD *)this + 4)), this, 0); /*0x43dae9*/
            BSSimpleList_Clear(v23); /*0x43daf0*/
            FormHeapFree((unsigned int)v23); /*0x43daf6*/
          }
          else if ( type == kFormType_Creature ) /*0x43db05*/
          {
            sub_43D000((int *)MEMORY[0xB33A1C], &NthForm[7].member, BYTE2(*((_DWORD *)this + 4)), this, 0, 1, 1); /*0x43db30*/
            v24 = BYTE2(*((_DWORD *)this + 4)); /*0x43db49*/
            v25 = sub_4A2A30((int)NthForm); /*0x43db4c*/
            sub_43B280((int **)MEMORY[0xB33A1C], &v36, (int *)&NthForm[7].member, v24, this, v25, 1, 1, 0); /*0x43db63*/
            sub_4BDDC0((int *)&v36); /*0x43db6c*/
            sub_43CDE0((int *)MEMORY[0xB33A1C], &NthForm[7].member, BYTE2(*((_DWORD *)this + 4)), this, 0); /*0x43db8c*/
LABEL_48:
            v8 = v32; /*0x43db91*/
          }
        }
      }
LABEL_49:
      if ( !EffectSetting_IsUnkA4Positive(v8) && !EffectSetting_IsUnkA4Negative(v8) && (v8[0x16] & 0x40000) != 0 ) /*0x43dbb3*/
        ++unk_B33518; /*0x43dbb5*/
      sub_415E50(v8); /*0x43dbbe*/
LABEL_54:
      v26 = v32[2]; /*0x43dbc3*/
      if ( v26 ) /*0x43dbcc*/
      {
        v32 = (int *)(v26 - 4); /*0x43dbd1*/
        if ( v26 != 4 ) /*0x43dbd5*/
          continue; /*0x43dbd5*/
      }
      break; /*0x43dbd5*/
    }
  }
  v27 = *(int (__cdecl **)(int *))(*this + 0x28); /*0x43dbdb*/
  *((_DWORD *)this + 3) = 5; /*0x43dbe2*/
  return v27(v31); /*0x43dbeb*/
}
