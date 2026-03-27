bool __thiscall TESBipedModelForm_CompareComponentTo(_DWORD *this, void *a2)
{
  char *v3; // edi

  v3 = (char *)OblivionDynamicCast(
                 a2,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                 &TESBipedModelForm `RTTI Type Descriptor',
                 0);
  return !v3
      || memcmp(this + 1, v3 + 4, 4u)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 2) + 0xC))(this + 2, v3 + 8)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 0xE) + 0xC))(this + 0xE, v3 + 0x38)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 0x1A) + 0xC))(this + 0x1A, v3 + 0x68)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 8) + 0xC))(this + 8, v3 + 0x20)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 0x14) + 0xC))(this + 0x14, v3 + 0x50)
      || (*(unsigned __int8 (__thiscall **)(_DWORD *, char *))(*(this + 0x1D) + 0xC))(this + 0x1D, v3 + 0x74) != 0;
}
