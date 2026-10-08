ActorVtbl *__thiscall sub_675220(int this, int a2)
{
  ActorVtbl *v2; // ebx
  Actor *i; // esi
  ActorVtbl *vtbl; // edi
  int v5; // eax

  v2 = 0; /*0x675225*/
  for ( i = ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x675230*/
  {
    if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x67523e*/
      break; /*0x675241*/
    if ( v2 ) /*0x675245*/
      break; /*0x675245*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x675251*/
    {
      vtbl = i->vtbl; /*0x675257*/
      if ( i->vtbl ) /*0x675257*/
      {
        if ( Actor_IsNPC((Actor *)i->vtbl) ) /*0x67525f*/
        {
          v5 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0x5C))(vtbl); /*0x675272*/
          if ( v5 ) /*0x675276*/
          {
            if ( a2 == v5 ) /*0x67527a*/
              v2 = vtbl; /*0x67527c*/
          }
        }
      }
    }
  }
  return v2; /*0x675287*/
}
