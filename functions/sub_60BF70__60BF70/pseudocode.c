// Post-load resolver for an embedded arrow projectile. Stores a pending load context when collision attachment cannot yet be resolved, otherwise reconstructs the saved collision-object association.
void __thiscall ArrowProjectile_PostLoadResolveEmbeddedCollision(
        ArrowProjectile *this,
        void *postLoadContext,
        int arg1)
{
  char v3; // bp
  double v4; // st5
  double v5; // st6
  ArrowProjectile_CollisionData *v7; // eax
  NiNode *v8; // ecx
  const char *m_pcName; // ecx
  float y; // ecx
  ArrowProjectile_CollisionData *v11; // eax
  ArrowProjectile_CollisionData *unk05C; // eax
  float v13; // ecx
  __int16 v14; // bx
  __int16 v15; // bp
  NiNode *ninode; // eax
  int v17; // eax
  Atmosphere *v18; // eax
  ArrowProjectile_CollisionData *v19; // eax
  NiNode *v20; // ecx
  float v21; // ebx
  ArrowProjectile_CollisionData *v22; // eax
  char postLoadContexta; // [esp+10h] [ebp+4h]

  this->super.super.super.flags &= ~0x200000u; /*0x60bf73*/
  if ( this->super.super.niNode ) /*0x60bf7d*/
  {
    ArrowProjectile_EnsureCharacterProxy(this, (TESObjectREFRVtbl *)this->shooter, 1.0); /*0x60c03e*/
    MobilObject_PostLinkModifiedForm((int)this, v3, v4, v5, 1.0, (int)postLoadContext, arg1); /*0x60c04f*/
    unk05C = this->unk05C; /*0x60c054*/
    if ( unk05C ) /*0x60c059*/
    {
      v13 = unk05C->unk00[0]; /*0x60c05f*/
      if ( LODWORD(unk05C->unk00[0]) == 1 || v13 == 0.0 ) /*0x60c068*/
      {
        if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) >= 0x20u ) /*0x60c079*/
        {
          v14 = HIWORD(unk05C->unk2C[0]); /*0x60c07f*/
          v15 = LOWORD(unk05C->unk2C[0]); /*0x60c084*/
          unk05C->unk2C[0] = 0.0; /*0x60c088*/
          ninode = this->unk05C->ninode; /*0x60c08e*/
          postLoadContexta = LODWORD(v13) == 0; /*0x60c098*/
          if ( ninode ) /*0x60c09c*/
          {
            if ( v14 == (unsigned __int16)sub_480C50( /*0x60c0b5*/
                                            (_WORD *)LODWORD(ninode->members.super.m_localTransform.rot.data[1][0]),
                                            postLoadContexta,
                                            postLoadContexta,
                                            1) )
            {
              if ( v15 != (__int16)0xFFFF ) /*0x60c0df*/
              {
                v18 = (Atmosphere *)sub_480E90( /*0x60c0f3*/
                                      (_WORD *)LODWORD(this->unk05C->ninode->members.super.m_localTransform.rot.data[1][0]),
                                      v15,
                                      postLoadContexta,
                                      postLoadContexta,
                                      1);
                if ( v18 ) /*0x60c0fd*/
                  LODWORD(this->unk05C->unk2C[0]) = Shared_GetPointerAtOffset08(v18); /*0x60c109*/
              }
            }
            else
            {
              v17 = ((int (__thiscall *)(NiNode *, NiInterpController *))this->unk05C->ninode->vtbl[1].super.super.Unk_0E)( /*0x60c0c9*/
                      this->unk05C->ninode,
                      this->unk05C->ninode->members.super.super.m_controller);
              PrintError("Collision object count has changed on object %s %08", v17); /*0x60c0d1*/
            }
          }
        }
        if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x20u ) /*0x60c118*/
        {
          v19 = this->unk05C; /*0x60c11a*/
          v20 = v19->ninode; /*0x60c11d*/
          v21 = v19->unk2C[0]; /*0x60c122*/
          if ( v20 ) /*0x60c125*/
            LODWORD(this->unk05C->unk2C[0]) = NiObjectNET_LookupObjectByName( /*0x60c137*/
                                                (_DWORD *)LODWORD(v20->members.super.m_localTransform.rot.data[1][0]),
                                                (char *)LODWORD(v19->unk2C[0]));
          else
            v19->unk2C[0] = 0.0; /*0x60c13c*/
          MemoryHeap_Free_checked((void *)LODWORD(v21)); /*0x60c145*/
        }
        v22 = this->unk05C; /*0x60c14a*/
        if ( !LODWORD(v22->unk2C[0]) ) /*0x60c14d*/
          LODWORD(v22->unk00[0]) = 3; /*0x60c153*/
      }
    }
    sub_4593D0(g_TESSaveLoadGame, (int)this); /*0x60c160*/
  }
  else
  {
    v7 = this->unk05C; /*0x60bf86*/
    if ( !v7 ) /*0x60bf8b*/
      goto LABEL_14; /*0x60bf8b*/
    v8 = v7->ninode; /*0x60bf91*/
    if ( v8 ) /*0x60bf96*/
    {
      m_pcName = v8->members.super.super.m_pcName; /*0x60bf98*/
      if ( ((unsigned __int16)m_pcName & 0x800) != 0 && ((unsigned __int8)m_pcName & 0x20) != 0 ) /*0x60bfab*/
      {
        ((void (__thiscall *)(ArrowProjectile *, int))this->super.vtbl->super.super.Unk_23)(this, 1); /*0x60bfb9*/
        this->unk05C->unk2C[0] = 0.0; /*0x60bfbe*/
        return; /*0x60bfc3*/
      }
    }
    if ( v7->ninode /*0x60bff9*/
      && ((unsigned __int8 (__thiscall *)(NiNode *))v7->ninode->vtbl[2].super.GetObjectByName)(v7->ninode)
      && (y = this->unk05C->ninode->members.super.m_localTransform.pos.y, y != 0.0)
      && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(y) + 8))(COERCE_FLOAT(LODWORD(y))) > 1 )
    {
      ((void (__thiscall *)(ArrowProjectile *, int))this->super.vtbl->super.super.Unk_23)(this, 1); /*0x60c007*/
      v11 = this->unk05C; /*0x60c009*/
      if ( v11 ) /*0x60c00e*/
        v11->ninode = 0; /*0x60c010*/
      this->unk05C->unk2C[0] = 0.0; /*0x60c016*/
    }
    else
    {
LABEL_14:
      LOBYTE(this->unk094) = 1;                 // ArrowProjectile +0x94 = embedded-collision post-load fixup pending. Set when PostLoad runs before the projectile NiNode/collision link is resolvable; +0x98 retains the retry context. /*0x60c023*/
      this->unk098 = (UInt32)postLoadContext;   // ArrowProjectile +0x98 retains the PostLoad link context while +0x94 is pending; lifecycle update passes it back to vtable slot +0x5C for a deferred retry. /*0x60c02a*/
    }
  }
}
