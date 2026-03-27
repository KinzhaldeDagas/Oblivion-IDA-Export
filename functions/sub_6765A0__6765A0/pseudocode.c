Actor *__thiscall sub_6765A0(int this, int a2)
{
  Actor *result; // eax
  Actor *i; // esi

  result = sub_7616D0((ActorList *)(this + 0x68));
  for ( i = result; i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !i->vtbl )
      break;
    result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl);
    if ( (_BYTE)result )
    {
      result = (Actor *)i->vtbl;
      if ( i->vtbl )
        result = (Actor *)((int (__thiscall *)(LowProcess *, int))result->members.super.process->Unk_6E)(
                            result->members.super.process,
                            a2);
    }
  }
  return result;
}
