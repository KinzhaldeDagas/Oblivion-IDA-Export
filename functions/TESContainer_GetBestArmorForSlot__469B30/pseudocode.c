unsigned __int8 *__thiscall TESContainer_GetBestArmorForSlot(_DWORD *this, int *a2, int a3)
{
  _DWORD *v3; // edi
  unsigned __int8 *v4; // ebp
  void *v6; // eax
  unsigned __int8 *v7; // esi
  float v9; // [esp+8h] [ebp-4h]
  float EquippableItemRating; // [esp+14h] [ebp+8h]

  v9 = flt_A3B888;
  v3 = this + 2;
  v4 = 0;
  if ( this != (_DWORD *)0xFFFFFFF8 )
  {
    do
    {
      if ( *v3 )
      {
        v6 = OblivionDynamicCast(
               *(void **)(*v3 + 4),
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESObjectARMO `RTTI Type Descriptor',
               0);
        v7 = (unsigned __int8 *)v6;
        if ( v6 )
        {
          if ( a3 != 0xFFFFFFFF && TESBipedModelForm_CoversSlot((unsigned __int16 *)v6 + 0x32, a3, 0) )
          {
            EquippableItemRating = TESActorBase_GetEquippableItemRating(a2, v7);
            if ( v9 < (double)EquippableItemRating )
            {
              v9 = EquippableItemRating;
              v4 = v7;
            }
          }
        }
      }
      v3 = (_DWORD *)v3[1];
    }
    while ( v3 );
  }
  return v4;
}
