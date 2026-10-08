void __usercall sub_57C420(double st5_0@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // edi
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  bool IsMenuVisibleByID; // al
  _DWORD *ParentMenu; // eax
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // eax
  InterfaceManager *v18; // eax
  InterfaceManager *v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  InterfaceManager *v22; // eax
  int v23; // eax
  InterfaceManager *v24; // eax
  float a2; // [esp+8h] [ebp-18h]
  float v26; // [esp+Ch] [ebp-14h]

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57c464*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57c476*/
        __asm /*0x57c47b*/
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB); /*0x57c49f*/
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x57c4ab*/
          v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE); /*0x57c4b7*/
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF); /*0x57c4be*/
          IsMenuVisibleByID = InterfaceManager_IsMenuVisibleByID(0x3FF, a6 != 0 ? 0xB : 0);
          if ( a5 ) /*0x57c4de*/
          {
            if ( !IsMenuVisibleByID ) /*0x57c4e6*/
            {
              if ( OpenMenuTile ) /*0x57c4ee*/
              {
                ParentMenu = (_DWORD *)Tile_GetParentMenu(OpenMenuTile); /*0x57c4f2*/
                Menu::StartFadeOut(ParentMenu, st6_0); /*0x57c4f9*/
              }
              if ( v11 ) /*0x57c500*/
              {
                v15 = (_DWORD *)Tile_GetParentMenu(v11); /*0x57c504*/
                Menu::StartFadeOut(v15, st6_0); /*0x57c50b*/
              }
              if ( v10 ) /*0x57c512*/
              {
                v16 = (_DWORD *)Tile_GetParentMenu(v10); /*0x57c516*/
                Menu::StartFadeOut(v16, st6_0); /*0x57c51d*/
              }
              if ( v12 || (Float = sub_579F80(st5_0, st6_0, Float), (v12 = v17) != 0) ) /*0x57c52f*/
              {
                v18 = InterfaceManager_GetSingleton(0, 1); /*0x57c535*/
                __asm { fld     dword ptr ds:0A68C04h } /*0x57c53a*/
                __asm { fstp    [esp+18h+var_14]; value }
                Tile_SetFloat(v18->menuRoot, 0x1771u, v26); /*0x57c54f*/
              }
              v19 = InterfaceManager_GetSingleton(0, 1); /*0x57c558*/
              v19->unk054[3]->members.super.m_flags &= ~1u; /*0x57c560*/
              sub_5B3E90(st5_0, st6_0); /*0x57c569*/
              if ( v12 ) /*0x57c570*/
              {
                v20 = (_DWORD *)Tile_GetParentMenu(v12); /*0x57c574*/
                Menu::StartFadeIn(v20); /*0x57c57b*/
              }
              sub_57A060(st5_0, st6_0, Float); /*0x57c580*/
            }
          }
          else if ( IsMenuVisibleByID ) /*0x57c589*/
          {
            if ( v12 ) /*0x57c58d*/
            {
              v21 = (_DWORD *)Tile_GetParentMenu(v12); /*0x57c591*/
              Menu::StartFadeOut(v21, st6_0); /*0x57c598*/
              v22 = InterfaceManager_GetSingleton(0, 1); /*0x57c5a1*/
              v22->unk054[3]->members.super.m_flags |= 1u; /*0x57c5a9*/
              v23 = Tile_GetParentMenu(v12); /*0x57c5b3*/
              (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v23 + 0x14))(v23, 0, 0); /*0x57c5c3*/
              sub_5B3E90(st5_0, st6_0); /*0x57c5c5*/
            }
          }
          v24 = InterfaceManager_GetSingleton(0, 1); /*0x57c5ce*/
          __asm { fldz } /*0x57c5d3*/
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v24->unk054[3], a2, 0); /*0x57c5e1*/
        }
      }
    }
  }
}
