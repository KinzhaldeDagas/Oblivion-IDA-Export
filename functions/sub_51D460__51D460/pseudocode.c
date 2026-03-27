_DWORD *__stdcall sub_51D460(void *a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi

  result = OblivionDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &MobileObject `RTTI Type Descriptor',
             0);
  v2 = result;
  if ( result )
  {
    result = (_DWORD *)result[0x16];
    if ( result )
    {
      result = OblivionDynamicCast(
                 result,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                 &MiddleHighProcess `RTTI Type Descriptor',
                 0);
      if ( result )
        return (*(_DWORD *(__thiscall **)(_DWORD *, _DWORD *))(*result + 0x3EC))(result, v2);
    }
  }
  return result;
}
