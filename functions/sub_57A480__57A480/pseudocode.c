void __usercall sub_57A480(double st5_0@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  BSStringT *OpenMenuTile; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // ebx
  _DWORD *v12; // ebp
  bool IsMenuVisibleByID; // al
  _DWORD *ParentMenu; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  InterfaceManager *v17; // eax
  InterfaceManager *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  InterfaceManager *v22; // eax
  InterfaceManager *v23; // eax
  float a2; // [esp+0h] [ebp-18h]
  float v25; // [esp+4h] [ebp-14h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57a4c4*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57a4d6*/
        __asm /*0x57a4db*/
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (BSStringT *)Menu_GetOpenMenuTile(0x3EB); /*0x57a4ff*/
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57a50b*/
          v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x57a517*/
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57a51e*/
          IsMenuVisibleByID = InterfaceManager_IsMenuVisibleByID(0x3EB, a6 != 0 ? 0xB : 0);
          if ( a5 ) /*0x57a53e*/
          {
            if ( !IsMenuVisibleByID ) /*0x57a546*/
            {
              if ( v10 ) /*0x57a54e*/
              {
                ParentMenu = (_DWORD *)Tile_GetParentMenu(v10); /*0x57a552*/
                Menu::StartFadeOut(ParentMenu, st6_0); /*0x57a559*/
              }
              if ( v11 ) /*0x57a560*/
              {
                v15 = (_DWORD *)Tile_GetParentMenu(v11); /*0x57a564*/
                Menu::StartFadeOut(v15, st6_0); /*0x57a56b*/
              }
              if ( v12 ) /*0x57a572*/
              {
                v16 = (_DWORD *)Tile_GetParentMenu(v12); /*0x57a576*/
                Menu::StartFadeOut(v16, st6_0); /*0x57a57d*/
              }
              if ( OpenMenuTile || (OpenMenuTile = sub_57A440(st5_0, st6_0, Float)) != 0 ) /*0x57a58f*/
              {
                v17 = InterfaceManager_GetSingleton(0, 1); /*0x57a595*/
                __asm { fld     dword ptr ds:0A68C00h } /*0x57a59a*/
                __asm { fstp    [esp+18h+var_14]; value }
                Tile_SetFloat(v17->menuRoot, 0x1771u, v25); /*0x57a5af*/
              }
              v18 = InterfaceManager_GetSingleton(0, 1); /*0x57a5b8*/
              v18->unk054[3]->members.super.m_flags &= ~1u; /*0x57a5c0*/
              sub_5B3E90(st5_0, st6_0); /*0x57a5c9*/
              if ( OpenMenuTile ) /*0x57a5d0*/
              {
                v19 = Tile_GetParentMenu(OpenMenuTile); /*0x57a5d4*/
                sub_5DCEF0(v19); /*0x57a5db*/
                sub_58FBA0((int)OpenMenuTile, st5_0, st6_0, Float, 0); /*0x57a5e4*/
                v20 = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x57a5eb*/
                Menu::StartFadeIn(v20); /*0x57a5f2*/
              }
            }
          }
          else if ( IsMenuVisibleByID ) /*0x57a5fb*/
          {
            if ( OpenMenuTile ) /*0x57a5ff*/
            {
              v21 = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x57a603*/
              Menu::StartFadeOut(v21, st6_0); /*0x57a60a*/
              v22 = InterfaceManager_GetSingleton(0, 1); /*0x57a613*/
              v22->unk054[3]->members.super.m_flags |= 1u; /*0x57a61b*/
              sub_5B3E90(st5_0, st6_0); /*0x57a623*/
            }
          }
          v23 = InterfaceManager_GetSingleton(0, 1); /*0x57a62c*/
          __asm { fldz } /*0x57a631*/
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v23->unk054[3], a2, 0); /*0x57a63f*/
        }
      }
    }
  }
}
