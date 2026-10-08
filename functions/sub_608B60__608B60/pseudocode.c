// ArrowProjectile complete destructor; releases projectile-owned state, then invokes MobileObject destruction and returns this.
ArrowProjectile *__thiscall ArrowProjectile_Destroy(ArrowProjectile *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  ArrowProjectile_CollisionData *unk05C; // ecx
  int v6; // eax
  int v7; // ecx
  ArrowProjectile_CollisionData *v8; // eax
  NiNode *ninode; // eax
  float y; // ecx
  __int128 v12; // [esp+14h] [ebp-30h] BYREF
  unsigned int v13; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  this->super.vtbl = (MobileObjectVtbl *)&ArrowProjectile::`vftable'{for `ArrowProjectile'}; /*0x608b9b*/
  this->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&ArrowProjectile::`vftable'{for `TESChildCell'}; /*0x608ba1*/
  --g_liveArrowProjectileCount;                 // ArrowProjectile destruction decrements g_liveArrowProjectileCount, balancing initialization/construction accounting. /*0x608ba8*/
  v13 = 0; /*0x608bb5*/
  BSSimpleList_Remove((int *)&qword_B3BB2C[0x89], (int)this); /*0x608bbd*/
  if ( this->super.super.niNode ) /*0x608bc2*/
  {
    unk05C = this->unk05C; /*0x608bc9*/
    if ( unk05C ) /*0x608bce*/
    {
      if ( LODWORD(unk05C->unk00[0]) == 1 ) /*0x608bd3*/
      {
        v6 = NiAVObject_FindBhkCollisionObjectRecursive((int)this->super.super.niNode); /*0x608bd6*/
        if ( v6 ) /*0x608be0*/
        {
          v7 = *(_DWORD *)(v6 + 0x10); /*0x608be2*/
          if ( v7 ) /*0x608be7*/
          {
            (*(void (__thiscall **)(int, __int128 *))(*(_DWORD *)v7 + 0xA8))(v7, &v12); /*0x608bf6*/
            sub_535DD0(&v12, LODWORD(this->unk05C->unk2C[0])); /*0x608c04*/
          }
        }
      }
    }
  }
  if ( !LOBYTE(this->unk094) )                  // Destructor skips live target/collision detach notification while +0x94 says the embedded collision link is still an unresolved post-load fixup. /*0x608c0c*/
  {
    v8 = this->unk05C; /*0x608c15*/
    if ( v8 ) /*0x608c1a*/
    {
      if ( !LODWORD(v8->unk00[0]) ) /*0x608c1c*/
      {
        if ( v8->ninode ) /*0x608c21*/
        {
          if ( ((unsigned __int8 (__thiscall *)(NiNode *))v8->ninode->vtbl[2].super.GetObjectByName)(v8->ninode) ) /*0x608c34*/
          {
            ninode = this->unk05C->ninode; /*0x608c3d*/
            if ( ninode ) /*0x608c42*/
            {
              y = ninode->members.super.m_localTransform.pos.y; /*0x608c44*/
              if ( y != 0.0 ) /*0x608c49*/
                (*(void (__thiscall **)(float, ArrowProjectile *))(*(_DWORD *)LODWORD(y) + 0x4FC))( /*0x608c54*/
                  COERCE_FLOAT(LODWORD(y)),
                  this);
            }
          }
        }
      }
    }
  }
  FormHeapFree((unsigned int)this->unk05C); /*0x608c5a*/
  TESObjectREFR_Set3D((TESObjectREFR *)this, v1, v2, v3, 0); /*0x608c66*/
  if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x608c71*/
    sub_65A050((ActorVtbl *)this, 0); /*0x608c7e*/
  v13 = 0xFFFFFFFF; /*0x608c85*/
  return (ArrowProjectile *)MobileObject_destr((TESForm *)this, (char)&savedregs, v1, v2, v3); /*0x608c92*/
}
