char __stdcall OpenLockEffect_ValidTarget(void *a1)
{
  _DWORD *v1; // eax
  char *v2; // esi
  int v3; // eax
  void *v4; // eax
  void *v5; // edi
  int v6; // eax
  void *v7; // eax
  void *v8; // eax

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v1 && (v2 = (char *)(v1 + 3), (*(int (__thiscall **)(_DWORD *))(v1[3] + 4))(v1 + 3)) )
  {
    v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 4))(v2);
    v4 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x170))(v3);
    v5 = OblivionDynamicCast(
           v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0);
    v6 = (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 4))(v2);
    v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6);
    v8 = OblivionDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectCONT `RTTI Type Descriptor',
           0);
    if ( v5 || v8 )
      LOBYTE(v8) = 1;
  }
  else
  {
    LOBYTE(v8) = 0;
  }
  return (char)v8;
}
