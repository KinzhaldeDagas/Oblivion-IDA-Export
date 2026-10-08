char __thiscall sub_6760D0(int this, int a2)
{
  char v2; // bl
  Actor *i; // edi
  ActorVtbl *vtbl; // esi
  int v5; // eax

  v2 = 0; /*0x6760d5*/
  for ( i = ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x6760e0*/
  {
    if ( !i->vtbl ) /*0x6760f0*/
      break; /*0x6760f4*/
    if ( v2 ) /*0x6760fc*/
      break; /*0x6760fc*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x67610a*/
    {
      vtbl = i->vtbl; /*0x676110*/
      if ( i->vtbl ) /*0x676110*/
      {
        if ( Actor_IsNPC((Actor *)i->vtbl) && sub_5E10A0(vtbl, a2) == 3 ) /*0x67612c*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *, int))vtbl->super.super.super.super.InitializeComponent /*0x67613a*/
                + 0xCD))(
                 vtbl,
                 1) )
          {
            if ( (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl) ) /*0x67614a*/
            {
              v5 = (*((int (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl); /*0x67615a*/
              if ( CombatController_GetCurrentTarget(v5) == a2 ) /*0x676165*/
              {
                (*((void (__thiscall **)(ActorVtbl *))vtbl->super.super.super.super.InitializeComponent + 0xCC))(vtbl); /*0x676171*/
                JUMPOUT(0x676175); /*0x676175*/
              }
            }
          }
          v2 = 1; /*0x67617e*/
        }
      }
    }
  }
  return v2; /*0x67618d*/
}
