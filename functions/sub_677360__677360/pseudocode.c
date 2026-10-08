char __thiscall sub_677360(int this)
{
  Actor *v1; // eax
  Actor *i; // edi
  TESObjectREFR *vtbl; // esi

  v1 = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x677364*/
  for ( i = v1; i; i = *(Actor **)&i->members.super.super.super.type ) /*0x67736d*/
  {
    vtbl = (TESObjectREFR *)i->vtbl; /*0x677370*/
    if ( i->vtbl ) /*0x677370*/
    {
      LOBYTE(v1) = vtbl->vtbl->IsActor((TESObjectREFR *)i->vtbl); /*0x677380*/
      if ( (_BYTE)v1 ) /*0x677384*/
      {
        LOBYTE(v1) = vtbl->vtbl->IsDead(vtbl, 0); /*0x677392*/
        if ( !(_BYTE)v1 ) /*0x677396*/
          LOBYTE(v1) = sub_5EB370(vtbl); /*0x67739a*/
      }
    }
  }
  return (char)v1; /*0x6773a7*/
}
