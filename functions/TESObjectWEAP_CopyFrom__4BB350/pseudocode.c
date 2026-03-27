void *__thiscall TESObjectWEAP_CopyFrom(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // edi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_DWORD *)this + 0x24) = *(_DWORD *)(v4 + 0x90);
    *((_DWORD *)this + 0x25) = *(_DWORD *)(v4 + 0x94);
    *((_DWORD *)this + 0x26) = *(_DWORD *)(v4 + 0x98);
    result = *(void **)(v4 + 0x9C);
    *((_DWORD *)this + 0x27) = result;
    this->member.type = *(_BYTE *)(v4 + 4);
  }
  return result;
}
