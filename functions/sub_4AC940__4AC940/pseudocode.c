TESForm *__thiscall sub_4AC940(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // ebx
  void (__thiscall *v5)(char *, TESForm::FormFlags *); // edx

  result = (TESForm *)OblivionDynamicCast( /*0x4ac957*/
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESEffectShader `RTTI Type Descriptor',
                        0);
  v4 = result; /*0x4ac95c*/
  if ( result ) /*0x4ac963*/
  {
    TESForm_CopyAllComponentsFrom(this, result); /*0x4ac96a*/
    v5 = *(void (__thiscall **)(char *, TESForm::FormFlags *))(*((_DWORD *)this + 0x3E) + 8); /*0x4ac975*/
    qmemcpy(this + 1, &v4[1], 0xE0u); /*0x4ac983*/
    v5((char *)this + 0xF8, &v4[0xA].member.flags); /*0x4ac992*/
    return (TESForm *)(*(int (__thiscall **)(char *, TESForm::ModReferenceList **))(*((_DWORD *)this + 0x41) + 8))( /*0x4ac9aa*/
                        (char *)this + 0x104,
                        &v4[0xA].member.modlist.next);
  }
  return result; /*0x4ac9ae*/
}
