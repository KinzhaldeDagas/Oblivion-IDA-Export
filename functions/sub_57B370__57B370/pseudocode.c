// Native skill-mastery perk presentation entry that opens skill_perk.xml with typed varargs. Synthetic Medium Armor mastery feedback should use this path, with ordinary HUD text only as fallback.
char __usercall sub_57B370@<al>(
        char *a1@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        char *a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int a8,
        char a9)
{
  InterfaceManager *Singleton; // eax
  char *v12; // [esp+0h] [ebp-4h] BYREF

  v12 = a1; /*0x57b370*/
  if ( !InterfaceManager_GetSingleton(0, 1) ) /*0x57b375*/
    return 0; /*0x57b375*/
  if ( !InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57b38d*/
    return 0; /*0x57b38d*/
  if ( !InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x57b39f*/
    return 0; /*0x57b39f*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57b3a9*/
  if ( Tile_GetFloat(Singleton->menuRoot, 0xFAE) != fConstant_2 ) /*0x57b3cb*/
    return 0; /*0x57b3fc*/
  v12 = &a9; /*0x57b3e2*/
  return sub_5A3FF0(a3, a2, a4, a5, a6, a7, a8, &v12); /*0x57b3fb*/
}
