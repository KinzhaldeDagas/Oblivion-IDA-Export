void __usercall sub_57A480(double st5_0@<st2>, double st6_0@<st1>, char a3@<bpl>, double a4@<st0>, char a5, char a6)
{
  InterfaceManager *Singleton; // eax
  double Float; // st7
  unsigned int *OpenMenuTile; // esi
  _DWORD *v10; // edi
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
  int v21; // eax
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
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
        __asm
        {
          fcomp   dword ptr ds:0A379B4h
          fnstsw  ax
        }
        if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        {
          OpenMenuTile = (unsigned int *)Menu_GetOpenMenuTile(0x3EB);
          v10 = (_DWORD *)Menu_GetOpenMenuTile(0x3EA);
          v11 = (_DWORD *)Menu_GetOpenMenuTile(0x3FE);
          v12 = (_DWORD *)Menu_GetOpenMenuTile(0x3FF);
          v13 = sub_5790E0(0x3EB, a6 != 0 ? 0xB : 0);
          if ( a5 )
          {
            if ( !v13 )
            {
              if ( v10 )
              {
                ParentMenu = Tile_GetParentMenu(v10);
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
              if ( OpenMenuTile || (OpenMenuTile = sub_57A440((char)v12, (int)v10, st5_0, st6_0, Float)) != 0 )
              {
                v17 = InterfaceManager_GetSingleton(0, 1);
                __asm { fld     dword ptr ds:0A68C00h }
                __asm { fstp    [esp+18h+var_14]; a3 }
                Tile_SetFloat(v17->menuRoot, (_DWORD *)0x1771, v25);
              }
              v18 = InterfaceManager_GetSingleton(0, 1);
              v18->unk054[3]->members.super.m_flags &= ~1u;
              sub_5B3E90(st5_0, st6_0, (char)v12);
              if ( OpenMenuTile )
              {
                v19 = Tile_GetParentMenu(OpenMenuTile);
                sub_5DCEF0(v19);
                sub_58FBA0((int)OpenMenuTile, st5_0, st6_0, Float, 0);
                v20 = Tile_GetParentMenu(OpenMenuTile);
                sub_584390(v20, (char)v12, st5_0, st6_0);
              }
            }
          }
          else if ( v13 )
          {
            if ( OpenMenuTile )
            {
              v21 = Tile_GetParentMenu(OpenMenuTile);
              sub_584740(v21, st5_0, st6_0, (char)v12, Float);
              v22 = InterfaceManager_GetSingleton(0, 1);
              v22->unk054[3]->members.super.m_flags |= 1u;
              sub_5B3E90(st5_0, st6_0, (char)v12);
            }
          }
          v23 = InterfaceManager_GetSingleton(0, 1);
          __asm { fldz }
          __asm { fstp    [esp+18h+a2]; a2 }
          NiAVObject_UpdateNiAVObject((NiAVObject *)v23->unk054[3], a2, 0);
        }
      }
    }
  }
}
