TESForm *__thiscall TESContainer_GetBestClothingForSlot(_DWORD *this, TESActorBase *a2, int a3)
{
  _DWORD *v3; // edi
  TESForm *v4; // ebp
  void *v6; // eax
  TESForm *v7; // esi
  float v9; // [esp+8h] [ebp-4h]
  float EquippableItemRating; // [esp+14h] [ebp+8h]

  v9 = flt_A3B888; /*0x469bd9*/
  v3 = this + 2; /*0x469bdd*/
  v4 = 0; /*0x469be0*/
  if ( this != (_DWORD *)0xFFFFFFF8 ) /*0x469be4*/
  {
    do /*0x469c58*/
    {
      if ( *v3 ) /*0x469bf0*/
      {
        v6 = OblivionDynamicCast( /*0x469c08*/
               *(void **)(*v3 + 4),
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectCLOT `RTTI Type Descriptor',
               0);
        v7 = (TESForm *)v6; /*0x469c0d*/
        if ( v6 ) /*0x469c14*/
        {
          if ( a3 != 0xFFFFFFFF && TESBipedModelForm_CoversSlot((unsigned __int16 *)v6 + 0x2E, a3, 0) ) /*0x469c21*/
          {
            EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v7); /*0x469c34*/
            if ( v9 < (double)EquippableItemRating ) /*0x469c47*/
            {
              v9 = EquippableItemRating; /*0x469c49*/
              v4 = v7; /*0x469c4d*/
            }
          }
        }
      }
      v3 = (_DWORD *)v3[1]; /*0x469c53*/
    }
    while ( v3 ); /*0x469c58*/
  }
  return v4; /*0x469c5c*/
}
