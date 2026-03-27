int __cdecl ActorValue_GetMasteryName(unsigned int a1)
{
  int v1; // eax

  if ( a1 <= 4 && (v1 = *(_DWORD *)(4 * a1 + 0xB12B38)) != 0 )
    return *(_DWORD *)v1;
  else
    return 0;
}
