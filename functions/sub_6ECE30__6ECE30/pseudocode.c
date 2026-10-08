char __thiscall sub_6ECE30(void *this, int a2)
{
  NiRTTI *v3; // eax
  int v5; // esi
  NiAVObject *PointerAtOffset08; // eax

  if ( !a2 ) /*0x6ece3a*/
    return 0; /*0x6ece3a*/
  v3 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6ece43*/
  if ( !v3 ) /*0x6ece47*/
    return 0; /*0x6ece47*/
  while ( v3 != &stru_B3F584 ) /*0x6ece55*/
  {
    v3 = v3->parent; /*0x6ece57*/
    if ( !v3 ) /*0x6ece5c*/
      return 0; /*0x6ece5c*/
  }
  if ( !*((_DWORD *)this + 0x10) ) /*0x6ece65*/
    return 0; /*0x6ece5e*/
  v5 = 0; /*0x6ece6c*/
  if ( !*(_WORD *)(a2 + 0x14) ) /*0x6ece6e*/
    return 0; /*0x6ecec4*/
  while ( 1 ) /*0x6ece7d*/
  {
    PointerAtOffset08 = Shared_GetPointerAtOffset08(*(Atmosphere **)(*(_DWORD *)(a2 + 0x10) + 4 * (unsigned __int16)v5)); /*0x6ece7d*/
    if ( PointerAtOffset08 ) /*0x6ece84*/
    {
      if ( !strcmp(*((const char **)this + 0x10), (const char *)PointerAtOffset08) ) /*0x6ece94*/
        break; /*0x6ece94*/
    }
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(a2 + 0x14) ) /*0x6ecec2*/
      return 0; /*0x6ecec2*/
  }
  return 1; /*0x6ece5e*/
}
