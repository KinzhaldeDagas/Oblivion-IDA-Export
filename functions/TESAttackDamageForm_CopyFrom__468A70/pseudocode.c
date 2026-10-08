void *__thiscall TESAttackDamageForm_CopyFrom(_WORD *this, void *a2)
{
  void *result; // eax

  result = OblivionDynamicCast( /*0x468a86*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESAttackDamageForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x468a90*/
  {
    result = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)result + 0x10))(result); /*0x468a99*/
    *(this + 2) = (_WORD)result; /*0x468a9b*/
  }
  return result; /*0x468a9f*/
}
