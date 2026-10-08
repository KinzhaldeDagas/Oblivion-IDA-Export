// Verified shared validity predicate: requires a non-actor MagicTarget and accepts only TESBoundObject base forms that cast to TESObjectDOOR or TESObjectCONT. It occupies slot +0x34 in both OpenEffect_vftable and LockEffect_vftable; Fallout LockEffect has a separately named CheckTarget override.
bool __thiscall LockOrOpenEffect_ValidTarget(ActiveEffect *this, MagicTarget *target)
{
  _DWORD *v2; // eax
  char *v3; // esi
  int v4; // eax
  void *v5; // eax
  void *v6; // edi
  int v7; // eax
  void *v8; // eax
  void *v9; // eax

  v2 = OblivionDynamicCast( /*0x6a34b4*/
         target,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v2 && (v3 = (char *)(v2 + 3), (*(int (__thiscall **)(_DWORD *))(v2[3] + 4))(v2 + 3)) ) /*0x6a34cf*/
  {
    v4 = (*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3); /*0x6a34dd*/
    v5 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x170))(v4); /*0x6a34f7*/
    v6 = OblivionDynamicCast( /*0x6a3501*/
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0);
    v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3); /*0x6a350b*/
    v8 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x170))(v7); /*0x6a3525*/
    v9 = OblivionDynamicCast( /*0x6a3528*/
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectCONT `RTTI Type Descriptor',
           0);
    if ( v6 || v9 ) /*0x6a3537*/
      LOBYTE(v9) = 1; /*0x6a353d*/
  }
  else
  {
    LOBYTE(v9) = 0; /*0x6a3546*/
  }
  return (char)v9; /*0x6a3539*/
}
