// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType(
        char a1@<bl>,
        void *a2@<edi>,
        _DWORD *a3@<esi>,
        double a4@<st0>,
        int a5,
        float *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14)
{
  void *v14; // eax
  _BYTE *v15; // eax
  char v16; // [esp-Bh] [ebp-Bh]
  char v17; // [esp-9h] [ebp-9h]
  int v18; // [esp-4h] [ebp-4h]

  switch ( (*(int (__usercall **)@<eax>(void *@<ecx>, double@<st0>))(*(_DWORD *)a2 + 0x18))(a2, a4) ) /*0x5f475f*/
  {
    case 0: /*0x5f475f*/
    case 5: /*0x5f475f*/
      if ( !(_BYTE)a5 ) /*0x5f47d9*/
        goto LABEL_15; /*0x5f47d9*/
      Actor_MagicCaster_IsMagicItemUseable_::CheckSilence(v17 == 0, a5, (int)a6, a7, a8); /*0x5f47e0*/
      break; /*0x5f47e0*/
    case 2: /*0x5f475f*/
      v14 = OblivionDynamicCast( /*0x5f4775*/
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      if ( !Actor_GetMagicItemCooldown((_DWORD *)(v18 - 0x5C), (int)v14) ) /*0x5f478c*/
        goto Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW; /*0x5f478c*/
      if ( a3 ) /*0x5f4790*/
        *a3 = 4; /*0x5f4792*/
      break; /*0x5f4792*/
    case 3: /*0x5f475f*/
Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW:
      Actor_MagicCaster_IsMagicItemUseable_::CheckSilence((_BYTE)a5 == 0, a5, (int)a6, a7, a8); /*0x5f47a3*/
      break; /*0x5f47a4*/
    case 6: /*0x5f475f*/
      if ( a1 || v16 ) /*0x5f47b9*/
LABEL_15:
        Actor_MagicCaster_IsMagicItemUseable_::Return_0(a5, (int)a6, a7, a8); /*0x5f47b3*/
      break; /*0x5f47b3*/
    case 8: /*0x5f475f*/
      v15 = OblivionDynamicCast( /*0x5f47f1*/
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
              &IngredientItem `RTTI Type Descriptor',
              0);                               // Ingredient branch of Actor_MagicCaster_IsMagicItemUseable. Non-food ingredients fall through to CalcAlchemySkill unless the ingredient flags force zero output.
      if ( v15 && (v15[0x7C] & 2) != 0 ) /*0x5f4801*/
        *a6 = 0.0; /*0x5f480a*/
      else
        Actor_MagicCaster_IsMagicItemUseable_::CalcAlchemySkill(a4, a5, a6); /*0x5f47fb*/
      break; /*0x5f4813*/
    default:
      return;
  }
}
