// Cell reference-light lifecycle. Under the cell object-list guard, walk every TESObjectREFR and register or unregister its ordinary ExtraLight with the native ShadowSceneNode full-light list. This enumerates light sources, not static shadow casters.
int __thiscall TESObjectCELL_RegisterOrUnregisterAttachedLights(TESObjectCELL *self, bool registerLights)
{
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // ecx
  bool v5; // zf

  sub_496EA0((char *)&unk_B35C80, self); /*0x4cb67a*/
  p_objectList = &self->members.objectList; /*0x4cb67f*/
  if ( self != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb684*/
  {
    do /*0x4cb6ad*/
    {
      refr = p_objectList->refr; /*0x4cb690*/
      v5 = p_objectList->refr == 0; /*0x4cb692*/
      p_objectList = p_objectList->next; /*0x4cb694*/
      if ( !v5 ) /*0x4cb697*/
      {
        if ( registerLights ) /*0x4cb69d*/
          TESObjectREFR_RegisterAttachedLightWithShadowScene(refr, 0);// registerLights=true: register this reference's ordinary ExtraLight (useSpellEffectExtraLight=false) in the native full-light list. /*0x4cb69f*/
        else
          TESObjectREFR_UnregisterAttachedLightFromShadowScene(refr, 0);// registerLights=false: unregister this reference's ordinary ExtraLight by backing NiLight identity. /*0x4cb6a6*/
      }
    }
    while ( p_objectList ); /*0x4cb6ad*/
  }
  return sub_496F50(&unk_B35C80, self); /*0x4cb6bb*/
}
