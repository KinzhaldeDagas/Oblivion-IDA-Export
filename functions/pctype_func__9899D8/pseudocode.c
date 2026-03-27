const unsigned __int16 *__cdecl __pctype_func()
{
  int v0; // ecx
  int v1; // eax

  v0 = _getptd();
  v1 = *(_DWORD *)(v0 + 0x6C);
  if ( (_UNKNOWN *)v1 != off_B31998 && (dword_B318B0 & *(_DWORD *)(v0 + 0x70)) == 0 )
    v1 = __updatetlocinfo();
  return *(const unsigned __int16 **)(v1 + 0xC8);
}
