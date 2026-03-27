int __cdecl TESTopic::GEtTopic(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(4 * a1 + 0xB110F4) )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(4 * a1 + 0xB111B8) + 0xC * a2);
}
