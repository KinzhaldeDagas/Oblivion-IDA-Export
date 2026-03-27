bool __thiscall sub_4296E0(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraTravelHorse `RTTI Type Descriptor',
         0);
  return !v3 || v3[3] != *(this + 3);
}
