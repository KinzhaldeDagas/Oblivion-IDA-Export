void __usercall sub_57C7C0(double st6_0@<st1>, double st5_0@<st2>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // ebp
  bool IsMenuVisibleByID; // al
  _DWORD *ParentMenu; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  InterfaceManager *v17; // eax
  InterfaceManager *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  InterfaceManager *v21; // eax
  InterfaceManager *v22; // eax
  float a2; // [esp+0h] [ebp-18h]
  float v24; // [esp+4h] [ebp-14h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c804*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57c816*/
        __asm /*0x57c81b*/
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57c83f*/
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57c84b*/
          v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x57c857*/
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57c85e*/
          IsMenuVisibleByID = InterfaceManager_IsMenuVisibleByID(0x3EA, a6 != 0 ? 0xB : 0);
          if ( a5 ) /*0x57c87e*/
          {
            if ( !IsMenuVisibleByID ) /*0x57c886*/
            {
              if ( OpenMenuTile ) /*0x57c88e*/
              {
                ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x57c892*/
                Menu::StartFadeOut(ParentMenu, st6_0); /*0x57c899*/
              }
              if ( v11 ) /*0x57c8a0*/
              {
                v15 = (_DWORD *)Tile_GetParentMenu(v11); /*0x57c8a4*/
                Menu::StartFadeOut(v15, st6_0); /*0x57c8ab*/
              }
              if ( v12 ) /*0x57c8b2*/
              {
                v16 = (_DWORD *)Tile_GetParentMenu(v12); /*0x57c8b6*/
                Menu::StartFadeOut(v16, st6_0); /*0x57c8bd*/
              }
              if ( v10 ) /*0x57c8c4*/
                sub_57A3B0(st6_0, 1); /*0x57c8d1*/
              else
                v10 = (_DWORD *)sub_57A2D0(Float, st6_0); /*0x57c8cb*/
              if ( v10 ) /*0x57c8db*/
              {
                v17 = InterfaceManager_GetSingleton(0, 1); /*0x57c8e1*/
                __asm { fld     dword ptr ds:0A68C0Ch } /*0x57c8e6*/
                __asm { fstp    [esp+18h+var_14]; value }
                Tile_SetFloat(v17->menuRoot, 0x1771u, v24); /*0x57c8fb*/
              }
              v18 = InterfaceManager_GetSingleton(0, 1); /*0x57c904*/
              v18->unk054[3]->members.super.m_flags &= ~1u; /*0x57c90c*/
              sub_5B3E90(st5_0, st6_0); /*0x57c915*/
              if ( v10 ) /*0x57c91c*/
              {
                v19 = (_DWORD *)Tile_GetParentMenu(v10); /*0x57c920*/
                Menu::StartFadeIn(v19); /*0x57c927*/
              }
            }
          }
          else if ( IsMenuVisibleByID ) /*0x57c930*/
          {
            if ( v10 ) /*0x57c934*/
            {
              v20 = (_DWORD *)Tile_GetParentMenu(v10); /*0x57c938*/
              Menu::StartFadeOut(v20, st6_0); /*0x57c93f*/
              v21 = InterfaceManager_GetSingleton(0, 1); /*0x57c948*/
              v21->unk054[3]->members.super.m_flags |= 1u; /*0x57c950*/
              sub_5B3E90(st5_0, st6_0); /*0x57c958*/
            }
          }
          v22 = InterfaceManager_GetSingleton(0, 1); /*0x57c961*/
          __asm { fldz } /*0x57c966*/
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v22->unk054[3], a2, 0); /*0x57c974*/
        }
      }
    }
  }
}
