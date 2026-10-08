//
// Verified: lookup by TESForm+0xC, returns entry pointer or null. Callers 463AF6,465FDD,4664BE.
OblivionChangeData *__thiscall ChangesMap_FindByForm(ChangesMap *self, TESForm *form)
{
  UInt32 refID; // [esp-8h] [ebp-Ch]
  ChangesMap *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = self; /*0x452d30*/
  refID = form->member.refID; /*0x452d3c*/
  v4 = 0; /*0x452d3d*/
  NiTMap_GetAt(self, refID, &v4); /*0x452d45*/
  return (OblivionChangeData *)v4; /*0x452d4e*/
}
