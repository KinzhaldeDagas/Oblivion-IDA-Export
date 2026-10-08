int __thiscall sub_91CA70(char *this)
{
  int result; // eax
  int i; // esi

  result = *((_DWORD *)this + 7); /*0x91ca73*/
  if ( result ) /*0x91ca78*/
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i ) /*0x91ca82*/
    {
      sub_91C620(this + 0xFFFFFFF8, *(const void ***)(*(_DWORD *)(result + 0x5C) + 4 * i)); /*0x91ca91*/
      result = *((_DWORD *)this + 7); /*0x91ca96*/
    }
  }
  return result; /*0x91caa3*/
}
