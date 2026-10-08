Actor *__thiscall sub_6765A0(int this, int a2)
{
  Actor *result; // eax
  Actor *i; // esi

  result = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x6765a4*/
  for ( i = result; i; i = *(Actor **)&i->members.super.super.super.type ) /*0x6765ad*/
  {
    if ( !i->vtbl ) /*0x6765b4*/
      break; /*0x6765b8*/
    result = (Actor *)(*((int (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl); /*0x6765c2*/
    if ( (_BYTE)result ) /*0x6765c6*/
    {
      result = (Actor *)i->vtbl; /*0x6765c8*/
      if ( i->vtbl ) /*0x6765c8*/
        result = (Actor *)((int (__thiscall *)(LowProcess *, int))result->members.super.process->Unk_6E)( /*0x6765da*/
                            result->members.super.process,
                            a2);
    }
  }
  return result; /*0x6765e4*/
}
