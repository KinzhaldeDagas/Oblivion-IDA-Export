int __usercall Actor_MagicTarget_AttemptAddEffect_::AttemptAdd@<eax>(
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
  void *v11; // eax
  void *v12; // edi
  int *v13; // ebp
  int v14; // ebx
  char v15; // bl
  _DWORD *v16; // eax
  int v17; // eax

  MagicTarget_AttemptAddEffect(a2, a4, (int)a8, *(float *)&a3, a10, 0);
  if ( !EffectItemList_HasHostile(a3 + 3) )
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, a8);
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 1 )
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, a8);
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 4 )
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, a8);
  v11 = OblivionDynamicCast(
          a8,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
          &Actor `RTTI Type Descriptor',
          0);
  v12 = v11;
  if ( !v11 )
    return Actor_MagicTarget_AttemptAddEffect_::Done(a5, a6, a7, a8);
  v13 = a2 + 0xFFFFFFE6;
  v14 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)v11 + 0x170))(v11, a1);
  if ( v14 == (*(int (__thiscall **)(int *))(*v13 + 0x170))(v13) )
    return Actor_MagicTarget_AttemptAddEffect_::Done_(a5, a6, a7, a8);
  Script_AddEventToExtraScript(v12, a6, 0x80);
  v15 = 1;
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) == 6 )
  {
    v16 = OblivionDynamicCast(
            a3,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &EnchantmentItem `RTTI Type Descriptor',
            0);
    if ( v16 )
    {
      if ( v16[0xD] == 2 )
      {
        v17 = *(_DWORD *)(a10 + 0x30);
        if ( !v17 || *(_BYTE *)(v17 + 4) != 0x22 || !a11 )
          v15 = 0;
      }
    }
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*a3 + 0x18))(a3) != 7 )
  {
    if ( v15 )
      (*(void (__thiscall **)(int *, void *, int))(*v13 + 0x3A8))(v13, v12, a10);
  }
  return Actor_MagicTarget_AttemptAddEffect_::UpdateHUDHealthBar(a5, a6, a7, a8);
}
