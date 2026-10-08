void __thiscall sub_677A00(int this)
{
  Actor *i; // esi
  Actor *j; // esi

  for ( i = ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x677a10*/
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x677a18*/
      break; /*0x677a1b*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x677a27*/
    {
      if ( i->vtbl ) /*0x677a2d*/
        sub_5E4FC0((Actor *)i->vtbl); /*0x677a33*/
    }
  }
  for ( j = ActorList_ReturnHead((ActorList *)this); j; j = *(Actor **)&j->members.super.super.super.type ) /*0x677a4a*/
  {
    if ( !*(_DWORD *)&j->members.super.super.super.type && !j->vtbl ) /*0x677a56*/
      break; /*0x677a59*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) ) /*0x677a65*/
    {
      if ( j->vtbl ) /*0x677a6b*/
        sub_5E4FC0((Actor *)j->vtbl); /*0x677a71*/
    }
  }
  if ( reference ) /*0x677a7d*/
    sub_5E4FC0((Actor *)reference); /*0x677a89*/
}
