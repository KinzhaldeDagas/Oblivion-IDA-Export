void __thiscall sub_677A00(int this)
{
  Actor *i; // esi
  Actor *j; // esi

  for ( i = sub_7616D0((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
    {
      if ( i->vtbl )
        sub_5E4FC0((Actor *)i->vtbl);
    }
  }
  for ( j = sub_7616D0((ActorList *)this); j; j = *(Actor **)&j->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&j->members.super.super.super.type && !j->vtbl )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))j->vtbl->super.super.super.super.InitializeComponent + 0x64))(j->vtbl) )
    {
      if ( j->vtbl )
        sub_5E4FC0((Actor *)j->vtbl);
    }
  }
  if ( TESDataHandler_g_PlayerRef )
    sub_5E4FC0((Actor *)TESDataHandler_g_PlayerRef);
}
