unsigned int __thiscall TESCreature_SetInheritedSoundSource(unsigned int *this, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  int (__thiscall *v5)(unsigned int *, int); // eax

  result = *(this + 0xA) >> 8;
  if ( (result & 1) != 0 )
  {
    if ( a2 )
    {
      v4 = *(this + 0x40);
      if ( v4 )
      {
        CreatureSoundArray_ClearAllSounds((_DWORD *)*(this + 0x40));
        FormHeapFree(v4);
      }
      v5 = *(int (__thiscall **)(unsigned int *, int))(*(this + 9) + 0x50);
      *(this + 0xA) &= ~0x100u;
      result = v5(this + 9, 0x10);
      *(this + 0x40) = a2;
    }
  }
  else
  {
    *(this + 0x40) = a2;
  }
  return result;
}
