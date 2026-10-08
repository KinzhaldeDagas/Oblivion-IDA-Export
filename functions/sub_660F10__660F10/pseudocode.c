char __stdcall sub_660F10(Actor *a1, char a2)
{
  int v2; // eax
  int v3; // esi
  PlayerCharacter *form; // ebp
  TargetData *v5; // ecx
  ObjectType v6; // ebx
  PlayerCharacter *v7; // eax
  PlayerCharacter *v8; // ecx
  PlayerCharacter *v9; // eax
  char v11; // al
  TargetData *v12; // ecx
  ObjectType v13; // ebx
  ObjectType v14; // esi

  if ( a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) /*0x660f57*/
    || (a1->members.super.super.super.flags & 0x800) != 0
    || a1->vtbl->super.super.HasFatigue((TESObjectREFR *)a1)
    || Actor::GetDeadState(a1) == 5 )
  {
    return 0; /*0x661070*/
  }
  a1->members.super.process->Unk_06(a1->members.super.process, (UInt32)a1, 1); /*0x660f6b*/
  v2 = sub_5E03A0(a1); /*0x660f6f*/
  v3 = v2; /*0x660f79*/
  if ( a2 ) /*0x660f7b*/
  {
    form = 0; /*0x660f81*/
    if ( v2 ) /*0x660f85*/
    {
      v5 = *(TargetData **)(v2 + 0x28); /*0x660f87*/
      if ( v5 ) /*0x660f8c*/
      {
        form = (PlayerCharacter *)sub_569E60(v5).form; /*0x660f93*/
        if ( !form ) /*0x660f97*/
        {
          v6.form = sub_569E70(*(TargetData **)(v3 + 0x28)).form; /*0x660fa1*/
          if ( v6.objectCode ) /*0x660fa5*/
          {
            if ( (TESForm *)v6.objectCode == reference->vtbl->super.super.super.GetBaseForm(reference) ) /*0x660fb9*/
              form = reference; /*0x660fbb*/
          }
        }
      }
      v7 = (PlayerCharacter *)sub_566D00((char **)v3, (int)a1); /*0x660fc4*/
      v8 = reference; /*0x660fc9*/
      if ( v7 == reference ) /*0x660fd1*/
      {
LABEL_18:
        if ( form != v8 ) /*0x660ffe*/
          return 1; /*0x661006*/
        return !sub_5E6BC0(a1); /*0x660ffe*/
      }
    }
    else
    {
      v8 = reference; /*0x660fd5*/
    }
    if ( form == v8 /*0x660ff4*/
      || (v9 = (PlayerCharacter *)a1->members.super.process->GetUnk02C(a1->members.super.process),
          v8 = reference,
          v9 == reference) )
    {
      if ( *(_BYTE *)(v3 + 0x20) != 9 ) /*0x660ffa*/
        goto LABEL_18; /*0x660ffa*/
    }
  }
  else if ( v2 ) /*0x66100b*/
  {
    v11 = *(_BYTE *)(v2 + 0x20); /*0x66100d*/
    if ( v11 == 1 || v11 == 7 ) /*0x661016*/
    {
      v12 = *(TargetData **)(v3 + 0x28); /*0x661018*/
      if ( v12 ) /*0x66101d*/
      {
        v13.form = sub_569E60(v12).form; /*0x661024*/
        if ( !v13.objectCode ) /*0x661028*/
        {
          v14.form = sub_569E70(*(TargetData **)(v3 + 0x28)).form; /*0x661032*/
          if ( v14.objectCode ) /*0x661036*/
          {
            if ( (TESForm *)v14.objectCode == reference->vtbl->super.super.super.GetBaseForm(reference) ) /*0x66104a*/
              return !sub_5E6BC0((_DWORD **)a1); /*0x66104a*/
          }
        }
        if ( (PlayerCharacter *)v13.form == reference ) /*0x661052*/
          return !sub_5E6BC0((_DWORD **)a1); /*0x661064*/
      }
    }
  }
  return 0; /*0x661005*/
}
