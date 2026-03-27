int __userpurge Actor_MagicTarget_PostAddEffect_::PlayPainFX@<eax>(
        int a1@<edi>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7,
        int a8,
        int *a9)
{
  char IsEdible; // bl
  _BYTE *v10; // eax
  void *v11; // eax

  IsEdible = 0;
  v10 = OblivionDynamicCast(
          *(void **)(a2 + 8),
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &IngredientItem `RTTI Type Descriptor',
          0);
  if ( v10 )
  {
    IsEdible = (v10[0x7C] & 2) != 0;
  }
  else
  {
    v11 = OblivionDynamicCast(
            *(void **)(a2 + 8),
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &AlchemyItem `RTTI Type Descriptor',
            0);
    if ( v11 )
      IsEdible = AlchemyItem_IsEdible((int)v11);
  }
  if ( EffectItem_IsHostile(*(_DWORD **)(a2 + 0xC)) )
  {
    if ( *(_DWORD *)(a2 + 0x28) != 4 && !IsEdible )
    {
      LOBYTE(a9) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98) == 0x434E4C53;
      Actor_PlayPainFX((TESObjectREFR *)(a1 - 0x68), a3, a5, a4, a9, 1);
    }
  }
  return Actor_MagicTarget_PostAddEffect_::Done_(a6);
}
