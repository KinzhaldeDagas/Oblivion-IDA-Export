// Verified: looks up a TESForm-ID-keyed value in global TESTextureList cache. Shared TESBoundObject distant-LOD updater consumes its return; precise cache role is supporting archive texture resolution for DLOD model instances.
TESTextureList *__fastcall TESBoundObject_GetTextureHashCache(TESBoundObject *form)
{
  char v1; // al
  UInt32 refID; // [esp-8h] [ebp-Ch]
  TESBoundObject *v4; // [esp+0h] [ebp-4h] BYREF

  v4 = form; /*0x4b2bd0*/
  refID = form->member.super.refID; /*0x4b2bd8*/
  v4 = 0; /*0x4b2bde*/
  v1 = NiTMap_GetAt(&g_TESObjectTREETextureHashCache, refID, &v4); /*0x4b2be6*/
  return v1 != 0 ? (TESTextureList *)v4 : 0;
}
