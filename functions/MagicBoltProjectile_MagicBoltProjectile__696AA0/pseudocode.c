MagicBoltProjectile *__usercall MagicBoltProjectile::MagicBoltProjectile@<eax>(
        MagicBoltProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>)
{
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  BoltShaderProperty *boltShaderProperty; // ebx
  NiNode *niNode088; // ebx
  UInt32 unk08C; // ebx
  UInt32 unk090; // ebx

  MagicProjectile::MagicProjectile(&a1->super, a2, a3);
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBoltProjectile::`vftable'{for `TESChildCell'};
  a1->boltShaderProperty = 0;
  a1->niNode088 = 0;
  a1->unk08C = 0;
  a1->unk090 = 0;
  a1->niNode094 = 0;
  v4 = InterlockedDecrement;
  a1->super.speed = flt_A3765C;
  a1->unk080 = 0;
  a1->unk084 = 0;
  a1->unk098 = 0;
  a1->unk09C = 0;
  boltShaderProperty = a1->boltShaderProperty;
  if ( boltShaderProperty )
  {
    if ( !v4((volatile LONG *)boltShaderProperty + 1) )
      (**(void (__thiscall ***)(BoltShaderProperty *, int))boltShaderProperty)(boltShaderProperty, 1);
    a1->boltShaderProperty = 0;
  }
  niNode088 = a1->niNode088;
  if ( niNode088 )
  {
    if ( !v4((volatile LONG *)&niNode088->members) )
      niNode088->vtbl->super.super.super.Destructor((NiRefObject *)niNode088, 1);
    a1->niNode088 = 0;
  }
  unk08C = a1->unk08C;
  if ( unk08C )
  {
    if ( !v4((volatile LONG *)(unk08C + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk08C)(unk08C, 1);
    a1->unk08C = 0;
  }
  unk090 = a1->unk090;
  if ( unk090 )
  {
    if ( !v4((volatile LONG *)(unk090 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk090)(unk090, 1);
    a1->unk090 = 0;
  }
  *(float *)&a1->unk0A0 = 0.0;
  return a1;
}
