void __userpurge sub_60CF80(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        void *a10)
{
  TESObjectREFR *v11; // eax

  v11 = (TESObjectREFR *)OblivionDynamicCast(
                           a10,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  if ( v11 )
  {
    if ( v11 != (TESObjectREFR *)TESDataHandler_g_PlayerRef && !*(_DWORD *)(a1 + 8) && *(_DWORD *)(a1 + 4) == 0xFFFFFFFF )
    {
      *(_DWORD *)(a1 + 4) = 0;
      EvaluatePackage(v11, a2, a3, a4, a7, a5, a6);
    }
  }
}
