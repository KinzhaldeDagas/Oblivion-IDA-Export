_DWORD *__thiscall sub_46F170(void *this, void *a2)
{
  _DWORD *result; // eax
  CHAR *v4; // eax

  result = OblivionDynamicCast( /*0x46f186*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESSoundFile `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46f190*/
  {
    v4 = (CHAR *)result[1]; /*0x46f192*/
    if ( !v4 ) /*0x46f197*/
      v4 = EmptyString; /*0x46f199*/
    return (*(void *(__thiscall **)(void *, CHAR *))(*(_DWORD *)this + 0x10))(this, v4); /*0x46f1a6*/
  }
  return result; /*0x46f1a8*/
}
