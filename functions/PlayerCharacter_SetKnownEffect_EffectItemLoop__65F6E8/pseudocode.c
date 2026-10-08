void __userpurge PlayerCharacter_SetKnownEffect_::EffectItemLoop(int a1@<eax>, int a2@<edx>, int a3)
{
  int v3; // ecx
  int v4; // eax

  do /*0x65f70b*/
  {
    if ( !*(_DWORD *)(a1 + 0x2C) && !*(_DWORD *)(a1 + 0x28) ) /*0x65f6ee*/
      break; /*0x65f6f2*/
    v3 = *(_DWORD *)(a1 + 0x28); /*0x65f6f4*/
    if ( v3 ) /*0x65f6f9*/
      *(_DWORD *)(*(_DWORD *)(v3 + 0x1C) + 0x58) |= a2; /*0x65f6fe*/
    v4 = *(_DWORD *)(a1 + 0x2C); /*0x65f701*/
    if ( !v4 ) /*0x65f706*/
      break; /*0x65f706*/
    a1 = v4 - 0x28; /*0x65f708*/
  }
  while ( a1 ); /*0x65f70b*/
  PlayerCharacter_SetKnownEffect_::Done(a3); /*0x65f70c*/
}
