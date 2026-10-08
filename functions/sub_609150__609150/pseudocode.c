// Collision state 1: reconstruct attachment to a recorded non-Actor reference collision object, set projectile collision filtering, enqueue the projectile in the reference-collision list, and restore saved collision transform data.
char __thiscall ArrowProjectile_ResolveReferenceCollisionState1(ArrowProjectile *this, void *collisionObject)
{
  ArrowProjectile_CollisionData *unk05C; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v5; // edi
  NiNode *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int128 v17; // [esp+10h] [ebp-20h] BYREF

  this->super.vtbl->Unk_72((MobileObject *)this); /*0x609174*/
  unk05C = this->unk05C; /*0x609176*/
  if ( !unk05C->ninode ) /*0x60917d*/
  {
    PrintError("An arrow thinks it is colliding with an Reference, but there is no Reference in the collision data!"); /*0x609277*/
    return 0; /*0x609277*/
  }
  BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive((NiAVObject *)LODWORD(unk05C->unk2C[0])); /*0x609187*/
  if ( !BhkCollisionObjectRecursive ) /*0x609191*/
    return 0; /*0x609288*/
  v5 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x609199*/
  v6 = this->super.vtbl->super.GetNiNode(this); /*0x6091aa*/
  sub_88D070(v6, 6, 1, 0); /*0x6091ad*/
  if ( v5 && (v7 = v5[2]) != 0 && (v8 = v7 + 0x14) != 0 ) /*0x6091c3*/
    v9 = *(_DWORD *)(v8 + 0x1C); /*0x6091c5*/
  else
    v9 = 0; /*0x6091ca*/
  v10 = v9 & 0xFFFF0000 | 6; /*0x6091d1*/
  if ( v5 && (v11 = v5[2]) != 0 && (v12 = v11 + 0x14) != 0 ) /*0x6091e2*/
    v13 = *(_DWORD *)(v12 + 0x1C); /*0x6091e4*/
  else
    LOBYTE(v13) = 0; /*0x6091e9*/
  if ( (v13 & 0x3F) != 4 ) /*0x6091f1*/
    v10 = v10 & 0xFFFFFFC0 | 0xF; /*0x6091f6*/
  if ( collisionObject ) /*0x6091fb*/
  {
    v14 = *((_DWORD *)collisionObject + 2); /*0x6091fd*/
    if ( v14 ) /*0x609202*/
    {
      v15 = v14 + 0x14; /*0x609204*/
      if ( v15 ) /*0x609207*/
        *(_DWORD *)(v15 + 0x1C) = v10; /*0x609209*/
    }
  }
  (*(void (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x80))(collisionObject); /*0x609216*/
  BSSimpleList_PushFront(&qword_B3BB2C[0x89], (int)this); /*0x60921e*/
  if ( sub_535AC0(v5) > *(float *)&SrcStr ) /*0x609235*/
  {
    (*(void (__thiscall **)(void *, __int128 *))(*(_DWORD *)collisionObject + 0xA8))(collisionObject, &v17); /*0x609246*/
    sub_535BE0(&v17, LODWORD(this->unk05C->unk2C[0])); /*0x609254*/
  }
  return 1; /*0x60925e*/
}
