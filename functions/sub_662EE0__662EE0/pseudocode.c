char *sub_662EE0()
{
  char *v0; // eax
  char *v1; // edx
  char v2; // cl
  char *v3; // eax
  char Str[260]; // [esp+0h] [ebp-108h] BYREF

  v0 = *(char **)dword_B36BB8;
  v1 = &Str[-*(_DWORD *)dword_B36BB8];
  do
  {
    v2 = *v0;
    v0[(_DWORD)v1] = *v0;
    ++v0;
  }
  while ( v2 );
  v3 = strrchr(Str, 0x5C);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 1) = *(_DWORD *)aIdleanims;
    *(_DWORD *)(v3 + 5) = dword_A538D4;
    *(_WORD *)(v3 + 9) = word_A538D8;
  }
  return sub_5215C0((_DWORD *)g_idleAnimationMap, Str);
}
