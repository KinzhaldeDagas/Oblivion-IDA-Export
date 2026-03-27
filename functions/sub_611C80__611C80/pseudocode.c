bool __thiscall sub_611C80(_DWORD **this)
{
  void *v2; // eax

  v2 = (void *)(*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16));
  return OblivionDynamicCast(
           v2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
           &TrespassPackage `RTTI Type Descriptor',
           0)
      || (unsigned __int8)sub_5E03B0(this)
      && *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(this + 0x16) + 0x184))(*(this + 0x16)) + 0x20) == 1;
}
