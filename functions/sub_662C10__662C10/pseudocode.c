char __thiscall sub_662C10(_DWORD *this, _BYTE *a2, int a3)
{
  int v3; // eax
  _DWORD *v5; // eax
  int v6; // esi

  LOBYTE(v3) = a2[4];
  if ( (_BYTE)v3 == 0x14 || (_BYTE)v3 == 0x16 )
  {
    v5 = OblivionDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESEnchantableForm `RTTI Type Descriptor',
           0);
    if ( v5 )
      v3 = v5[1];
    else
      v3 = 0;
    if ( v3 )
    {
      v6 = v3 + 0x18;
      (*(void (__thiscall **)(_DWORD *, int, _BYTE *, _DWORD))(*(this + 0x17) + 8))(this + 0x17, v3 + 0x18, a2, 0);
      LOBYTE(v3) = MagicTarget_ProcessEffectsFromItem(this + 0x1A, v6);
    }
  }
  return v3;
}
