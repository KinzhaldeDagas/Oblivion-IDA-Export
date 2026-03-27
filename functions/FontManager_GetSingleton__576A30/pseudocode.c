_DWORD *FontManager_GetSingleton()
{
  _DWORD *result; // eax
  _DWORD *v1; // eax

  result = (_DWORD *)dword_B3A6BC;
  if ( !dword_B3A6BC )
  {
    v1 = (_DWORD *)FormHeapAlloc(0x18u);
    if ( v1 )
    {
      result = sub_576420(v1);
      dword_B3A6BC = (int)result;
    }
    else
    {
      dword_B3A6BC = 0;
      return 0;
    }
  }
  return result;
}
