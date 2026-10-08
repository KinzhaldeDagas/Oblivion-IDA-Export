// Validates projectile collision data and dispatches persisted collision state 0..4 to the corresponding reconstruction helper. Missing node collision data is reported and the stale state record is freed.
char __thiscall ArrowProjectile_ResolveCollisionState(ArrowProjectile *this)
{
  NiAVObject *v2; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  void *v5; // eax
  char v6; // al

  if ( !this->unk05C ) /*0x60be9a*/
    return 0; /*0x60be9a*/
  if ( !this->super.vtbl->super.GetNiNode(this) /*0x60bec1*/
    || (v2 = (NiAVObject *)this->super.vtbl->super.GetNiNode(this),
        (BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v2)) == 0) )
  {
    PrintError("No collision data was found on this arrow"); /*0x60bec8*/
    FormHeapFree((unsigned int)this->unk05C); /*0x60bed1*/
    this->unk05C = 0; /*0x60bed9*/
    return 0; /*0x60bee4*/
  }
  v5 = (void *)BhkCollisionObjectRecursive[4]; /*0x60beed*/
  switch ( LODWORD(this->unk05C->unk00[0]) ) /*0x60bef2*/
  {                                             // Dispatch persisted projectile collision state 0..4 to distinct actor-attachment, reference/world-collision, placement and impulse reconstruction paths.
    case 0: /*0x60bef2*/
      v6 = ArrowProjectile_ResolveActorEmbedState0(this, v5);// State 0 resolver: embed/reparent projectile visual beneath recorded Actor attachment node. /*0x60befc*/
      break; /*0x60bf01*/
    case 1: /*0x60bef2*/
      v6 = ArrowProjectile_ResolveReferenceCollisionState1(this, v5);// State 1 resolver: rebuild collision relationship for a recorded non-Actor reference/node. /*0x60bf06*/
      break; /*0x60bf0b*/
    case 2: /*0x60bef2*/
      v6 = ArrowProjectile_ResolveStaticPlacementState2(this, v5);// State 2 resolver: restore static/world placement and collision filter without target attachment. /*0x60bf10*/
      break; /*0x60bf15*/
    case 3: /*0x60bef2*/
      v6 = ArrowProjectile_ResolveFreeImpactState3(this, v5);// State 3 resolver: restore free impact placement and apply collision-resolved impulse/orientation. /*0x60bf1a*/
      break; /*0x60bf1f*/
    case 4: /*0x60bef2*/
      v6 = ArrowProjectile_ResolveFallbackImpactState4(this, v5);// State 4 resolver: fallback target-aware or free settling collision reconstruction. /*0x60bf24*/
      break; /*0x60bf24*/
    default:
      JUMPOUT(0x60BF2F); /*0x60bf2f*/
  }
  if ( v6 ) /*0x60bf2d*/
    JUMPOUT(0x60BF4D); /*0x60bf4d*/
  return def_60BEF2(0, (int)this); /*0x60bee0*/
}
