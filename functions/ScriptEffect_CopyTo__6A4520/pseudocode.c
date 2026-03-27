_DWORD *__thiscall ScriptEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2);
  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &ScriptEffect `RTTI Type Descriptor',
             0);
  if ( result )
  {
    result[0xE] = *(this + 0xE);
    result[0xF] = 0;
  }
  return result;
}
