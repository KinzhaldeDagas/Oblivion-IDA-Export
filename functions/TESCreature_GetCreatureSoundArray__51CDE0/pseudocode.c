int __cdecl TESCreature_GetCreatureSoundArray(int a1, int a2, int a3, int a4)
{
  int v4; // ecx

  if ( (*(_DWORD *)(v4 + 0x28) & 0x100) != 0 )
  {
    if ( *(_DWORD *)(v4 + 0x100) )
      JUMPOUT(0x51CE56);
  }
  return TESCreature_GetCreatureSoundArray_::MakeSoundArray(a1, a2, a3, a4);
}
