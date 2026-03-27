int __cdecl ActorValue_GetDescription(unsigned int a1)
{
  int v1; // eax

  if ( a1 <= 0x20 && (v1 = *(_DWORD *)(4 * a1 + 0xB127F8)) != 0 )
    return *(_DWORD *)v1;
  else
    return 0;
}
