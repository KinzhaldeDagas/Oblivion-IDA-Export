void __cdecl std::ios_base::_Addstd(struct std::ios_base *a1)
{
  int v1; // ecx
  struct std::ios_base *v2; // ecx
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v1; /*0x980b59*/
  std::_Lockit::_Lockit((std::_Lockit *)&v3, 2); /*0x980b5f*/
  *((_DWORD *)a1 + 1) = 1; /*0x980b67*/
  do /*0x980b87*/
  {
    v2 = *(struct std::ios_base **)(4 * *((_DWORD *)a1 + 1) + 0xBA9B8C); /*0x980b71*/
    if ( !v2 ) /*0x980b7a*/
      break; /*0x980b7a*/
    if ( v2 == a1 ) /*0x980b7e*/
      break; /*0x980b7e*/
    ++*((_DWORD *)a1 + 1); /*0x980b80*/
  }
  while ( *((_DWORD *)a1 + 1) < 8u ); /*0x980b87*/
  *(_DWORD *)(4 * *((_DWORD *)a1 + 1) + 0xBA9B8C) = a1; /*0x980b8c*/
  ++byte_BA9BB4[*((_DWORD *)a1 + 1)]; /*0x980b96*/
  std::_Lockit::~_Lockit((std::_Lockit *)&v3); /*0x980b9f*/
}
