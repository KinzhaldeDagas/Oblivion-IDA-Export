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

  MagicProjectile::MagicProjectile(&a1->super, a2, a3); /*0x696acb*/
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicBoltProjectile::`vftable'{for `MagicBoltProjectile'}; /*0x696ad2*/
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBoltProjectile::`vftable'{for `TESChildCell'}; /*0x696ad8*/
  a1->boltShaderProperty = 0; /*0x696ae3*/
  a1->niNode088 = 0; /*0x696ae6*/
  a1->unk08C = 0; /*0x696aec*/
  a1->unk090 = 0; /*0x696af2*/
  a1->niNode094 = 0; /*0x696af8*/
  v4 = InterlockedDecrement; /*0x696b04*/
  a1->super.speed = flt_A3765C; /*0x696b0a*/
  a1->unk080 = 0; /*0x696b0d*/
  a1->unk084 = 0; /*0x696b13*/
  a1->unk098 = 0; /*0x696b19*/
  a1->unk09C = 0; /*0x696b1f*/
  boltShaderProperty = a1->boltShaderProperty; /*0x696b25*/
  if ( boltShaderProperty ) /*0x696b2f*/
  {
    if ( !v4((volatile LONG *)boltShaderProperty + 1) ) /*0x696b35*/
      (**(void (__thiscall ***)(BoltShaderProperty *, int))boltShaderProperty)(boltShaderProperty, 1); /*0x696b47*/
    a1->boltShaderProperty = 0; /*0x696b49*/
  }
  niNode088 = a1->niNode088; /*0x696b4c*/
  if ( niNode088 ) /*0x696b54*/
  {
    if ( !v4((volatile LONG *)&niNode088->members) ) /*0x696b5a*/
      niNode088->vtbl->super.super.super.Destructor((NiRefObject *)niNode088, 1); /*0x696b6c*/
    a1->niNode088 = 0; /*0x696b6e*/
  }
  unk08C = a1->unk08C; /*0x696b74*/
  if ( unk08C ) /*0x696b7c*/
  {
    if ( !v4((volatile LONG *)(unk08C + 4)) ) /*0x696b82*/
      (**(void (__thiscall ***)(UInt32, int))unk08C)(unk08C, 1); /*0x696b94*/
    a1->unk08C = 0; /*0x696b96*/
  }
  unk090 = a1->unk090; /*0x696b9c*/
  if ( unk090 ) /*0x696ba4*/
  {
    if ( !v4((volatile LONG *)(unk090 + 4)) ) /*0x696baa*/
      (**(void (__thiscall ***)(UInt32, int))unk090)(unk090, 1); /*0x696bbc*/
    a1->unk090 = 0; /*0x696bbe*/
  }
  *(float *)&a1->unk0A0 = 0.0; /*0x696bc8*/
  return a1; /*0x696bce*/
}
