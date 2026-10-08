void __stdcall sub_446B90(
        TESObjectCELL *a1,
        float *a2,
        float a3,
        float *a4,
        float a5,
        unsigned __int8 (__cdecl *a6)(TESObjectREFR *, int),
        int a7)
{
  TESWorldSpace *WorldSpace; // eax

  if ( a1 ) /*0x446b97*/
  {
    if ( a6 ) /*0x446ba0*/
    {
      if ( TESObjectCELL_IsInterior(a1) ) /*0x446ba4*/
      {
        sub_4CBC20(a1, a2, a3, a4, a5, a6, a7); /*0x446c06*/
      }
      else
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(a1); /*0x446baf*/
        if ( WorldSpace ) /*0x446bb6*/
          sub_4F0750(WorldSpace, a2, a3, a4, a5, a6, a7); /*0x446bda*/
      }
    }
  }
}
