int __usercall MagicCaster_ApplyActiveMagicItem_::GetMagicItemData@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        __int64 a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        char a32)
{
  void *v33; // edi
  void *v34; // eax
  void *v36; // [esp+2Ch] [ebp+2Ch]
  int StrongestItem; // [esp+38h] [ebp+38h]
  int v38; // [esp+3Ch] [ebp+3Ch]

  LOBYTE(a6) = 0;
  v33 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1);
  LODWORD(a17) = OblivionDynamicCast(
                   v33,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                   &IngredientItem `RTTI Type Descriptor',
                   0);
  StrongestItem = EffectItemList_GetStrongestItem(0, 0);
  v38 = EffectItemList_GetStrongestItem(1, 0);
  v34 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x30))(a1);
  v36 = OblivionDynamicCast(
          v34,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &SpellItem `RTTI Type Descriptor',
          0);
  a18 = 0;
  a19 = 0;
  BSSimpleList_Clear(&a18);
  return MagicCaster_ApplyActiveMagicItem_::GetAreaTargetList_(
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           v36,
           a13,
           a14,
           StrongestItem,
           v38,
           a17,
           HIDWORD(a17),
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32);
}
