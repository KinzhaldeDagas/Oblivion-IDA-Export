bool __thiscall sub_429620(_BYTE *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraEnableStateParent `RTTI Type Descriptor',
         0);
  return !v3 || v3[3] != *((_DWORD *)this + 3) || *((_BYTE *)v3 + 0x10) != *(this + 0x10);
}
