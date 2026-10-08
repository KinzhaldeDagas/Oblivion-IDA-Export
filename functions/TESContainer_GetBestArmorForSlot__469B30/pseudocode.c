TESForm *__thiscall TESContainer_GetBestArmorForSlot(_DWORD *this, TESActorBase *a2, int a3)
{
  _DWORD *v3; // edi
  TESForm *v4; // ebp
  void *v6; // eax
  TESForm *v7; // esi
  float v9; // [esp+8h] [ebp-4h]
  float EquippableItemRating; // [esp+14h] [ebp+8h]

  v9 = flt_A3B888; /*0x469b39*/
  v3 = this + 2; /*0x469b3d*/
  v4 = 0; /*0x469b40*/
  if ( this != (_DWORD *)0xFFFFFFF8 ) /*0x469b44*/
  {
    do /*0x469bb8*/
    {
      if ( *v3 ) /*0x469b50*/
      {
        v6 = OblivionDynamicCast( /*0x469b68*/
               *(void **)(*v3 + 4),
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectARMO `RTTI Type Descriptor',
               0);
        v7 = (TESForm *)v6; /*0x469b6d*/
        if ( v6 ) /*0x469b74*/
        {
          if ( a3 != 0xFFFFFFFF && TESBipedModelForm_CoversSlot((unsigned __int16 *)v6 + 0x32, a3, 0) ) /*0x469b81*/
          {
            EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v7); /*0x469b94*/
            if ( v9 < (double)EquippableItemRating ) /*0x469ba7*/
            {
              v9 = EquippableItemRating; /*0x469ba9*/
              v4 = v7; /*0x469bad*/
            }
          }
        }
      }
      v3 = (_DWORD *)v3[1]; /*0x469bb3*/
    }
    while ( v3 ); /*0x469bb8*/
  }
  return v4; /*0x469bbc*/
}
