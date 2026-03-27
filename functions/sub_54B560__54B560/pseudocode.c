int __stdcall sub_54B560(int a1)
{
  int i; // esi

  for ( i = a1; i; i = *(_DWORD *)(i + 0x1C) )
  {
    if ( !_strcmp(*(char **)(i + 8), "Bip01 NonAccum") )
      break;
  }
  return i;
}
