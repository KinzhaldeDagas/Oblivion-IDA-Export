char __usercall sub_50B590@<al>(
        char a1@<bpl>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double a8@<st6>,
        double a9@<st5>,
        int a10,
        int a11,
        void *a12)
{
  PlayerCharacter *v13; // eax
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v16; // eax

  if ( !a12 ) /*0x50b596*/
    return 0; /*0x50b59a*/
  v13 = (PlayerCharacter *)OblivionDynamicCast( /*0x50b5aa*/
                             a12,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( !v13 ) /*0x50b5b4*/
    return 1; /*0x50b5b4*/
  if ( v13 != reference ) /*0x50b5bc*/
  {
    v13->vtbl->super.Unk_AD((Actor *)v13); /*0x50b612*/
    return 1; /*0x50b614*/
  }
  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F1); /*0x50b5c3*/
  if ( OpenMenuTile ) /*0x50b5cd*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x50b5df*/
    v16 = OblivionDynamicCast( /*0x50b5e5*/
            ParentMenu,
            0,
            (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
            &DialogMenu `RTTI Type Descriptor',
            0);
    if ( v16 ) /*0x50b5ef*/
      v16[0x94] = 1; /*0x50b5f1*/
  }
  sub_670CA0((int *)reference, a7, a4, a5, a6, a2, a3, a1, a8, a9, 0.0); /*0x50b600*/
  return 1; /*0x50b59a*/
}
