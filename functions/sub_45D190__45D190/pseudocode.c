// Verified explored boundary: manager+64 list of post-load forms, RTTI ArrowProjectile, resolves collision state then clears/frees list nodes. Does not drain deferred deletion list+30.
void __thiscall sub_45D190(_DWORD *this)
{
  _DWORD *v1; // edi
  void **v2; // ebx
  ArrowProjectile *v3; // eax
  ArrowProjectile *v4; // esi
  ArrowProjectile_CollisionData *unk05C; // eax
  NiNode *ninode; // eax
  NiAVObject *v7; // eax
  int v8; // esi

  v1 = this + 0x19; /*0x45d193*/
  v2 = (void **)(this + 0x19); /*0x45d196*/
  if ( this != (_DWORD *)0xFFFFFF9C ) /*0x45d19a*/
  {
    do /*0x45d1f3*/
    {
      if ( *v2 ) /*0x45d1a0*/
      {
        v3 = (ArrowProjectile *)OblivionDynamicCast( /*0x45d1b5*/
                                  *v2,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  &ArrowProjectile `RTTI Type Descriptor',
                                  0);
        v4 = v3; /*0x45d1ba*/
        if ( v3 ) /*0x45d1c1*/
        {
          unk05C = v3->unk05C; /*0x45d1c3*/
          if ( unk05C ) /*0x45d1c8*/
          {
            ninode = unk05C->ninode; /*0x45d1ca*/
            if ( ninode ) /*0x45d1cf*/
            {
              v7 = (NiAVObject *)LODWORD(ninode->members.super.m_localTransform.rot.data[1][0]); /*0x45d1d1*/
              if ( v7 ) /*0x45d1d6*/
                NiAVObject_UpdateNiAVObject(v7, 0.0, 0); /*0x45d1e2*/
            }
          }
          ArrowProjectile_ResolveCollisionState(v4); /*0x45d1e9*/
        }
      }
      v2 = (void **)v2[1]; /*0x45d1ee*/
    }
    while ( v2 ); /*0x45d1f3*/
  }
  if ( v1[1] ) /*0x45d1f5*/
  {
    do /*0x45d214*/
    {
      v8 = *(_DWORD *)(v1[1] + 4); /*0x45d203*/
      FormHeapFree(v1[1]); /*0x45d207*/
      v1[1] = v8; /*0x45d211*/
    }
    while ( v8 ); /*0x45d214*/
  }
  *v1 = 0; /*0x45d216*/
}
