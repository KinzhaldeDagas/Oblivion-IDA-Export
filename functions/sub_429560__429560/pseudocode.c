char __thiscall sub_429560(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraRagDollData `RTTI Type Descriptor',
         0);
  if ( !v3 || BSExtraData_CompareTo(this, a2) )
    return 1;
  v4 = *((_DWORD **)this + 3);
  if ( v4 )
  {
    if ( sub_497270(v4, v3[3]) )
      return 1;
  }
  else if ( v3[3] )
  {
    return 1;
  }
  return 0;
}
