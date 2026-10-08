// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicCaster_ApplyMagicItemCost_::SwitchMagicType(
        int a1@<ebx>,
        Actor *a2@<ebp>,
        void *a3@<esi>,
        int a4,
        int a5,
        int SchoolAV,
        float a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  void *v11; // eax
  float v12; // [esp-1Ch] [ebp-24h]
  float v13; // [esp-14h] [ebp-1Ch]
  float delta; // [esp+0h] [ebp-8h]

  switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)a3 + 0x18))(a3) ) /*0x5fc944*/
  {
    case 0: /*0x5fc944*/
    case 5: /*0x5fc944*/
      a1 = 0; /*0x5fc94d*/
      SchoolAV = EffectItemList_GetSchoolAV(); /*0x5fc95c*/
      goto LABEL_3; /*0x5fc95c*/
    case 2: /*0x5fc944*/
      if ( a11 ) /*0x5fc998*/
      {
        v11 = OblivionDynamicCast( /*0x5fc9a9*/
                a3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        Actor_ApplyMagicItemCooldown(a2, (int)v11); /*0x5fc9b4*/
      }
      goto LABEL_3; /*0x5fc9c4*/
    case 3: /*0x5fc944*/
LABEL_3:
      a7 = Calc_FatigueCastUse(*(float *)&a5); /*0x5fc96f*/
      goto Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply; /*0x5fc976*/
    case 8: /*0x5fc944*/
      if ( a8 && ((unsigned __int8)a1 & *(_BYTE *)(a8 + 0x7C)) != 0 ) /*0x5fc9ed*/
        goto LABEL_18; /*0x5fc9ed*/
      a1 = 1; /*0x5fc9f3*/
      SchoolAV = 0x13; /*0x5fc9f8*/
Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply:
      if ( a11 ) /*0x5fca05*/
      {
        if ( a1 != 2 && SchoolAV != 0x48 ) /*0x5fca13*/
          ((void (__thiscall *)(Actor *, int, int, _DWORD))a2->vtbl->ModExperience)(a2, SchoolAV, a1, 0.0);// Magic-item cost path: ordinary spell/enchantment schools use resolved school AV with useValue0; ingredient/alchemy case uses Alchemy with useValue1. Unsupported/sentinel cases skip the call. /*0x5fca28*/
        if ( a7 > 0.0 ) /*0x5fca39*/
        {
          v13 = -a7; /*0x5fca49*/
          ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))a2->vtbl->DamageAV_F)(a2, 9, LODWORD(v13), 0); /*0x5fca50*/
        }
        if ( delta <= 0.0 ) /*0x5fca65*/
        {
          Actor_MagicCaster_ApplyMagicItemCost_::Done__(a4, a5); /*0x5fca65*/
        }
        else
        {
          v12 = -delta; /*0x5fca6c*/
          Actor_ApplyNegativeFatigueDeltaClamped(a2, v12); /*0x5fca6f*/
        }
      }
      else
      {
LABEL_18:
        Actor_MagicCaster_ApplyMagicItemCost_::Done_(a4, a5); /*0x5fc9ed*/
      }
      return;
    default:
      goto Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply;
  }
}
