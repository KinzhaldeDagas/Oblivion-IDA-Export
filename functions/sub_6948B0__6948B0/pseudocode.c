// Tear down a LightEffect transient point light by backing-light identity: remove its full-list ShadowSceneLight, detach it from the actor scene graph, clear actor extra-data type 0x49, release the LightEffect smart pointer, and decrement the active magic-light count.
void __thiscall LightEffect_TeardownTransientPointLight(LightEffect_DecodedLayout *self)
{
  MagicTarget *target; // ecx
  TESObjectREFR *ParentActor; // edi
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  NiLight *transientPointLight_38; // esi
  int v10; // [esp+8h] [ebp-4h] BYREF

  target = self->base_00.members.target; /*0x6948b4*/
  if ( target ) /*0x6948ba*/
    ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(target); /*0x6948c1*/
  else
    ParentActor = 0; /*0x6948c5*/
  if ( self->transientPointLight_38 ) /*0x6948c7*/
  {
    ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x6948d3*/
    if ( ShadowSceneNode ) /*0x6948dd*/
      ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, self->transientPointLight_38);// Remove the native full-list ShadowSceneLight whose backing-light identity is this LightEffect's transient NiPointLight. /*0x6948e5*/
    v5 = InterlockedDecrement; /*0x6948ed*/
    if ( ParentActor ) /*0x6948f4*/
    {
      v6 = (int)ParentActor->vtbl->GetNiNode(ParentActor); /*0x694900*/
      if ( v6 ) /*0x694904*/
      {
        (*(void (__thiscall **)(int, int *, NiLight *))(*(_DWORD *)v6 + 0x88))(v6, &v10, self->transientPointLight_38);// Find the transient point-light child in the parent actor's scene graph so the native teardown path can detach/release that child. /*0x694919*/
        if ( v10 ) /*0x694921*/
        {
          v7 = (void (__thiscall ***)(_DWORD, int))v10; /*0x694923*/
          if ( !v5((volatile LONG *)(v10 + 4)) ) /*0x694929*/
            (**v7)(v7, 1); /*0x69493b*/
        }
      }
      TESObjectREFR_UnregisterAndClearAttachedLight(ParentActor, 1);// Clear the parent actor's spell-effect light extra-data type 0x49; this call selects useSpellEffectExtraLight=true. /*0x694941*/
    }
    transientPointLight_38 = self->transientPointLight_38; /*0x694946*/
    if ( transientPointLight_38 ) /*0x69494d*/
    {
      if ( !v5((volatile LONG *)&transientPointLight_38->members) ) /*0x694953*/
        transientPointLight_38->vtbl->super.super.Destructor((NiRefObject *)transientPointLight_38, 1); /*0x694965*/
      self->transientPointLight_38 = 0; /*0x694967*/
    }
    if ( --LODWORD(qword_B3BB2C[0x162]) < 0 )   // Decrement and clamp the native active transient magic-light count. /*0x69496a*/
      qword_B3BB2C[0x162] = 0.0; /*0x694975*/
  }
}
