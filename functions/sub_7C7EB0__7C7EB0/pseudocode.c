// If reconcileReceivers is true, walk fullListHead_E8 and reconcile each non-null ShadowSceneLight source. If retainLightLists is false afterward, tear down the full/active lists. Both direct retail callers pass true/true, so this wrapper's teardown branch is not taken by them.
void __thiscall ShadowSceneNode_ReconcileAllSourceLightsAndOptionallyTeardown(
        ShadowSceneNode_DecodedLayout *self,
        bool reconcileReceivers,
        bool retainLightLists)
{
  _DWORD *fullListHead_E8; // esi
  ShadowSceneLight_DecodedLayout *v5; // eax

  if ( reconcileReceivers ) /*0x7c7eb8*/
  {
    fullListHead_E8 = self->fullListHead_E8;    // Begin the native full-list walk; entries are source ShadowSceneLight objects, not loaded static references. /*0x7c7ebb*/
    while ( fullListHead_E8 ) /*0x7c7ec3*/
    {
      v5 = (ShadowSceneLight_DecodedLayout *)fullListHead_E8[2]; /*0x7c7ec8*/
      fullListHead_E8 = (_DWORD *)*fullListHead_E8; /*0x7c7ecc*/
      if ( v5 ) /*0x7c7ece*/
        ShadowSceneNode_ReconcileSourceLightReceivers(self, v5);// Reconcile the current source light's eligible receiver geometry against the current scene. /*0x7c7ed3*/
    }
    if ( !retainLightLists ) /*0x7c7ee2*/
      ShadowSceneNode_TeardownLightLists(self); // Conditional list teardown occurs only when reconcileReceivers=true and retainLightLists=false. The two direct retail callers both pass retainLightLists=true. /*0x7c7ee6*/
  }
}
