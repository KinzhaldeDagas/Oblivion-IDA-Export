void __usercall sub_5AF960(double a1@<st2>, double a2@<st7>, double a3@<st6>, double a4@<st5>, double a5@<st4>)
{
  Tile *OpenMenuTile; // eax
  int ParentMenu; // eax
  _DWORD *v8; // ebx
  _DWORD *v9; // eax
  int **v10; // esi
  int v11; // ebp
  int *v12; // edi
  double v13; // st7
  Tile *v14; // [esp+14h] [ebp-4h]

  sub_583DF0(0xFF); /*0x5af966*/
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F6); /*0x5af970*/
  v14 = OpenMenuTile; /*0x5af97a*/
  if ( OpenMenuTile ) /*0x5af97d*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5af986*/
    v8 = (_DWORD *)ParentMenu; /*0x5af98b*/
    if ( ParentMenu ) /*0x5af98f*/
    {
      v9 = OblivionDynamicCast( /*0x5af9aa*/
             *(void **)(ParentMenu + 0x144),
             0,
             (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
             &Tile3D `RTTI Type Descriptor',
             0);
      if ( !v9 ) /*0x5af9b4*/
        return; /*0x5af9b4*/
      if ( !v9[0x11] && v8[0x54] != 6 ) /*0x5af9c7*/
      {
        v10 = (int **)(v8 + 0x28); /*0x5af9cc*/
        v11 = 5; /*0x5af9d2*/
        do /*0x5af9fe*/
        {
          if ( *v10 ) /*0x5af9d7*/
          {
            sub_6B73C0(*v10); /*0x5af9dd*/
            v12 = *v10; /*0x5af9e2*/
            if ( *v10 ) /*0x5af9e2*/
            {
              sub_6B73E0(*v10); /*0x5af9ea*/
              FormHeapFree((unsigned int)v12); /*0x5af9f0*/
            }
          }
          v10 += 0xA; /*0x5af9f8*/
          --v11; /*0x5af9fb*/
        }
        while ( v11 ); /*0x5af9fe*/
        v13 = fConstant_2; /*0x5afa00*/
        Tile_SetFloat(v14, 0x1772u, fConstant_2); /*0x5afa13*/
        Menu::StartFadeOut(v8, a2, a3, a4, a5, a1, v13); /*0x5afa1a*/
        v8[0x54] = 6; /*0x5afa21*/
      }
    }
    sub_583DF0(0xFF); /*0x5afa31*/
  }
}
