Actor *__thiscall sub_675F40(int this)
{
  Actor *result; // eax
  Actor *i; // edi
  Actor *vtbl; // esi
  TESForm *ActorBaseForm; // eax

  result = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x675f44*/
  for ( i = result; i; i = *(Actor **)&i->members.super.super.super.type ) /*0x675f4d*/
  {
    if ( !i->vtbl ) /*0x675f50*/
      break; /*0x675f54*/
    result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl); /*0x675f5e*/
    if ( (_BYTE)result ) /*0x675f62*/
    {
      vtbl = (Actor *)i->vtbl; /*0x675f64*/
      if ( i->vtbl ) /*0x675f64*/
      {
        result = (Actor *)((int (__thiscall *)(Actor *, _DWORD))vtbl->vtbl->super.super.IsDead)(vtbl, 0); /*0x675f76*/
        if ( (_BYTE)result ) /*0x675f7a*/
        {
          ActorBaseForm = Actor_GetActorBaseForm(vtbl, 0); /*0x675f80*/
          result = (Actor *)TESActorBase_GetHealth(ActorBaseForm); /*0x675f87*/
          if ( (int)result > 0 ) /*0x675f8e*/
          {
            result = (Actor *)((int (__thiscall *)(Actor *))vtbl->vtbl->super.super.super.Unk_20)(vtbl); /*0x675f9a*/
            if ( !(_BYTE)result ) /*0x675f9e*/
              result = (Actor *)((int (__thiscall *)(LowProcess *, Actor *))vtbl->members.super.process->Unk_E0)( /*0x675fac*/
                                  vtbl->members.super.process,
                                  vtbl);
          }
        }
      }
    }
  }
  return result; /*0x675fb6*/
}
