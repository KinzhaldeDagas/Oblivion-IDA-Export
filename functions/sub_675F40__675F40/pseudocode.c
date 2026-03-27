Actor *__thiscall sub_675F40(int this)
{
  Actor *result; // eax
  Actor *i; // edi
  Actor *vtbl; // esi
  TESForm *ActorBaseForm; // eax

  result = sub_7616D0((ActorList *)(this + 0x68));
  for ( i = result; i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !i->vtbl )
      break;
    result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl);
    if ( (_BYTE)result )
    {
      vtbl = (Actor *)i->vtbl;
      if ( i->vtbl )
      {
        result = (Actor *)((int (__thiscall *)(Actor *, _DWORD))vtbl->vtbl->super.super.IsDead)(vtbl, 0);
        if ( (_BYTE)result )
        {
          ActorBaseForm = Actor_GetActorBaseForm(vtbl, 0);
          result = (Actor *)TESActorBase_GetHealth(ActorBaseForm);
          if ( (int)result > 0 )
          {
            result = (Actor *)((int (__thiscall *)(Actor *))vtbl->vtbl->super.super.super.Unk_20)(vtbl);
            if ( !(_BYTE)result )
              result = (Actor *)((int (__thiscall *)(LowProcess *, Actor *))vtbl->members.super.process->Unk_E0)(
                                  vtbl->members.super.process,
                                  vtbl);
          }
        }
      }
    }
  }
  return result;
}
