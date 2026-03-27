// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicCaster_ApplyMagicItemCost_::SwitchMagicType(
        int a1@<ebx>,
        _DWORD *a2@<ebp>,
        void *a3@<esi>,
        int a4,
        float a5,
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
  float v14; // [esp+0h] [ebp-8h]

  switch ( (*(int (__thiscall **)(void *))(*(_DWORD *)a3 + 0x18))(a3) )
  {
    case 0:
    case 5:
      a1 = 0;
      SchoolAV = EffectItemList_GetSchoolAV();
      goto LABEL_3;
    case 2:
      if ( a11 )
      {
        v11 = OblivionDynamicCast(
                a3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        Actor_ApplyMagicItemCooldown(a2, (int)v11);
      }
      goto LABEL_3;
    case 3:
LABEL_3:
      a7 = Calc_FatigueCastUse(a5);
      goto Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply;
    case 8:
      if ( a8 && ((unsigned __int8)a1 & *(_BYTE *)(a8 + 0x7C)) != 0 )
        goto LABEL_18;
      a1 = 1;
      SchoolAV = 0x13;
Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply:
      if ( a11 )
      {
        if ( a1 != 2 && SchoolAV != 0x48 )
          (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*a2 + 0x39C))(a2, SchoolAV, a1, 0.0);
        if ( a7 > 0.0 )
        {
          v13 = -a7;
          (*(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD))(*a2 + 0x2A4))(a2, 9, LODWORD(v13), 0);
        }
        if ( v14 <= 0.0 )
        {
          ((void (__stdcall *)(int, _DWORD))Actor_MagicCaster_ApplyMagicItemCost_::Done__)(a4, LODWORD(a5));
        }
        else
        {
          v12 = -v14;
          Actor_ModFatigue_(a2, v12);
        }
      }
      else
      {
LABEL_18:
        Actor_MagicCaster_ApplyMagicItemCost_::Done_(a4, LODWORD(a5));
      }
      return;
    default:
      goto Actor_MagicCaster_ApplyMagicItemCost___Actor_MagicCaster_ApplyMagicItemCost_Apply;
  }
}
