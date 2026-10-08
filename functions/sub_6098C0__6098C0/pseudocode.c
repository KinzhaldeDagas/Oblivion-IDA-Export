// Collision state 4: reconstruct fallback settling against an optional Actor target, inherit its proxy collision group when possible, otherwise use the shared settled group, then apply saved direction/placement to the collision object.
char __thiscall ArrowProjectile_ResolveFallbackImpactState4(ArrowProjectile *this, void *collisionObject)
{
  NiNode *v3; // eax
  MobileObject *v4; // eax
  MobileObject *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  this->super.vtbl->Unk_72((MobileObject *)this); /*0x6098cc*/
  v3 = this->super.vtbl->super.GetNiNode(this); /*0x6098de*/
  sub_88D070(v3, 1, 1, 0); /*0x6098e1*/
  v4 = (MobileObject *)OblivionDynamicCast( /*0x6098fb*/
                         this->unk05C->ninode,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
  v5 = v4; /*0x609900*/
  if ( v4 && MobileObject_GetCharProxy(v4) ) /*0x60990b*/
  {
    v6 = *((_DWORD *)MobileObject_GetCharProxy(v5) + 0xD9); /*0x60991b*/
    if ( v6 ) /*0x609923*/
    {
      v7 = *(_DWORD *)(v6 + 8); /*0x609925*/
      if ( v7 && (v8 = v7 + 0x14) != 0 ) /*0x60992f*/
        v9 = HIWORD(*(_DWORD *)(v8 + 0x1C)); /*0x609934*/
      else
        v9 = 0; /*0x60993b*/
    }
    else
    {
      v9 = 0; /*0x609940*/
    }
  }
  else
  {
    v9 = unk_B3B7D4; /*0x609944*/
    if ( !unk_B3B7D4 ) /*0x609944*/
    {
      v9 = (unsigned __int16)(dword_B2EB3C + 1); /*0x609955*/
      dword_B2EB3C = v9; /*0x60995a*/
      if ( !v9 ) /*0x60995f*/
      {
        v9 = 0xA; /*0x609961*/
        dword_B2EB3C = 0xA; /*0x609966*/
      }
      unk_B3B7D4 = v9; /*0x60996b*/
    }
  }
  v10 = (v9 << 0x10) | 4; /*0x609977*/
  if ( collisionObject ) /*0x60997c*/
  {
    v11 = *((_DWORD *)collisionObject + 2); /*0x60997e*/
    if ( v11 ) /*0x609983*/
    {
      v12 = v11 + 0x14; /*0x609985*/
      if ( v12 ) /*0x609988*/
        *(_DWORD *)(v12 + 0x1C) = v10; /*0x60998a*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x80))(collisionObject); /*0x609997*/
  sub_4D9960((int *)collisionObject, &this->unk05C->unk00[7]); /*0x6099a2*/
  v13 = sub_47FA60(*((int **)collisionObject + 2)); /*0x6099ab*/
  if ( v13 ) /*0x6099b7*/
    *(_WORD *)(v13 + 0xC) |= 0xCu; /*0x6099b9*/
  return 1; /*0x6099b5*/
}
