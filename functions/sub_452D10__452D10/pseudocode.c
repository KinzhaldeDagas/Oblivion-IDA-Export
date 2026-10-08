//
// Verified: initializes output null, NiTMap_GetAt with raw formID, returns entry pointer or null; LoadGame caller 466300.
OblivionChangeData *__thiscall ChangesMap_FindByFormID(ChangesMap *self, unsigned int formID)
{
  OblivionChangeData *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0; /*0x452d1a*/
  NiTMap_GetAt(self, formID, &v3); /*0x452d22*/
  return v3; /*0x452d2b*/
}
