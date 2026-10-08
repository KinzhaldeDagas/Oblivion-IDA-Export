bool __thiscall sub_429AA0(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi
  char *v5; // eax
  int v6; // edx
  char *v7; // edx
  LOCK_LEVEL LockLevel; // esi

  v3 = OblivionDynamicCast( /*0x429abd*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraLock `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x429ac4*/
    return 1; /*0x429ac4*/
  if ( BSExtraData_CompareTo(this, a2) ) /*0x429ad1*/
    return 1; /*0x429ad1*/
  v5 = *((char **)this + 3); /*0x429ada*/
  v6 = v3[3]; /*0x429add*/
  if ( v5[8] != *(_BYTE *)(v6 + 8) || *((_DWORD *)v5 + 1) != *(_DWORD *)(v6 + 4) ) /*0x429aee*/
    return 1; /*0x429ac8*/
  LockLevel = GetLockLevel(*v5); /*0x429afd*/
  return LockLevel != GetLockLevel(*v7); /*0x429ac6*/
}
