void __thiscall TESCreature_ClearAllComponentRefs(TESForm *this)
{
  unsigned int v2; // edi

  if ( (*((_DWORD *)this + 0xA) & 0x100) != 0 ) /*0x51c86b*/
  {
    v2 = *((_DWORD *)this + 0x40); /*0x51c86e*/
    if ( v2 ) /*0x51c876*/
    {
      CreatureSoundArray_ClearAllSounds(*((_DWORD **)this + 0x40)); /*0x51c87a*/
      FormHeapFree(v2); /*0x51c880*/
    }
    *((_DWORD *)this + 0x40) = 0; /*0x51c888*/
  }
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 0x47) + 4))((char *)this + 0x11C); /*0x51c8a2*/
  (*(void (__thiscall **)(char *))(*((_DWORD *)this + 0x4D) + 4))((char *)this + 0x134); /*0x51c8b3*/
  j_TESForm_ClearComponentReferences(this); /*0x51c8b8*/
}
