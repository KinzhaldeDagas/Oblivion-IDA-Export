void __thiscall CreatureSoundArray_ClearAllSounds(_DWORD *this)
{
  unsigned int v2; // esi
  int v3; // edi

  v2 = 0;
  v3 = 0xA;
  do
  {
    CreatureSoundArray_ClearNthSound(this, v2++);
    --v3;
  }
  while ( v3 );
}
