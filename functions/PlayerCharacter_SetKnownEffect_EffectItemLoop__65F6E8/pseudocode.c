int __userpurge PlayerCharacter_SetKnownEffect_::EffectItemLoop@<eax>(int a1@<eax>, int a2@<edx>, int a3)
{
  int v3; // ecx
  int v4; // eax

  do
  {
    if ( !*(_DWORD *)(a1 + 0x2C) && !*(_DWORD *)(a1 + 0x28) )
      break;
    v3 = *(_DWORD *)(a1 + 0x28);
    if ( v3 )
      *(_DWORD *)(*(_DWORD *)(v3 + 0x1C) + 0x58) |= a2;
    v4 = *(_DWORD *)(a1 + 0x2C);
    if ( !v4 )
      break;
    a1 = v4 - 0x28;
  }
  while ( a1 );
  return PlayerCharacter_SetKnownEffect_::Done(a3);
}
