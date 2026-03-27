char __stdcall sub_4B3CA0(TESObjectREFR *a1, void *a2, int a3, int a4, int a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ebx
  int Owner; // eax

  if ( a2
    && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)a2 + 0x190))(a2)
    && (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x380))(a2) )
  {
    return 0;
  }
  if ( TESObjectREFR_GetOwner(a1) )
  {
    if ( (void *)TESObjectREFR_GetOwner(a1) != a2 )
    {
      v6 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0);
      v7 = v6;
      if ( v6 )
      {
        v8 = *v6;
        Owner = TESObjectREFR_GetOwner(a1);
        (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(v8 + 0x248))(v7, a1, Owner);
      }
    }
  }
  return 1;
}
