char __thiscall sub_6760D0(int this, int a2)
{
  char v2; // bl
  Actor *i; // edi
  ActorVtbl *vtbl; // esi
  int v5; // eax

  v2 = 0;
  for ( i = sub_7616D0((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !i->vtbl )
      break;
    if ( v2 )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
    {
      vtbl = i->vtbl;
      if ( i->vtbl )
      {
        if ( Actor_IsNPC((Actor *)i->vtbl) && sub_5E10A0(vtbl, a2) == 3 )
        {
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent
                + 0xCD))(
                 vtbl,
                 1) )
          {
            if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) )
            {
              v5 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl);
              if ( sub_6135F0(v5) == a2 )
              {
                (*((void (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl);
                JUMPOUT(0x676175);
              }
            }
          }
          v2 = 1;
        }
      }
    }
  }
  return v2;
}
