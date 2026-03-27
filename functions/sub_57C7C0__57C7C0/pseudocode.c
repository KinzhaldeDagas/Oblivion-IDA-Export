void __usercall sub_57C7C0(double st6_0@<st1>, double st5_0@<st2>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  _DWORD *OpenMenuTile; // edi
  _DWORD *v10; // esi
  _DWORD *v11; // ebx
  _DWORD *v12; // ebp
  bool v13; // al
  int ParentMenu; // eax
  int v15; // eax
  int v16; // eax
  InterfaceManager *v17; // eax
  InterfaceManager *v18; // eax
  int v19; // eax
  int v20; // eax
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
          v13 = sub_5790E0(0x3EA, a6 != 0 ? 0xB : 0);
          if ( a5 )
          {
            if ( !v13 )
            {
              if ( OpenMenuTile )
              {
                ParentMenu = Tile_GetParentMenu(OpenMenuTile);
                sub_584740(ParentMenu, st5_0, st6_0, (char)v12, Float);
              }
              if ( v11 )
              {
                v15 = Tile_GetParentMenu(v11);
                sub_584740(v15, st5_0, st6_0, (char)v12, Float);
              }
              if ( v12 )
              {
                v16 = Tile_GetParentMenu(v12);
                sub_584740(v16, st5_0, st6_0, (char)v12, Float);
              }
              if ( v10 )
                sub_57A3B0(st5_0, st6_0, 1);
              else
                v10 = (_DWORD *)sub_57A2D0(Float, st6_0);
              if ( v10 )
              {
                v17 = InterfaceManager_GetSingleton(0, 1);
                __asm { fld     dword ptr ds:0A68C0Ch }
                __asm { fstp    [esp+18h+var_14]; a3 }
                Tile_SetFloat(v17->menuRoot, (_DWORD *)0x1771, v24);
              }
              v18 = InterfaceManager_GetSingleton(0, 1);
              v18->unk054[3]->members.super.m_flags &= ~1u;
              sub_5B3E90(st5_0, st6_0, (char)v12);
              if ( v10 )
              {
                v19 = Tile_GetParentMenu(v10);
                sub_584390(v19, (char)v12, st5_0, st6_0);
              }
            }
          }
          else if ( v13 )
          {
            if ( v10 )
            {
              v20 = Tile_GetParentMenu(v10);
              sub_584740(v20, st5_0, st6_0, (char)v12, Float);
              v21 = InterfaceManager_GetSingleton(0, 1);
              v21->unk054[3]->members.super.m_flags |= 1u;
              sub_5B3E90(st5_0, st6_0, (char)v12);
            }
          }
          v22 = InterfaceManager_GetSingleton(0, 1);
          __asm { fldz }
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v22->unk054[3], a2, 0);
        }
      }
    }
  }
}
