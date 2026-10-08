void *__thiscall TESHealthForm_CopyFrom(_DWORD *this, void *a2)
{
  void *result; // eax

  result = OblivionDynamicCast( /*0x46ca76*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESHealthForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46ca80*/
  {
    result = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)result + 0x10))(result); /*0x46ca89*/
    *(this + 1) = result; /*0x46ca8b*/
  }
  return result; /*0x46ca8e*/
}
