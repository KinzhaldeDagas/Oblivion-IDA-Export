TESForm *__cdecl TESForm_LookupByFormID(UInt32 a1)
{
  char v1; // al
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0;
  v1 = NiTMap_GetAt(&TESForm_FormIDMap, a1, &v3);
  return v1 != 0 ? (TESForm *)v3 : 0;
}
