ActorVtbl *__thiscall sub_675220(int this, int a2)
{
  ActorVtbl *v2; // ebx
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  int v5; // eax

  v2 = 0;
  for ( i = sub_7616D0((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
      break;
    if ( v2 )
      break;
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) )
    {
      vtbl = i->vtbl;
      if ( i->vtbl )
      {
        if ( Actor_IsNPC((Actor *)i->vtbl) )
        {
          v5 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x5C))(vtbl);
          if ( v5 )
          {
            if ( a2 == v5 )
              v2 = vtbl;
          }
        }
      }
    }
  }
  return v2;
}
