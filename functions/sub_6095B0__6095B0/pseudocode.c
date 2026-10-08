// Collision state 3: restore free-impact placement, configure collision layer/group, derive impulse and orientation from saved impact direction and projectile speed, apply the impulse, and mark collision geometry active.
char __thiscall ArrowProjectile_ResolveFreeImpactState3(ArrowProjectile *this, void *collisionObject)
{
  float *v3; // edi
  NiNode *v4; // eax
  NiAVObject *v5; // eax
  NiNode *v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  double v12; // rt0
  ArrowProjectile_CollisionData *unk05C; // eax
  double v14; // rt0
  NiNode *v15; // eax
  double v16; // st7
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // eax
  int v18; // eax
  NiTransform *v19; // eax
  NiAVObject *v20; // eax
  _WORD *BhkCollisionObjectRecursive; // eax
  float v23; // [esp+10h] [ebp-64h]
  float v24; // [esp+14h] [ebp-60h] BYREF
  float v25; // [esp+18h] [ebp-5Ch]
  float v26; // [esp+1Ch] [ebp-58h]
  NiTransform a2; // [esp+20h] [ebp-54h] BYREF
  float collisionObjectb; // [esp+78h] [ebp+4h]
  float collisionObjectc; // [esp+78h] [ebp+4h]
  float collisionObjecta; // [esp+78h] [ebp+4h]

  this->super.vtbl->Unk_72((MobileObject *)this); /*0x6095bf*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x6095c7*/
  {
    v3 = &this->unk05C->unk00[1]; /*0x6095dd*/
    v4 = this->super.vtbl->super.GetNiNode(this); /*0x6095e0*/
    v4->members.super.m_localTransform.pos.x = *v3; /*0x6095e6*/
    v4->members.super.m_localTransform.pos.y = v3[1]; /*0x6095ec*/
    v4->members.super.m_localTransform.pos.z = v3[2]; /*0x6095f2*/
    v5 = (NiAVObject *)this->super.vtbl->super.GetNiNode(this); /*0x609605*/
    NiAVObject_UpdateNiAVObject(v5, 0.0, 0); /*0x609609*/
  }
  v6 = this->super.vtbl->super.GetNiNode(this); /*0x60961e*/
  sub_88D070(v6, 1, 1, 0); /*0x609621*/
  v7 = unk_B3B7D4; /*0x609626*/
  if ( !unk_B3B7D4 ) /*0x609626*/
  {
    v7 = (unsigned __int16)(dword_B2EB3C + 1); /*0x60963a*/
    dword_B2EB3C = v7; /*0x60963f*/
    if ( !v7 ) /*0x609644*/
    {
      v7 = 0xA; /*0x609646*/
      dword_B2EB3C = 0xA; /*0x60964b*/
    }
    unk_B3B7D4 = v7; /*0x609650*/
  }
  v9 = (v7 << 0x10) | 4; /*0x60965c*/
  if ( collisionObject ) /*0x609661*/
  {
    v10 = *((_DWORD *)collisionObject + 2); /*0x609663*/
    if ( v10 ) /*0x609668*/
    {
      v11 = v10 + 0x14; /*0x60966a*/
      if ( v11 ) /*0x60966d*/
        *(_DWORD *)(v11 + 0x1C) = v9; /*0x60966f*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x80))(collisionObject); /*0x60967c*/
  if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x609684*/
  {
    v12 = dbl_A3D360; /*0x6096a4*/
    v24 = this->unk088 * v12; /*0x6096a6*/
    v25 = this->unk08C * v12; /*0x6096b2*/
    v26 = v12 * this->unk090; /*0x6096bc*/
    NiPoint3_NormalizeApproximateInPlace(&v24); /*0x6096c0*/
    NiPoint3_NormalizeApproximateInPlace(&this->unk05C->unk00[4]); /*0x6096cc*/
    unk05C = this->unk05C; /*0x6096d1*/
    collisionObjectb = unk05C->unk00[6] * v26 + unk05C->unk00[4] * v24 + unk05C->unk00[5] * v25; /*0x609700*/
    a2.rot.data[1][0] = unk05C->unk00[4] * collisionObjectb; /*0x609711*/
    a2.rot.data[1][1] = unk05C->unk00[5] * collisionObjectb; /*0x60971a*/
    a2.rot.data[1][2] = collisionObjectb * unk05C->unk00[6]; /*0x609721*/
    a2.rot.data[2][0] = a2.rot.data[1][0] - v24; /*0x60972b*/
    a2.rot.data[2][1] = a2.rot.data[1][1] - v25; /*0x609735*/
    a2.rot.data[2][2] = a2.rot.data[1][2] - v26; /*0x60973f*/
    v14 = dbl_A3D0C0; /*0x60974f*/
    a2.rot.data[1][0] = a2.rot.data[2][0] * v14; /*0x609751*/
    a2.rot.data[1][1] = a2.rot.data[2][1] * v14; /*0x60975b*/
    a2.rot.data[1][2] = v14 * a2.rot.data[2][2]; /*0x609763*/
    v24 = v24 + a2.rot.data[1][0]; /*0x60976f*/
    v25 = v25 + a2.rot.data[1][1]; /*0x609777*/
    v26 = v26 + a2.rot.data[1][2]; /*0x60977f*/
    collisionObjectc = this->speed * g_GameSettingStringPointers_B36CD8[0xE0]; /*0x60978c*/
    a2.rot.data[2][0] = v24 * collisionObjectc; /*0x6097a2*/
    a2.rot.data[2][1] = v25 * collisionObjectc; /*0x6097af*/
    a2.rot.data[2][2] = collisionObjectc * v26; /*0x6097b7*/
    sub_4D9960((int *)collisionObject, a2.rot.data[2]); /*0x6097bb*/
    v15 = this->super.vtbl->super.GetNiNode(this); /*0x6097ca*/
    sub_7102B0((float *)&v15->members.super.m_worldTransform, &a2.scale); /*0x6097d4*/
    sub_7101F0((NiTransform *)&a2.scale, &a2, (NiPoint3 *)&this->unk05C->unk00[4]); /*0x6097e9*/
    collisionObjecta = fabs(a2.rot.data[0][1]); /*0x6097f4*/
    v23 = fabs(a2.rot.data[0][2]); /*0x609804*/
    if ( v23 < (double)collisionObjecta ) /*0x609815*/
      a2.rot.data[0][2] = sub_537770(a2.rot.data[0][2]) * collisionObjecta; /*0x609827*/
    a2.rot.data[0][1] = 0.0; /*0x609836*/
    NiPoint3_NormalizeApproximateInPlace((float *)&a2); /*0x60983a*/
    v16 = g_GameSettingStringPointers_B36CD8[0xDE]; /*0x60983f*/
    GetNiNode = this->super.vtbl->super.GetNiNode; /*0x60984d*/
    a2.pos.x = v16 * a2.rot.data[0][2]; /*0x609858*/
    a2.pos.y = 0.0; /*0x60985e*/
    a2.pos.z = v16 * -a2.rot.data[0][0]; /*0x60986a*/
    v18 = (int)GetNiNode((TESObjectREFR *)this); /*0x60986e*/
    v19 = sub_7101F0((NiTransform *)(v18 + 0x64), (NiTransform *)a2.rot.data[2], &a2.pos); /*0x60987d*/
    sub_4D99E0((int *)collisionObject, (float *)v19); /*0x609885*/
  }
  v20 = (NiAVObject *)this->super.vtbl->super.GetNiNode(this); /*0x609894*/
  BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v20); /*0x609897*/
  if ( BhkCollisionObjectRecursive ) /*0x6098a3*/
    BhkCollisionObjectRecursive[6] |= 0xCu; /*0x6098a5*/
  return 1; /*0x6098a1*/
}
