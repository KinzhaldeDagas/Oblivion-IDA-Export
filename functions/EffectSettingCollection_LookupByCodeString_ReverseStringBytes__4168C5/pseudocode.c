// positive sp value has been detected, the output may be wrong!
int __fastcall EffectSettingCollection_LookupByCodeString_::ReverseStringBytes(int a1, char *a2)
{
  int v3; // [esp-Ch] [ebp-Ch]
  int v4; // [esp-4h] [ebp-4h] BYREF

  v3 = *a2 | ((a2[1] | ((a2[2] | (a2[3] << 8)) << 8)) << 8);
  v4 = 0;
  NiTMap_GetAt(&EffectSettingCollection, v3, &v4);
  return v4;
}
