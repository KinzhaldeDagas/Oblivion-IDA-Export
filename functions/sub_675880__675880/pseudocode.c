void __usercall sub_675880(int a1@<ecx>, double a2@<st2>, double a3@<st1>)
{
  Actor *i; // esi
  Actor *vtbl; // edi

  for ( i = sub_7616D0((ActorList *)(a1 + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !i->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
    {
      vtbl = (Actor *)i->vtbl;
      if ( i->vtbl )
      {
        ((void (__thiscall *)(Actor *, int))vtbl->vtbl->super.super.Unk_60)(vtbl, 1);
        Actor_ProcessAction(vtbl, a2, a3, 1.0, 1.0, 1.0);
      }
    }
  }
}
