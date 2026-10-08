bool __thiscall TESHealthForm_CompareTo(void *this, void *a2)
{
  void *v3; // eax
  int v5; // edi

  v3 = OblivionDynamicCast( /*0x46c9e6*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x46c9f0*/
    return 1; /*0x46c9f2*/
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)v3 + 0x10))(v3); /*0x46ca04*/
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x10))(this) != v5; /*0x46c9f4*/
}
