// [Controller decode 2026-07-09] ToggleCharControllerShape execute callback. Requires actor target and toggles Havok character-controller shape type.
char __cdecl Cmd_ToggleCharControllerShape_Execute(int a1, int a2, void *a3)
{
  MobileObject *v3; // eax
  int *CharProxy; // eax
  signed int v5; // edx

  if ( a3 ) /*0x507c06*/
  {
    v3 = (MobileObject *)OblivionDynamicCast( /*0x507c17*/
                           a3,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
    if ( v3 ) /*0x507c21*/
    {
      CharProxy = (int *)MobileObject_GetCharProxy(v3); /*0x507c25*/
      if ( CharProxy ) /*0x507c2c*/
      {
        v5 = CharProxy[0xDB]; /*0x507c2e*/
        if ( !v5 ) /*0x507c36*/
        {
          bhkCharacterController_SetShapeType(CharProxy, 1); /*0x507c40*/
          return 1; /*0x507c47*/
        }
        if ( v5 == 1 ) /*0x507c4b*/
          v5 = 0; /*0x507c4d*/
        bhkCharacterController_SetShapeType(CharProxy, v5); /*0x507c52*/
      }
    }
  }
  return 1; /*0x507c47*/
}
