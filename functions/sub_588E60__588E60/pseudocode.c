BSFogProperty *__cdecl sub_588E60(int a1)
{
  Atmosphere *v2; // ebx
  unsigned __int16 v3; // ax
  int v5; // [esp+4h] [ebp-4h]
  unsigned int v6; // [esp+Ch] [ebp+4h]

  if ( !a1 || !*(_WORD *)(a1 + 0x14) ) /*0x588e6c*/
    return 0; /*0x588ee6*/
  v2 = **(Atmosphere ***)(a1 + 0x10); /*0x588e76*/
  v5 = 0; /*0x588e7a*/
  v6 = 0; /*0x588e7e*/
  if ( v2 || (v2 = **(Atmosphere ***)(*(_DWORD *)(a1 + 0x1C) + 0x10)) != 0 ) /*0x588e8e*/
  {
    while ( strcmp((const char *)Shared_GetPointerAtOffset08(v2), "Tileptr") ) /*0x588ea9*/
    {
      v3 = ++v6; /*0x588eb3*/
      if ( v6 >= *(unsigned __int16 *)(a1 + 0x14) ) /*0x588ebc*/
        return (BSFogProperty *)v5; /*0x588ebc*/
      v2 = *(Atmosphere **)(*(_DWORD *)(a1 + 0x10) + 4 * v3); /*0x588ec4*/
      if ( !v2 ) /*0x588ec9*/
        return 0; /*0x588ed4*/
    }
    return v2->fogProperty; /*0x588ed8*/
  }
  return (BSFogProperty *)v5; /*0x588ed2*/
}
