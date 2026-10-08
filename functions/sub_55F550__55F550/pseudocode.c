// Verified manager teardown: clears the form/seed model cache and pending reference-node map, releases default render properties and canopy resources. This is lifecycle teardown, not per-cell DistantLOD cleanup.
void __thiscall BSTreeManager_dtor(BSTreeManager_OblivionVerifiedLayout *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  float v3; // esi
  volatile LONG *v4; // esi
  LockFreeMap *pendingReferenceNodes; // esi
  BSXFlags *treeFlags; // esi
  NiAlphaProperty *alphaProperty; // esi
  NiVertexColorProperty *vertexColorProperty; // esi
  NiMaterialProperty *materialProperty; // esi
  NiZBufferProperty *zBufferProperty; // esi
  volatile LONG *unknown_004; // esi

  BSTreeManager_ClearModelCache(0); /*0x55f586*/
  v2 = InterlockedDecrement; /*0x55f590*/
  if ( LODWORD(unk_B43108[0]) ) /*0x55f58b*/
  {
    v3 = unk_B43108[0]; /*0x55f59d*/
    if ( !v2((volatile LONG *)(LODWORD(unk_B43108[0]) + 4)) && v3 != 0.0 ) /*0x55f5ab*/
      (**(void (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x55f5b5*/
    unk_B43108[0] = 0.0; /*0x55f5b7*/
  }
  v4 = (volatile LONG *)g_CanopyShadowMap; /*0x55f5c1*/
  if ( g_CanopyShadowMap ) /*0x55f5c1*/
  {
    if ( !v2(v4 + 1) ) /*0x55f5cf*/
    {
      if ( v4 ) /*0x55f5d7*/
        (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1); /*0x55f5e1*/
    }
    g_CanopyShadowMap = 0; /*0x55f5e3*/
  }
  g_bCanopyShadowMapPending = 1; /*0x55f5ed*/
  sub_4A3C60(); /*0x55f5f4*/
  pendingReferenceNodes = this->pendingReferenceNodes; /*0x55f5f9*/
  if ( pendingReferenceNodes ) /*0x55f5fe*/
  {
    pendingReferenceNodes->vtbl = &LockFreeMap<TESObjectREFR *,BSTreeNode *>::`vftable'; /*0x55f604*/
    sub_55F3C0(pendingReferenceNodes, 1); /*0x55f60a*/
    FormHeapFree((unsigned int)pendingReferenceNodes->members.buckets); /*0x55f613*/
    FormHeapFree((unsigned int)pendingReferenceNodes->members.unk04); /*0x55f624*/
    FormHeapFree((unsigned int)pendingReferenceNodes); /*0x55f62a*/
  }
  treeFlags = this->treeFlags; /*0x55f632*/
  if ( treeFlags ) /*0x55f63c*/
  {
    if ( !v2((volatile LONG *)treeFlags + 1) ) /*0x55f642*/
      (**(void (__thiscall ***)(BSXFlags *, int))treeFlags)(treeFlags, 1); /*0x55f654*/
  }
  alphaProperty = this->alphaProperty; /*0x55f656*/
  if ( alphaProperty ) /*0x55f660*/
  {
    if ( !v2((volatile LONG *)&alphaProperty->base.members) ) /*0x55f666*/
      (*(void (__thiscall **)(NiAlphaProperty *, int))alphaProperty->base.vtbl)(alphaProperty, 1); /*0x55f678*/
  }
  vertexColorProperty = this->vertexColorProperty; /*0x55f67a*/
  if ( vertexColorProperty ) /*0x55f684*/
  {
    if ( !v2((volatile LONG *)vertexColorProperty + 1) ) /*0x55f68a*/
      (**(void (__thiscall ***)(NiVertexColorProperty *, int))vertexColorProperty)(vertexColorProperty, 1); /*0x55f69c*/
  }
  materialProperty = this->materialProperty; /*0x55f69e*/
  if ( materialProperty ) /*0x55f6a8*/
  {
    if ( !v2((volatile LONG *)materialProperty + 1) ) /*0x55f6ae*/
      (**(void (__thiscall ***)(NiMaterialProperty *, int))materialProperty)(materialProperty, 1); /*0x55f6c0*/
  }
  zBufferProperty = this->zBufferProperty; /*0x55f6c2*/
  if ( zBufferProperty ) /*0x55f6cc*/
  {
    if ( !v2((volatile LONG *)zBufferProperty + 1) ) /*0x55f6d2*/
      (**(void (__thiscall ***)(NiZBufferProperty *, int))zBufferProperty)(zBufferProperty, 1); /*0x55f6e4*/
  }
  unknown_004 = (volatile LONG *)this->unknown_004; /*0x55f6e6*/
  if ( unknown_004 ) /*0x55f6f3*/
  {
    if ( !v2(unknown_004 + 1) ) /*0x55f6f9*/
      (**(void (__thiscall ***)(void *, int))unknown_004)((void *)unknown_004, 1); /*0x55f70b*/
  }
}
