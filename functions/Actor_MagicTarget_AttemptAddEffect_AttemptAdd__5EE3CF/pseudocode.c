char __usercall Actor_MagicTarget_AttemptAddEffect_::AttemptAdd@<al>(
        int a1@<ebx>,
        int *a2@<ebp>,
        _DWORD *a3@<esi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        void *a8,
        int a9,
        int a10,
        char a11)
{
  PlayerCharacter *v11; // eax
  PlayerCharacter *v12; // edi
  Actor *v13; // ebp
  int v14; // ebx
  char v15; // bl
  _DWORD *v16; // eax
  int v17; // eax

  MagicTarget_AttemptAddEffect(a2, a4, (int)a8, *(float *)&a3, a10, 0); /*0x5ee3df*/
  if ( !EffectItemList_HasHostile(a3 + 3) ) /*0x5ee3eb*/
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, (int)a8); /*0x5ee3eb*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 1 ) /*0x5ee404*/
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, (int)a8); /*0x5ee404*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 4 ) /*0x5ee416*/
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, (int)a8); /*0x5ee416*/
  v11 = (PlayerCharacter *)OblivionDynamicCast( /*0x5ee42b*/
                             a8,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v12 = v11; /*0x5ee430*/
  if ( !v11 ) /*0x5ee437*/
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, (int)a8); /*0x5ee3f2*/
  v13 = (Actor *)(a2 + 0xFFFFFFE6); /*0x5ee448*/
  v14 = ((int (__thiscall *)(PlayerCharacter *, int))v11->vtbl->super.super.super.GetBaseForm)(v11, a1); /*0x5ee450*/
  if ( (TESForm *)v14 == v13->vtbl->super.super.GetBaseForm((TESObjectREFR *)v13) ) /*0x5ee45e*/
    return Actor_MagicTarget_AttemptAddEffect_::Done_(a5, a6, a7, (int)a8); /*0x5ee45e*/
  Script_AddEventToExtraScript(v12, a6, 0x80); /*0x5ee46f*/
  v15 = 1; /*0x5ee47e*/
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 6 ) /*0x5ee485*/
  {
    v16 = OblivionDynamicCast( /*0x5ee496*/
            a3,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &EnchantmentItem `RTTI Type Descriptor',
            0);
    if ( v16 ) /*0x5ee4a0*/
    {
      if ( v16[0xD] == 2 ) /*0x5ee4a6*/
      {
        v17 = *(_DWORD *)(a10 + 0x30); /*0x5ee4ac*/
        if ( !v17 || *(_BYTE *)(v17 + 4) != 0x22 || !a11 ) /*0x5ee4be*/
          v15 = 0; /*0x5ee4c0*/
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) != 7 ) /*0x5ee4ce*/
  {
    if ( v15 ) /*0x5ee4d2*/
      ((void (__thiscall *)(Actor *, PlayerCharacter *, int))v13->vtbl->Unk_EA)(v13, v12, a10); /*0x5ee4e5*/
  }
  return Actor_MagicTarget_AttemptAddEffect_::UpdateHUDHealthBar(v13, v12, a5, a6, a7, (int)a8);
}
