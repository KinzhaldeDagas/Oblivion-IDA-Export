void __thiscall CreatureSoundArray_ClearAllSounds(_DWORD *this)
{
  unsigned int v2; // esi
  int v3; // edi

  v2 = 0; /*0x519b45*/
  v3 = 0xA; /*0x519b47*/
  do /*0x519b5e*/
  {
    CreatureSoundArray_ClearNthSound(this, v2++); /*0x519b53*/
    --v3; /*0x519b5b*/
  }
  while ( v3 ); /*0x519b5e*/
}
