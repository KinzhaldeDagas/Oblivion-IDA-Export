bool __thiscall sub_429AA0(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi
  char *v5; // eax
  int v6; // edx
  char *v7; // edx
  int LockLevel; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraLock `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 1;
  if ( BSExtraData_CompareTo(this, a2) )
    return 1;
  v5 = *((char **)this + 3);
  v6 = v3[3];
  if ( v5[8] != *(_BYTE *)(v6 + 8) || *((_DWORD *)v5 + 1) != *(_DWORD *)(v6 + 4) )
    return 1;
  LockLevel = GetLockLevel(*v5);
  return LockLevel != GetLockLevel(*v7);
}
