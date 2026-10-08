// Initializes the generated projectile root's LOCAL transform only: scale=1, translation=reference position, rotation from yawZ/pitchX/rollY. ORs collision-filter bit 0x4000, invokes the collision body callback, then recursively ensures alpha properties. It does not update the node world transform.
void __thiscall ArrowProjectile_InitializeNodeLocalTransformAndCollision(ArrowProjectile *this)
{
  NiNode *v2; // eax
  NiAVObject *v3; // ebx
  float *v4; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // edx
  float v13; // [esp+18h] [ebp-34h]
  NiMatrix33 v14; // [esp+28h] [ebp-24h] BYREF

  v2 = this->super.vtbl->super.GetNiNode(this); /*0x608cbf*/
  v3 = (NiAVObject *)v2; /*0x608cc1*/
  if ( v2 ) /*0x608cc5*/
  {
    v13 = fabs(1.0); /*0x608cd2*/
    v2->members.super.m_localTransform.scale = v13; /*0x608cda*/
    v4 = this->super.vtbl->super.GetPos(this); /*0x608ce5*/
    v3->members.m_localTransform.pos.x = *v4; /*0x608ce9*/
    v3->members.m_localTransform.pos.y = v4[1]; /*0x608cef*/
    v3->members.m_localTransform.pos.z = v4[2]; /*0x608cf5*/
    NiMatrix33_SetEulerZXY(&v14, this->super.super.rot.z, this->super.super.rot.x, this->super.super.rot.y);// Build generated projectile root local rotation as Z * (X * Y) from reference yawZ, pitchX, and rollY. /*0x608d2b*/
    qmemcpy(&v3->members.m_localTransform, &v14, 0x24u); /*0x608d3d*/
    BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive(v3); /*0x608d3f*/
    if ( BhkCollisionObjectRecursive ) /*0x608d4a*/
    {
      v6 = (_DWORD *)BhkCollisionObjectRecursive[4]; /*0x608d4c*/
      if ( v6 && (v7 = v6[2]) != 0 && (v8 = v7 + 0x14) != 0 ) /*0x608d5d*/
        v9 = *(_DWORD *)(v8 + 0x1C); /*0x608d5f*/
      else
        v9 = 0; /*0x608d64*/
      v10 = v9 | 0x4000; /*0x608d66*/
      if ( v6 ) /*0x608d6d*/
      {
        v11 = v6[2]; /*0x608d6f*/
        if ( v11 ) /*0x608d74*/
        {
          v12 = v11 + 0x14; /*0x608d76*/
          if ( v12 ) /*0x608d79*/
            *(_DWORD *)(v12 + 0x1C) = v10; /*0x608d7b*/
        }
      }
      (*(void (__thiscall **)(_DWORD *))(*v6 + 0x80))(v6); /*0x608d86*/
    }
    NiAVObject_EnsureAlphaPropertyRecursive(v3);// Recursively ensure geometry under the generated projectile root has property type 0 / NiAlphaProperty. This is alpha-property setup, not a transform refresh. /*0x608d89*/
  }
}
