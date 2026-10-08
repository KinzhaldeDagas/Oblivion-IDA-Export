void __stdcall sub_446A40(
        TESObjectREFR *a1,
        float a2,
        float *a3,
        float a4,
        unsigned __int8 (__cdecl *a5)(TESObjectREFR *, int),
        int a6)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v7; // esi
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v9; // ebx
  float *v10; // eax
  float *v11; // eax

  if ( a1 ) /*0x446a47*/
  {
    DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x446a50*/
    v7 = DwordAtOffset40; /*0x446a55*/
    if ( DwordAtOffset40 ) /*0x446a59*/
    {
      if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x446a5d*/
        v7 = 0; /*0x446a66*/
    }
    WorldSpace = TESObjectREFR_GetWorldSpace(a1); /*0x446a6b*/
    v9 = WorldSpace; /*0x446a72*/
    if ( v7 ) /*0x446a74*/
    {
      v10 = a1->vtbl->GetPos(a1); /*0x446a9f*/
      sub_4D5E30(v7, v10, a2, a3, a4, a5, a6); /*0x446aa3*/
    }
    else if ( WorldSpace ) /*0x446ab3*/
    {
      v11 = a1->vtbl->GetPos(a1); /*0x446ade*/
      sub_4F0750(v9, v11, a2, a3, a4, a5, a6); /*0x446ae3*/
    }
  }
}
