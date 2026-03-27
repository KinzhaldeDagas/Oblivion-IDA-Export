void __usercall sub_57C420(double st5_0@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // edi
  _DWORD *v10; // ebp
  _DWORD *v11; // ebx
  _DWORD *v12; // esi
  bool v13; // al
  int ParentMenu; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  InterfaceManager *v18; // eax
  InterfaceManager *v19; // eax
  int v20; // eax
  int v21; // eax
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
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
        __asm
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EB);
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
          v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE);
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
          v13 = sub_5790E0(0x3FF, a6 != 0 ? 0xB : 0);
          if ( a5 )
          {
            if ( !v13 )
            {
              if ( OpenMenuTile )
              {
                ParentMenu = Tile_GetParentMenu(OpenMenuTile);
                sub_584740(ParentMenu, st5_0, st6_0, (char)v10, Float);
              }
              if ( v11 )
              {
                v15 = Tile_GetParentMenu(v11);
                sub_584740(v15, st5_0, st6_0, (char)v10, Float);
              }
              if ( v10 )
              {
                v16 = Tile_GetParentMenu(v10);
                sub_584740(v16, st5_0, st6_0, (char)v10, Float);
              }
              if ( v12 || (Float = sub_579F80((char)v10, st5_0, st6_0), (v12 = v17) != 0) )
              {
                v18 = InterfaceManager_GetSingleton(0, 1);
                __asm { fld     dword ptr ds:0A68C04h }
                __asm { fstp    [esp+18h+var_14]; a3 }
                Tile_SetFloat(v18->menuRoot, (_DWORD *)0x1771, v26);
              }
              v19 = InterfaceManager_GetSingleton(0, 1);
              v19->unk054[3]->members.super.m_flags &= ~1u;
              sub_5B3E90(st5_0, st6_0, (char)v10);
              if ( v12 )
              {
                v20 = Tile_GetParentMenu(v12);
                sub_584390(v20, (char)v10, st5_0, st6_0);
              }
              sub_57A060(st5_0, st6_0, Float);
            }
          }
          else if ( v13 )
          {
            if ( v12 )
            {
              v21 = Tile_GetParentMenu(v12);
              sub_584740(v21, st5_0, st6_0, (char)v10, Float);
              v22 = InterfaceManager_GetSingleton(0, 1);
              v22->unk054[3]->members.super.m_flags |= 1u;
              v23 = Tile_GetParentMenu(v12);
              (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v23 + 0x14))(v23, 0, 0);
              sub_5B3E90(st5_0, st6_0, (char)v10);
            }
          }
          v24 = InterfaceManager_GetSingleton(0, 1);
          __asm { fldz }
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v24->unk054[3], a2, 0);
        }
      }
    }
  }
}
