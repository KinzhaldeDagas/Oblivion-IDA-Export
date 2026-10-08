int __cdecl EffectSettingCollection_LookupByCode(int a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = 0; /*0x41687f*/
  NiTMap_GetAt(&MEMORY[0xB33508], a1, &v2); /*0x416887*/
  return v2; /*0x416890*/
}
