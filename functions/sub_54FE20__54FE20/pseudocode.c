_DWORD **sub_54FE20()
{
  _DWORD **result; // eax
  int (__thiscall ***v1)(_DWORD, int); // ecx

  result = (_DWORD **)g_faceGenManager; /*0x54fe20*/
  if ( g_faceGenManager ) /*0x54fe20*/
  {
    if ( result[0x36B] ) /*0x54fe29*/
    {
      sub_54F840(result[0x36B]); /*0x54fe38*/
      result = (_DWORD **)g_faceGenManager; /*0x54fe3d*/
      v1 = *((int (__thiscall ****)(_DWORD, int))g_faceGenManager + 0x36B); /*0x54fe42*/
      if ( v1 ) /*0x54fe4a*/
        result = (_DWORD **)(**v1)(v1, 1); /*0x54fe52*/
      *((_DWORD *)g_faceGenManager + 0x36B) = 0; /*0x54fe5a*/
    }
  }
  return result; /*0x54fe64*/
}
