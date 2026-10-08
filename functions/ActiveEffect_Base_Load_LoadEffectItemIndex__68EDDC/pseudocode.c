// Verified per-effect restoration: loads MagicItem FormID and EffectItem index, resolves both to current forms, recreates the concrete subclass through ActiveEffect_Base_CreateDynamic(null caster, magicItem, effectItem, null source), calls its vtable LoadEffect slot (+0x14), then advances to the serialized record boundary.
int __usercall ActiveEffect_Base_Load_::LoadEffectItemIndex@<eax>(
        TESSaveLoadGame_SerializationView *a1@<ecx>,
        int a2@<edi>,
        int a3,
        int a4,
        int Dst,
        UInt32 a6,
        int a7,
        int a8)
{
  unsigned __int8 *bufferCursor; // ebx
  int v9; // esi
  EffectItem *ItemByIndex; // eax
  ActiveEffect *Dynamic; // esi
  unsigned __int8 *v12; // eax

  SaveLoad_LoadData(a1, &Dst, 1u); /*0x68ede3*/
  bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x68edf2*/
  v9 = MagicItem_LookupByFormID(a6); /*0x68edfb*/
  if ( !v9 ) /*0x68ee02*/
    return ActiveEffect_Base_Load_::Error_BadEffectSource(); /*0x68ee02*/
  ItemByIndex = (EffectItem *)EffectItemList_GetItemByIndex((void *)(v9 + 0xC), Dst); /*0x68ee0c*/
  if ( !ItemByIndex ) /*0x68ee13*/
    return ActiveEffect_Base_Load_::Error_BadEffectSource(); /*0x68ee02*/
  Dynamic = ActiveEffect_Base_CreateDynamic(0, (MagicItem *)v9, ItemByIndex, 0);// Verified save restoration path: ActiveEffect_Base_Load reads MagicItem and EffectItem index, calls ActiveEffect_Base_CreateDynamic with null caster/source, then loads the serialized effect state into the created subclass before adding it to the target list. /*0x68ee21*/
  ((void (__thiscall *)(ActiveEffect *, int, int))Dynamic->vtbl->loadEffect)(Dynamic, a8, a2); /*0x68ee32*/
  v12 = (unsigned __int8 *)(g_TESSaveLoadGame->bufferCursor - bufferCursor); /*0x68ee44*/
  if ( v12 != (unsigned __int8 *)(unsigned __int16)Dst ) /*0x68ee48*/
    g_TESSaveLoadGame->bufferCursor += (unsigned __int16)Dst - (_DWORD)v12; /*0x68ee4e*/
  return ActiveEffect_Base_Load_::Done((int)Dynamic);
}
