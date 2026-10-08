unsigned int __thiscall TESCreature_SetInheritedSoundSource(unsigned int *this, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  int (__thiscall *v5)(unsigned int *, int); // eax

  result = *(this + 0xA) >> 8; /*0x51cd66*/
  if ( (result & 1) != 0 ) /*0x51cd6b*/
  {
    if ( a2 ) /*0x51cd74*/
    {
      v4 = *(this + 0x40); /*0x51cd77*/
      if ( v4 ) /*0x51cd7f*/
      {
        CreatureSoundArray_ClearAllSounds((_DWORD *)*(this + 0x40)); /*0x51cd83*/
        FormHeapFree(v4); /*0x51cd89*/
      }
      v5 = *(int (__thiscall **)(unsigned int *, int))(*(this + 9) + 0x50); /*0x51cd94*/
      *(this + 0xA) &= ~0x100u; /*0x51cd97*/
      result = v5(this + 9, 0x10); /*0x51cda3*/
      *(this + 0x40) = a2; /*0x51cda5*/
    }
  }
  else
  {
    *(this + 0x40) = a2; /*0x51cdb5*/
  }
  return result; /*0x51cdad*/
}
