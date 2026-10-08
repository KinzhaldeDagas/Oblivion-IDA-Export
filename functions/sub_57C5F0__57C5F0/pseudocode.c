void __usercall sub_57C5F0(double st5_0@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // edi
  _DWORD *v10; // ebx
  BSStringT *v11; // esi
  _DWORD *v12; // ebp
  bool IsMenuVisibleByID; // al
  _DWORD *ParentMenu; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  InterfaceManager *v17; // eax
  InterfaceManager *v18; // eax
  Tile *v19; // ecx
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
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c634*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57c646*/
        __asm /*0x57c64b*/
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57c66f*/
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57c67b*/
          v11 = (BSStringT *)Menu_GetOpenMenuTile(0x3FE); /*0x57c687*/
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57c68e*/
          IsMenuVisibleByID = InterfaceManager_IsMenuVisibleByID(0x3FE, a6 != 0 ? 0xB : 0);
          if ( a5 ) /*0x57c6ae*/
          {
            if ( !IsMenuVisibleByID ) /*0x57c6b6*/
            {
              if ( OpenMenuTile ) /*0x57c6be*/
              {
                ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x57c6c2*/
                Menu::StartFadeOut(ParentMenu, st6_0); /*0x57c6c9*/
              }
              if ( v10 ) /*0x57c6d0*/
              {
                v15 = (_DWORD *)Tile_GetParentMenu(v10); /*0x57c6d4*/
                Menu::StartFadeOut(v15, st6_0); /*0x57c6db*/
              }
              if ( v12 ) /*0x57c6e2*/
              {
                v16 = (_DWORD *)Tile_GetParentMenu(v12); /*0x57c6e6*/
                Menu::StartFadeOut(v16, st6_0); /*0x57c6ed*/
              }
              if ( v11 || (v11 = sub_57A180(st5_0, st6_0, Float)) != 0 ) /*0x57c6ff*/
              {
                v17 = InterfaceManager_GetSingleton(0, 1); /*0x57c705*/
                __asm { fld     dword ptr ds:0A68C08h } /*0x57c70a*/
                __asm { fstp    [esp+18h+var_14]; value }
                Tile_SetFloat(v17->menuRoot, 0x1771u, v25); /*0x57c71f*/
              }
              v18 = InterfaceManager_GetSingleton(0, 1); /*0x57c728*/
              v18->unk054[3]->members.super.m_flags &= ~1u; /*0x57c730*/
              sub_5B3E90(st5_0, st6_0); /*0x57c739*/
              sub_57A260(st5_0); /*0x57c73e*/
              if ( v11 ) /*0x57c745*/
              {
                v19 = *(Tile **)(Tile_GetParentMenu(v11) + 0x4C); /*0x57c74e*/
                if ( v19 ) /*0x57c753*/
                  Tile::RequestNavigationScroll(v19); /*0x57c755*/
                v20 = (_DWORD *)Tile_GetParentMenu(v11); /*0x57c75c*/
                Menu::StartFadeIn(v20); /*0x57c763*/
              }
            }
          }
          else if ( IsMenuVisibleByID ) /*0x57c76c*/
          {
            if ( v11 ) /*0x57c770*/
            {
              v21 = (_DWORD *)Tile_GetParentMenu(v11); /*0x57c774*/
              Menu::StartFadeOut(v21, st6_0); /*0x57c77b*/
              v22 = InterfaceManager_GetSingleton(0, 1); /*0x57c784*/
              v22->unk054[3]->members.super.m_flags |= 1u; /*0x57c78c*/
              sub_5B3E90(st5_0, st6_0); /*0x57c794*/
            }
          }
          v23 = InterfaceManager_GetSingleton(0, 1); /*0x57c79d*/
          __asm { fldz } /*0x57c7a2*/
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v23->unk054[3], a2, 0); /*0x57c7b0*/
        }
      }
    }
  }
}
