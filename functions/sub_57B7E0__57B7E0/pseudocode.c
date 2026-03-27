void __usercall sub_57B7E0(char a1@<bpl>, double a2@<st1>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st5
  double v5; // st7
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v8)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) )
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor )
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        Singleton = InterfaceManager_GetSingleton(0, 1);
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE);
        if ( Float == fConstant_2 )
        {
          MagicTarget_RemoveNonPersistentEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, 0);
          MagicTarget_ProcessEffects(&TESDataHandler_g_PlayerRef->super.super.magicTarget, COERCE_INT(0.0));
          sub_678D90((int *)&ActorProcessManager_ptr, (LONG)TESDataHandler_g_PlayerRef);
          sub_67ACA0((int *)&ActorProcessManager_ptr, COERCE_INT(0.0));
          v5 = 0.0;
          flt_B46124 = 0.0;
          flt_B46120 = 0.0;
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C);
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
          v8 = (double (__thiscall ***)(void *, int))OblivionDynamicCast(
                                                       ParentMenu,
                                                       0,
                                                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                       &RaceSexMenu `RTTI Type Descriptor',
                                                       0);
          if ( v8 )
            v5 = (**v8)(v8, 1);
          sub_5CA010(a1, Float, v5, a2);
        }
      }
    }
  }
}
