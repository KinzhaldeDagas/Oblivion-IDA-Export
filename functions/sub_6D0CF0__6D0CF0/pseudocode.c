// If target +0x30 exists and weightsDirty +0x58 is set, applies current morph weights, marks geometry data dirty (flags +0x2E bit 0), optionally invokes the target update when morphFlags +0x3C bit 0 is set, then clears weightsDirty. Semantically void; prior return value was undefined EAX residue on no-op paths.
void __thiscall NiGeomMorpherController_CommitDirtyMorphWeights(NiGeomMorpherController *this)
{
  int v2; // ecx

  if ( this->super.members.m_pTarget ) /*0x6d0cf3*/
  {
    if ( this->weightsDirty ) /*0x6d0cf9*/
    {
      NiGeomMorpherController_ApplyMorphWeights(this); /*0x6d0cff*/
      v2 = *(_DWORD *)&this->super.members.m_pTarget->members.children.capacity; /*0x6d0d07*/
      *(_WORD *)(v2 + 0x2E) |= 1u; /*0x6d0d12*/
      if ( (this->morphFlags & 1) != 0 )        // Test NiGeomMorpherController.morphFlags +0x3C bit 0. If set, CommitDirtyMorphWeights invokes the target geometry update after applying weights. No native timing flag is read here. /*0x6d0d19*/
      {
        if ( *(_DWORD *)(v2 + 0x20) ) /*0x6d0d1b*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x54))(v2); /*0x6d0d26*/
      }
      this->weightsDirty = 0; /*0x6d0d28*/
    }
  }
}
