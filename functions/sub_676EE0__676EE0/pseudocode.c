Actor *__thiscall sub_676EE0(int this)
{
  Actor *i; // edi
  ActorVtbl *vtbl; // esi
  void *v4; // eax
  Actor *result; // eax
  Actor *j; // esi

  for ( i = sub_7616D0((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type )
  {
    vtbl = i->vtbl;
    v4 = OblivionDynamicCast(
           i->vtbl,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &MagicProjectile `RTTI Type Descriptor',
           0);
    if ( !v4 )
    {
      v4 = OblivionDynamicCast(
             vtbl,
             0,
             (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
             &ArrowProjectile `RTTI Type Descriptor',
             0);
      if ( !v4 )
        continue;
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)v4 + 0x8C))(v4, 1);
  }
  result = sub_7616D0((ActorList *)this);
  for ( j = result; j; j = *(Actor **)&j->members.super.super.super.type )
  {
    result = (Actor *)OblivionDynamicCast(
                        j->vtbl,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                        &ArrowProjectile `RTTI Type Descriptor',
                        0);
    if ( result )
      result = (Actor *)((int (__thiscall *)(Actor *, int))result->vtbl->super.super.super.Unk_23)(result, 1);
  }
  return result;
}
