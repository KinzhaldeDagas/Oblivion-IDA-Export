double __usercall sub_57B7E0@<st0>(double a1@<st2>, double result@<st0>)
{
  InterfaceManager *Singleton; // eax
  double Float; // st6
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  double (__thiscall ***v8)(void *, int); // eax

  if ( InterfaceManager_GetSingleton(0, 1) ) /*0x57b7e4*/
  {
    if ( InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b800*/
    {
      if ( InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b816*/
      {
        Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b824*/
        Float = Tile_GetFloat(Singleton->menuRoot, 0xFAE); /*0x57b836*/
        if ( Float == fConstant_2 ) /*0x57b846*/
        {
          MagicTarget_RemoveNonPersistentEffects(&reference->super.super.magicTarget, result, 0); /*0x57b857*/
          MagicTarget_ProcessEffects(&reference->super.super.magicTarget, 0.0); /*0x57b86b*/
          ActorProcessManager_FinishHitEffectsForTarget( /*0x57b87b*/
            (ActorProcessManager *)&qword_B3BB2C[0x75],
            (TESObjectREFR *)reference);
          ActorProcessManager_UpdateTempEffects((ActorProcessManager *)&qword_B3BB2C[0x75], 0.0); /*0x57b88b*/
          result = 0.0; /*0x57b890*/
          unk_B46124 = 0.0;                     // MoonSugarEffect decode: RaceSex/menu reset path zeros native Gethit intensity globals flt_B46124/flt_B46120. /*0x57b894*/
          unk_B46120 = 0.0; /*0x57b89f*/
          OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40C); /*0x57b8b1*/
          ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x57b8bb*/
          v8 = (double (__thiscall ***)(void *, int))OblivionDynamicCast( /*0x57b8c1*/
                                                       ParentMenu,
                                                       0,
                                                       (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                                                       &RaceSexMenu `RTTI Type Descriptor',
                                                       0);
          if ( v8 ) /*0x57b8cb*/
            result = (**v8)(v8, 1); /*0x57b8d5*/
          sub_5CA010(a1, result, Float); /*0x57b8d9*/
        }
      }
    }
  }
  return result; /*0x57b8df*/
}
