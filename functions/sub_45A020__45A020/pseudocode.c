void __userpurge sub_45A020(int a1@<esi>, void *a2, float *a3)
{
  Actor *v3; // eax
  Actor *v4; // esi
  MagicTarget *v5; // eax
  TESForm *ActorBaseForm; // eax
  void *v7; // eax
  LowProcess *process; // ecx
  float v10; // [esp+18h] [ebp+4h]

  if ( a2 ) /*0x45a026*/
  {
    if ( a3 ) /*0x45a033*/
    {
      v3 = (Actor *)OblivionDynamicCast( /*0x45a049*/
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &Character `RTTI Type Descriptor',
                      0);
      v4 = v3; /*0x45a04e*/
      if ( !v3 ) /*0x45a055*/
        goto LABEL_9; /*0x45a055*/
      if ( !v3->members.super.process ) /*0x45a05b*/
        goto LABEL_9; /*0x45a05b*/
      v5 = v3->vtbl->super.super.GetMagicTarget((TESObjectREFR *)v3); /*0x45a074*/
      v10 = sub_6A1F30(v5, 0x504D4156); /*0x45a07d*/
      if ( 0.0 == *a3 ) /*0x45a08a*/
        goto LABEL_9; /*0x45a08a*/
      if ( 0.0 == v10 /*0x45a0eb*/
        && (ActorBaseForm = Actor_GetActorBaseForm(v4, 0),
            v7 = OblivionDynamicCast(
                   ActorBaseForm,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                   &TESNPC `RTTI Type Descriptor',
                   0),
            (*(void (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)v7 + 0x134))(v7, 0x45, 0),
            sub_60E2E0(v4, 0.0),
            v4->members.super.process->Unk_17(v4->members.super.process),
            (process = v4->members.super.process) != 0) )
      {
        ((void (__thiscall *)(LowProcess *, int, int))process->SetUnk16C)(process, 1, a1); /*0x45a0f7*/
        MEMORY[0xB33D80] = 1; /*0x45a0f9*/
        v4->members.super.process->Unk_C5(v4->members.super.process); /*0x45a10c*/
        MEMORY[0xB33D80] = 0; /*0x45a10f*/
        FormHeapFree((unsigned int)a3); /*0x45a116*/
      }
      else
      {
LABEL_9:
        FormHeapFree((unsigned int)a3); /*0x45a126*/
      }
    }
  }
}
