_DWORD *__thiscall TESEnchantableForm_CopyComponentFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast( /*0x46a816*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESEnchantableForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46a820*/
  {
    *(this + 1) = result[1]; /*0x46a825*/
    *((_WORD *)this + 4) = *((_WORD *)result + 4); /*0x46a82c*/
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 0x10))(result); /*0x46a837*/
    *(this + 3) = result; /*0x46a839*/
  }
  return result; /*0x46a83c*/
}
