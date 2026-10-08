_DWORD *__thiscall ScriptEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2); /*0x6a4529*/
  result = OblivionDynamicCast( /*0x6a453d*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &ScriptEffect `RTTI Type Descriptor',
             0);
  if ( result ) /*0x6a4547*/
  {
    result[0xE] = *(this + 0xE); /*0x6a454c*/
    result[0xF] = 0; /*0x6a454f*/
  }
  return result; /*0x6a4556*/
}
