int __stdcall sub_54B560(int a1)
{
  int i; // esi

  for ( i = a1; i; i = *(_DWORD *)(i + 0x1C) ) /*0x54b567*/
  {
    if ( !CRT_StricmpLocaleDispatch(*(const char **)(i + 8), "Bip01 NonAccum") ) /*0x54b579*/
      break; /*0x54b583*/
  }
  return i; /*0x54b58e*/
}
