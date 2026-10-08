// Verified: constructs BSTempEffectParticle; parameters include cell, duration, NiNode parent, model path, direction XYZ, local position XYZ, scale, and cached-clone flag. Body-hit caller 0x5EF214 passes direction XYZ and position XYZ; constructor writes position components into the NiAVObject local-transform translation (including stores at root+0x54/+0x58). It applies |scale|, attaches the cloned NIF and starts controllers. Cached-clone choice is controlled by the final bool. All parameters now typed by observed data flow.
BSTempEffectParticle *__thiscall BSTempEffectParticle_Constructor(
        BSTempEffectParticle *self,
        TESObjectCELL *parentCell,
        float durationSeconds,
        NiNode *parentNode,
        const char *modelPath,
        float directionX,
        float directionY,
        float directionZ,
        float localPosX,
        float localPosY,
        float localPosZ,
        float scale,
        bool useCachedClone)
{
  NiAVObject **p_particleNode; // ebp
  NiAVObject *particleNode; // esi
  NiObject *ModelData; // eax
  NiObject *CachedModelClone; // eax
  NiAVObject *v18; // esi
  __int16 v19; // fps
  __int16 v20; // fps
  float *v21; // eax
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  float v24; // [esp+10h] [ebp-54h]
  float v25[9]; // [esp+34h] [ebp-30h] BYREF
  int v26; // [esp+60h] [ebp-4h]
  float useCachedClonea; // [esp+94h] [ebp+30h]
  float useCachedCloneb; // [esp+94h] [ebp+30h]
  float useCachedClonec; // [esp+94h] [ebp+30h]

  BSTempEffect_Constructor(&self->base, parentCell, durationSeconds); /*0x57142a*/
  p_particleNode = &self->particleNode; /*0x571431*/
  self->base.vtable = (BSTempEffectVtbl *)&BSTempEffectParticle::`vftable'; /*0x571434*/
  v26 = 0; /*0x57143a*/
  self->particleNode = 0; /*0x57143e*/
  self->base.durationSeconds = 0.0; /*0x571443*/
  self->modelPath = 0; /*0x571446*/
  particleNode = self->particleNode; /*0x571449*/
  LOBYTE(v26) = 1; /*0x57144e*/
  if ( particleNode ) /*0x571453*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&particleNode->members) ) /*0x571459*/
      particleNode->vtbl->super.super.Destructor((NiRefObject *)particleNode, 1); /*0x57146f*/
    *p_particleNode = 0; /*0x571471*/
  }
  ModelData = (NiObject *)ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], modelPath, 0, 0, 1);// ODismemberment: BSTempEffectParticle loads model data through the shared ModelLoader, then either asks TES for a cached clone or clones the loaded object directly. /*0x571483*/
  self->modelPath = modelPath; /*0x571490*/
  if ( !useCachedClone ) /*0x571493*/
  {
    CachedModelClone = NiObject_CloneWithPointerMap(ModelData); /*0x5714d1*/
    goto LABEL_14; /*0x5714d1*/
  }
  if ( MEMORY[0xB333A0] ) /*0x571495*/
  {
    CachedModelClone = (NiObject *)TES_GetCachedModelClone(MEMORY[0xB333A0], (int)ModelData); /*0x5714a0*/
LABEL_14:
    NiSmartPointer_Set__((Ni2DBuffer **)&self->particleNode, (Ni2DBuffer *)CachedModelClone); /*0x5714d6*/
    goto LABEL_15; /*0x5714d9*/
  }
  v18 = *p_particleNode; /*0x5714a7*/
  if ( *p_particleNode ) /*0x5714a7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v18->members) ) /*0x5714b2*/
    {
      if ( v18 ) /*0x5714be*/
        v18->vtbl->super.super.Destructor((NiRefObject *)v18, 1); /*0x5714c8*/
    }
    *p_particleNode = 0; /*0x5714ca*/
  }
LABEL_15:
  if ( *p_particleNode ) /*0x5714de*/
  {
    self->base.durationSeconds = sub_570B40(self, *p_particleNode);// BloodOnDeath decode 2026-05-30: particle temp-effect duration is overwritten with the max controller span found in the cloned particle NIF tree. Visual squirt lifetime is model/controller-driven, not fDecalLifetime:Display. /*0x5714f1*/
    useCachedClonea = directionX * directionX + directionY * directionY + 0.0 * 0.0; /*0x571512*/
    useCachedCloneb = sqrt(useCachedClonea); /*0x571525*/
    sub_98598A(useCachedCloneb, directionZ, v19);// BloodOnDeath decode 2026-05-30: first atan2-like angle is based on horizontal length sqrt(dirX^2+dirY^2) and dirZ; stored negated as pitch for the particle model orientation. /*0x571537*/
    v24 = -directionZ; /*0x57154f*/
    sub_98598A(directionY, directionX, v20);    // BloodOnDeath decode 2026-05-30: second atan2-like angle is horizontal yaw from normalized dirY/dirX. More outward squirt should feed a stronger horizontal direction before this constructor. /*0x571560*/
    sub_7118E0(v25, directionX, 0.0, v24);      // BloodOnDeath decode 2026-05-30: builds the particle local rotation matrix from yaw, zero middle rotation, and pitch; direction is orientation-only here, no additional outward force is applied. /*0x57157b*/
    v21 = (float *)*p_particleNode; /*0x571584*/
    useCachedClonec = fabs(scale); /*0x57158d*/
    v21[0x15] = localPosX; /*0x57159f*/
    v21 += 0x15; /*0x5715a6*/
    v21[1] = localPosY; /*0x5715a9*/
    v21[2] = localPosZ; /*0x5715ac*/
    qmemcpy(&(*p_particleNode)->members.m_localTransform, v25, 0x24u); /*0x5715be*/
    AddObject = parentNode->vtbl->AddObject;    // ODismemberment: attaches the loaded/cloned particle model to the supplied NiNode parent with NiNode::AddObject. This gives a visual detached-NIF path, but ownership/lifetime remains temp-effect based. /*0x5715c9*/
    (*p_particleNode)->members.m_localTransform.scale = useCachedClonec; /*0x5715cf*/
    ((void (__thiscall *)(NiNode *, NiAVObject *, int))AddObject)(parentNode, *p_particleNode, 1); /*0x5715d8*/
    NiAVObject_InitializePropertyState(*p_particleNode);// ODismemberment: initializes properties and updates the attached temp-effect model after AddObject. /*0x5715dd*/
    NiAVObject_UpdateNiAVObject(*p_particleNode, source, 1); /*0x5715f1*/
    BSTempEffectParticle_AdjustTextureTransforms((NiObject *)*p_particleNode); /*0x5715fc*/
    NiObjectNET_StartControllersRecursive((int)*p_particleNode);// ODismemberment: starts controllers recursively on the attached temp-effect model. No separate Havok world insertion has been observed here yet. /*0x571605*/
  }
  return self; /*0x57160f*/
}
