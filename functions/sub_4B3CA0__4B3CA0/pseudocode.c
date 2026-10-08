char __stdcall sub_4B3CA0(TESObjectREFR *a1, TESForm *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  TESForm *Owner; // eax

  if ( a2 /*0x4b3cc3*/
    && ((unsigned __int8 (__thiscall *)(TESForm *))a2->vtbl[1].CopyFrom)(a2)
    && ((int (__thiscall *)(TESForm *))a2->vtbl[4].Destroy)(a2) )
  {
    return 0; /*0x4b3cc9*/
  }
  if ( TESObjectREFR_GetOwner(a1) ) /*0x4b3cd6*/
  {
    if ( TESObjectREFR_GetOwner(a1) != a2 ) /*0x4b3ce8*/
    {
      v6 = OblivionDynamicCast( /*0x4b3cf9*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      v7 = v6; /*0x4b3cfe*/
      if ( v6 ) /*0x4b3d05*/
      {
        v8 = *v6; /*0x4b3d08*/
        Owner = TESObjectREFR_GetOwner(a1); /*0x4b3d0e*/
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, TESForm *))(v8 + 0x248))(v7, a1, Owner); /*0x4b3d1d*/
      }
    }
  }
  return 1; /*0x4b3ccb*/
}
