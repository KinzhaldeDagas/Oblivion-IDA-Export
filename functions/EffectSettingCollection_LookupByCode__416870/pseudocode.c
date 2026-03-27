int __cdecl EffectSettingCollection_LookupByCode(int a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0;
  NiTMap_GetAt(&EffectSettingCollection, a1, &v2);
  return v2;
}
