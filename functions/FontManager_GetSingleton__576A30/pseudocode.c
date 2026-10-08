_DWORD *FontManager_GetSingleton()
{
  _DWORD *result; // eax
  _DWORD *v1; // eax

  result = (_DWORD *)unk_B3A6BC; /*0x576a51*/
  if ( !unk_B3A6BC ) /*0x576a51*/
  {
    v1 = (_DWORD *)FormHeapAlloc(0x18u); /*0x576a5c*/
    if ( v1 ) /*0x576a72*/
    {
      result = FontManager_Construct(v1); /*0x576a76*/
      unk_B3A6BC = (int)result; /*0x576a7b*/
    }
    else
    {
      unk_B3A6BC = 0; /*0x576a92*/
      return 0; /*0x576a90*/
    }
  }
  return result; /*0x576a80*/
}
