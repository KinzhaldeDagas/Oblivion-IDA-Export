char __thiscall sub_614ED0(TESForm *this, void *a2)
{
  _DWORD **v3; // esi
  int v5; // ebx
  double v6; // [esp+Ch] [ebp-8h]

  v3 = (_DWORD **)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &CombatController `RTTI Type Descriptor',
                    0);
  if ( !v3 )
    return 0;
  if ( sub_566400(this, a2) )
  {
    v5 = sub_6135F0((int)v3);
    if ( sub_6135F0((int)this) == v5
      && *((_BYTE *)this + 0x48) == *((_BYTE *)v3 + 0x48)
      && *((_BYTE *)this + 0x49) == *((_BYTE *)v3 + 0x49)
      && *((_BYTE *)this + 0x4A) == *((_BYTE *)v3 + 0x4A)
      && *((_BYTE *)this + 0x4D) == *((_BYTE *)v3 + 0x4D) )
    {
      v6 = sub_612F30(this);
      if ( sub_612F30(v3) == v6 )
        return 1;
    }
  }
  return 0;
}
