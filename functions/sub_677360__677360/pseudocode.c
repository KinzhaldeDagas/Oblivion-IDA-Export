char __thiscall sub_677360(int this)
{
  Actor *v1; // eax
  Actor *i; // edi
  TESObjectREFR *vtbl; // esi

  v1 = sub_7616D0((ActorList *)(this + 0x68));
  for ( i = v1; i; i = *(Actor **)&i->members.super.super.super.type )
  {
    vtbl = (TESObjectREFR *)i->vtbl;
    if ( i->vtbl )
    {
      LOBYTE(v1) = vtbl->vtbl->IsActor((TESObjectREFR *)i->vtbl);
      if ( (_BYTE)v1 )
      {
        LOBYTE(v1) = vtbl->vtbl->IsDead(vtbl, 0);
        if ( !(_BYTE)v1 )
          LOBYTE(v1) = sub_5EB370(vtbl);
      }
    }
  }
  return (char)v1;
}
