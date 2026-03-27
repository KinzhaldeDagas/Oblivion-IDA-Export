void __cdecl std::ios_base::_Addstd(struct std::ios_base *a1)
{
  int v1; // ecx
  struct std::ios_base *v2; // ecx
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v1;
  std::_Lockit::_Lockit((std::_Lockit *)&v3, 2);
  *((_DWORD *)a1 + 1) = 1;
  do
  {
    v2 = *(struct std::ios_base **)(4 * *((_DWORD *)a1 + 1) + 0xBA9B8C);
    if ( !v2 )
      break;
    if ( v2 == a1 )
      break;
    ++*((_DWORD *)a1 + 1);
  }
  while ( *((_DWORD *)a1 + 1) < 8u );
  *(_DWORD *)(4 * *((_DWORD *)a1 + 1) + 0xBA9B8C) = a1;
  ++byte_BA9BB4[*((_DWORD *)a1 + 1)];
  std::_Lockit::~_Lockit((std::_Lockit *)&v3);
}
