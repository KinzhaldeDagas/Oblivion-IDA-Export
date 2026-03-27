// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicCaster_IsMagicItemUseable_::SwitchMagicItemType(
        char a1@<bl>,
        void *a2@<edi>,
        _DWORD *a3@<esi>,
        int a4,
        float *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        float a13)
{
  void *v13; // eax
  _BYTE *v14; // eax
  char v15; // [esp-Bh] [ebp-Bh]
  char v16; // [esp-9h] [ebp-9h]
  int v17; // [esp-4h] [ebp-4h]

  switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x18))(a2) )
  {
    case 0:
    case 5:
      if ( !(_BYTE)a4 )
        goto LABEL_15;
      Actor_MagicCaster_IsMagicItemUseable_::CheckSilence(v16 == 0, a4, (int)a5, a6);
      break;
    case 2:
      v13 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
              &SpellItem `RTTI Type Descriptor',
              0);
      if ( !Actor_GetMagicItemCooldown((_DWORD *)(v17 - 0x5C), (int)v13) )
        goto Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW;
      if ( a3 )
        *a3 = 4;
      break;
    case 3:
Actor_MagicCaster_IsMagicItemUseable___Actor_MagicCaster_IsMagicItemUseable_LPW:
      Actor_MagicCaster_IsMagicItemUseable_::CheckSilence((_BYTE)a4 == 0, a4, (int)a5, a6);
      break;
    case 6:
      if ( a1 || v15 )
LABEL_15:
        Actor_MagicCaster_IsMagicItemUseable_::Return_0(a4, (int)a5, a6, a7);
      break;
    case 8:
      v14 = OblivionDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
              &IngredientItem `RTTI Type Descriptor',
              0);
      if ( v14 && (v14[0x7C] & 2) != 0 )
        *a5 = 0.0;
      else
        Actor_MagicCaster_IsMagicItemUseable_::CalcAlchemySkill(a4, (int)a5, a6, a7, a8, a9, a10, a11, a12, a13);
      break;
    default:
      return;
  }
}
