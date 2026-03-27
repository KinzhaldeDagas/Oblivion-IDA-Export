void *__thiscall sub_4A91D0(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // esi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESAmmo `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    result = *(void **)(v4 + 0x7C);
    *((_DWORD *)this + 0x1F) = result;
    *((_DWORD *)this + 0x20) = *(_DWORD *)(v4 + 0x80);
    this->member.type = *(_BYTE *)(v4 + 4);
  }
  return result;
}
