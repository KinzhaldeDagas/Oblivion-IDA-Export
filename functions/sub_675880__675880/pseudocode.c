void __thiscall sub_675880(int this)
{
  Actor *i; // esi
  Actor *vtbl; // edi

  for ( i = ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x67588d*/
  {
    if ( !i->vtbl ) /*0x675890*/
      break; /*0x675894*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x67589e*/
    {
      vtbl = (Actor *)i->vtbl; /*0x6758a4*/
      if ( i->vtbl ) /*0x6758a4*/
      {
        ((void (__thiscall *)(Actor *, int))vtbl->vtbl->super.super.Unk_60)(vtbl, 1); /*0x6758b6*/
        Actor_ProcessAction(vtbl, 1.0, 1.0); /*0x6758c6*/
      }
    }
  }
}
