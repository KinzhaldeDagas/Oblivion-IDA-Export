Actor *__thiscall sub_676EE0(int this)
{
  Actor *i; // edi
  ActorVtbl *vtbl; // esi
  void *v4; // eax
  Actor *result; // eax
  Actor *j; // esi

  for ( i = ActorList_ReturnHead((ActorList *)(this + 0x68)); i; i = *(Actor **)&i->members.super.super.super.type ) /*0x676ef1*/
  {
    vtbl = i->vtbl; /*0x676ef3*/
    v4 = OblivionDynamicCast( /*0x676f04*/
           i->vtbl,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
           &MagicProjectile `RTTI Type Descriptor',
           0);
    if ( !v4 ) /*0x676f0e*/
    {
      v4 = OblivionDynamicCast( /*0x676f1d*/
             vtbl,
             0,
             (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
             &ArrowProjectile `RTTI Type Descriptor',
             0);
      if ( !v4 ) /*0x676f27*/
        continue; /*0x676f27*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)v4 + 0x8C))(v4, 1); /*0x676f35*/
  }
  result = ActorList_ReturnHead((ActorList *)this); /*0x676f40*/
  for ( j = result; j; j = *(Actor **)&j->members.super.super.super.type ) /*0x676f49*/
  {
    result = (Actor *)OblivionDynamicCast( /*0x676f61*/
                        j->vtbl,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                        &ArrowProjectile `RTTI Type Descriptor',
                        0);
    if ( result ) /*0x676f6b*/
      result = (Actor *)((int (__thiscall *)(Actor *, int))result->vtbl->super.super.super.Unk_23)(result, 1); /*0x676f79*/
  }
  return result; /*0x676f82*/
}
