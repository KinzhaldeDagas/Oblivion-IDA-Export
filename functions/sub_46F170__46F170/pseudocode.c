void *__thiscall sub_46F170(void *this, void *a2)
{
  void *result; // eax
  CHAR *v4; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESSoundFile `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v4 = *((CHAR **)result + 1);
    if ( !v4 )
      v4 = EmptyString;
    return (void *)(*(int (__thiscall **)(void *, CHAR *))(*(_DWORD *)this + 0x10))(this, v4);
  }
  return result;
}
