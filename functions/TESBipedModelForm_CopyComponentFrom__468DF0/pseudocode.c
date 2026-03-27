char *__thiscall TESBipedModelForm_CopyComponentFrom(_DWORD *this, void *a2)
{
  char *result; // eax
  void *v4; // esi
  void (__thiscall *v5)(_DWORD *, char *); // edx

  result = (char *)OblivionDynamicCast(
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                     &TESBipedModelForm `RTTI Type Descriptor',
                     0);
  v4 = result;
  if ( result )
  {
    v5 = *(void (__thiscall **)(_DWORD *, char *))(*(this + 2) + 8);
    *(this + 1) = *((_DWORD *)result + 1);
    v5(this + 2, result + 8);
    (*(void (__thiscall **)(_DWORD *, int))(*(this + 0xE) + 8))(this + 0xE, (int)v4 + 0x38);
    (*(void (__thiscall **)(_DWORD *, int))(*(this + 0x1A) + 8))(this + 0x1A, (int)v4 + 0x68);
    (*(void (__thiscall **)(_DWORD *, int))(*(this + 8) + 8))(this + 8, (int)v4 + 0x20);
    (*(void (__thiscall **)(_DWORD *, int))(*(this + 0x14) + 8))(this + 0x14, (int)v4 + 0x50);
    return (char *)(*(int (__thiscall **)(_DWORD *, int))(*(this + 0x1D) + 8))(this + 0x1D, (int)v4 + 0x74);
  }
  return result;
}
