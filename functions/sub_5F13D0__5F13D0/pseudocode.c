int __usercall sub_5F13D0@<eax>(Actor *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  MagicCaster *p_magicCaster; // ebx
  LowProcess *process; // ecx
  int v8; // eax
  unsigned int *p_dispositionModifier; // edi
  LowProcess *v10; // ecx
  BSShaderAccumulator *inited; // eax
  int v13; // [esp+0h] [ebp-2Ch]

  p_magicCaster = &a1->members.magicCaster;
  a1->vtbl = (ActorVtbl *)&Actor::`vftable'{for `Actor'};
  a1->members.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&Actor::`vftable'{for `TESChildCell'};
  a1->members.magicCaster.vtbl = (MagicCasterVtbl *)&Actor::`vftable'{for `MagicCaster'};
  a1->members.magicTarget.vtbl = (MagicTargetVtbl *)&Actor::`vftable'{for `MagicTarget'};
  if ( (a1->members.super.super.super.flags & 0x4000) == 0 )
  {
    sub_65DEF0(TESDataHandler_g_PlayerRef, (int)a1);
    process = a1->members.super.process;
    if ( process )
    {
      v8 = ((int (__thiscall *)(LowProcess *))process->Unk_6D)(process);
      if ( v8 )
        *(_BYTE *)(v8 + 0x10) = 1;
    }
    a2 = (_BYTE)a1 - 0x5C;
    p_dispositionModifier = (unsigned int *)&a1->members.dispositionModifier;
    if ( a1 != (Actor *)0xFFFFFF5C )
    {
      do
      {
        if ( !*p_dispositionModifier )
          break;
        FormHeapFree(*p_dispositionModifier);
        p_dispositionModifier = (unsigned int *)p_dispositionModifier[1];
      }
      while ( p_dispositionModifier );
    }
    BSSimpleList_Clear(&a1->members.dispositionModifier);
    sub_642B40(&unk_B3BD7C, (int)a1);
    sub_5EAE70(a1, (int)p_magicCaster, (int)p_dispositionModifier, v13);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      if ( dword_B3BF80 )
        sub_6826D0((_DWORD *)dword_B3BF80, a1);
      sub_65A050(a1, 1);
      sub_679C10(&ActorProcessManager_ptr, a1);
      sub_67BF00(&dword_B3BDB0, (int)a1);
      sub_676F90(&ActorProcessManager_ptr, a1);
      v10 = a1->members.super.process;
      if ( v10 )
      {
        if ( v10->GetProcessLevel(v10) == 1 || !a1->members.super.process->GetProcessLevel(a1->members.super.process) )
        {
          inited = InitBSShaderAccumulator();
          if ( inited )
            sub_7AD1E0(inited, a1->members.super.super.super.refID);
          sub_5E4FC0(a1);
        }
        sub_5F0750(a1, a3);
      }
    }
    sub_674E10(&ActorProcessManager_ptr, (TESForm *)a1);
    sub_5E7B90(a1);
    AVCollection_ClearArrayAndList(&a1->members.avModifiers.avList.entry);
    TESObjectREFR_Set3D((TESObjectREFR *)a1, a3, a4, a5, 0);
  }
  AVCollection_destr(&a1->members.avModifiers.avList.entry);
  MagicTarget_destr(&a1->members.magicTarget.vtbl);
  MagicCaster_destr(p_magicCaster);
  return MobileObject_destr((TESForm *)a1, a2, a3, a4, a5);
}
