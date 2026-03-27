void __thiscall TESCreature_ClearAllComponentRefs(TESForm *this)
{
  unsigned int v2; // edi

  if ( (*((_DWORD *)this + 0xA) & 0x100) != 0 )
  {
    v2 = *((_DWORD *)this + 0x40);
    if ( v2 )
    {
      CreatureSoundArray_ClearAllSounds(*((_DWORD **)this + 0x40));
      FormHeapFree(v2);
    }
    *((_DWORD *)this + 0x40) = 0;
  }
  (*(void (__thiscall **)(int))(*((_DWORD *)this + 0x47) + 4))((int)this + 0x11C);
  (*(void (__thiscall **)(int))(*((_DWORD *)this + 0x4D) + 4))((int)this + 0x134);
  j_TESForm_ClearComponentReferences(this);
}
