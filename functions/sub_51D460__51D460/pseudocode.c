_DWORD *__stdcall sub_51D460(void *a1)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi

  result = OblivionDynamicCast( /*0x51d474*/
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &MobileObject `RTTI Type Descriptor',
             0);
  v2 = result; /*0x51d479*/
  if ( result ) /*0x51d480*/
  {
    result = (_DWORD *)result[0x16]; /*0x51d482*/
    if ( result ) /*0x51d487*/
    {
      result = OblivionDynamicCast( /*0x51d498*/
                 result,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                 &MiddleHighProcess `RTTI Type Descriptor',
                 0);
      if ( result ) /*0x51d4a2*/
        return (*(_DWORD *(__thiscall **)(_DWORD *, _DWORD *))(*result + 0x3EC))(result, v2); /*0x51d4af*/
    }
  }
  return result; /*0x51d4b1*/
}
