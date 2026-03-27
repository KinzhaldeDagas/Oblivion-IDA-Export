void *__thiscall sub_4B0FC0(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // edi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectLIGH `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_DWORD *)this + 0x1C) = *(_DWORD *)(v4 + 0x70);
    *((_DWORD *)this + 0x1D) = *(_DWORD *)(v4 + 0x74);
    *((_DWORD *)this + 0x1E) = *(_DWORD *)(v4 + 0x78);
    *((_DWORD *)this + 0x1F) = *(_DWORD *)(v4 + 0x7C);
    *((_DWORD *)this + 0x20) = *(_DWORD *)(v4 + 0x80);
    *((_DWORD *)this + 0x21) = *(_DWORD *)(v4 + 0x84);
    *((float *)this + 0x22) = *(float *)(v4 + 0x88);
    result = *(void **)(v4 + 0x8C);
    *((_DWORD *)this + 0x23) = result;
  }
  return result;
}
