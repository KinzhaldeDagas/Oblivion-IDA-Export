// Collision state 0: restore saved local transform, reparent the projectile NiNode beneath the recorded Actor attachment node, refresh shadow state, remove incompatible child collision nodes, and register the embedded projectile with the Actor process.
char __thiscall ArrowProjectile_ResolveActorEmbedState0(ArrowProjectile *this, void *collisionObject)
{
  int v3; // ebx
  ArrowProjectile_CollisionData *unk05C; // eax
  float v5; // ebp
  double v7; // st7
  ArrowProjectile_CollisionData *v8; // eax
  float v9; // edx
  _DWORD *ShadowSceneNode; // esi
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  char v15; // al
  NiNode *ninode; // eax
  float y; // ecx
  float v18; // [esp+8h] [ebp-8h]
  float v19; // [esp+8h] [ebp-8h]

  v3 = ((int (__fastcall *)(ArrowProjectile *))this->super.vtbl->super.GetNiNode)(this); /*0x608fd5*/
  this->super.vtbl->Unk_72((MobileObject *)this); /*0x608fe1*/
  unk05C = this->unk05C; /*0x608fe3*/
  if ( unk05C->ninode
    && ((unsigned __int8 (__thiscall *)(NiNode *))unk05C->ninode->vtbl[2].super.GetObjectByName)(unk05C->ninode) )
  {
    v5 = this->unk05C->unk2C[0]; /*0x60900b*/
    if ( v5 == 0.0 )
    {
      return 0; /*0x609014*/
    }
    else
    {
      sub_88CD50((NiObjectNET *)v3, 1, 0); /*0x609023*/
      sub_536740(v3); /*0x609029*/
      v7 = *(float *)(v3 + 0x60); /*0x60902e*/
      v8 = this->unk05C; /*0x609031*/
      v9 = v8->unk00[1]; /*0x609034*/
      v8 = (ArrowProjectile_CollisionData *)((char *)v8 + 4); /*0x609037*/
      *(float *)(v3 + 0x54) = v9; /*0x60903a*/
      *(float *)(v3 + 0x58) = v8->unk00[1]; /*0x609040*/
      *(float *)(v3 + 0x5C) = v8->unk00[2]; /*0x609046*/
      qmemcpy((void *)(v3 + 0x30), &this->unk05C->unk2C[1], 0x24u); /*0x609057*/
      v18 = v7 / *(float *)(LODWORD(v5) + 0x94); /*0x609061*/
      v19 = fabs(v18); /*0x60906b*/
      *(float *)(v3 + 0x60) = v19; /*0x609073*/
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x60907e*/
      ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, (NiAVObject *)v3); /*0x609083*/
      (*(void (__thiscall **)(float, int, int))(*(_DWORD *)LODWORD(v5) + 0x84))(COERCE_FLOAT(LODWORD(v5)), v3, 1);// State 0 reparents the projectile NiNode into the recorded actor attachment node after restoring recorded local transform. /*0x609096*/
      sub_7C5D00(ShadowSceneNode, (_BYTE *)v3); /*0x60909b*/
      v11 = 0; /*0x6090a0*/
      while ( v11 < *(unsigned __int16 *)(v3 + 0x14) )
      {
        v12 = *(_DWORD *)(v3 + 0x10); /*0x6090b0*/
        v13 = *(_DWORD *)(v12 + 4 * (unsigned __int16)v11); /*0x6090b9*/
        if ( !v13 ) /*0x6090be*/
          goto LABEL_14; /*0x6090be*/
        v14 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v13 + 4))(*(_DWORD *)(v12 + 4 * (unsigned __int16)v11)); /*0x6090c7*/
        if ( v14 ) /*0x6090cb*/
        {
          while ( (char *)v14 != stru_B35ACC ) /*0x6090d5*/
          {
            v14 = *(_DWORD *)(v14 + 4); /*0x6090d7*/
            if ( !v14 ) /*0x6090dc*/
              goto LABEL_10; /*0x6090dc*/
          }
          v15 = 1; /*0x6090f2*/
        }
        else
        {
LABEL_10:
          v15 = 0; /*0x6090de*/
        }
        if ( (v15 != 0 ? v13 : 0) != 0 )
          sub_6FFBE0((_WORD *)v3, v11); /*0x6090eb*/
        else
LABEL_14:
          ++v11; /*0x6090f6*/
      }
      ninode = this->unk05C->ninode; /*0x609108*/
      if ( ninode ) /*0x60910e*/
      {
        y = ninode->members.super.m_localTransform.pos.y; /*0x609110*/
        if ( y != 0.0 ) /*0x609115*/
          (*(void (__thiscall **)(float, ArrowProjectile *))(*(_DWORD *)LODWORD(y) + 0x4F8))( /*0x609120*/
            COERCE_FLOAT(LODWORD(y)),
            this);
      }
      return 1; /*0x609124*/
    }
  }
  else
  {
    PrintError("An arrow thinks it is colliding with an Actor, but there is no Actor in the collision data!"); /*0x609132*/
    return 0; /*0x60913b*/
  }
}
