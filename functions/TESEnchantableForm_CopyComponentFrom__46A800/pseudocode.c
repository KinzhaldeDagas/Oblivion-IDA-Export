_DWORD *__thiscall TESEnchantableForm_CopyComponentFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESEnchantableForm `RTTI Type Descriptor',
             0);
  if ( result )
  {
    *(this + 1) = result[1];
    *((_WORD *)this + 4) = *((_WORD *)result + 4);
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 0x10))(result);
    *(this + 3) = result;
  }
  return result;
}
