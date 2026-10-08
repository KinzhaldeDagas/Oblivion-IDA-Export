char *__thiscall TESBipedModelForm_CopyComponentFrom(_DWORD *this, void *a2)
{
  char *result; // eax
  char *v4; // esi
  void (__thiscall *v5)(_DWORD *, char *); // edx

  result = (char *)OblivionDynamicCast( /*0x468e07*/
                     a2,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                     &TESBipedModelForm `RTTI Type Descriptor',
                     0);
  v4 = result; /*0x468e0c*/
  if ( result ) /*0x468e13*/
  {
    v5 = *(void (__thiscall **)(_DWORD *, char *))(*(this + 2) + 8); /*0x468e1b*/
    *(this + 1) = *((_DWORD *)result + 1); /*0x468e1e*/
    v5(this + 2, result + 8); /*0x468e28*/
    (*(void (__thiscall **)(_DWORD *, char *))(*(this + 0xE) + 8))(this + 0xE, v4 + 0x38); /*0x468e37*/
    (*(void (__thiscall **)(_DWORD *, char *))(*(this + 0x1A) + 8))(this + 0x1A, v4 + 0x68); /*0x468e46*/
    (*(void (__thiscall **)(_DWORD *, char *))(*(this + 8) + 8))(this + 8, v4 + 0x20); /*0x468e55*/
    (*(void (__thiscall **)(_DWORD *, char *))(*(this + 0x14) + 8))(this + 0x14, v4 + 0x50); /*0x468e64*/
    return (*(char *(__thiscall **)(_DWORD *, char *))(*(this + 0x1D) + 8))(this + 0x1D, v4 + 0x74); /*0x468e73*/
  }
  return result; /*0x468e75*/
}
