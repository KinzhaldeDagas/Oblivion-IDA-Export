// Resolves an encoded animation key through the ActorAnimData map at +0x9C, selects the entry's sequence, and returns its TESAnimGroup pointer from sequence +0x68; returns null when the key is absent.
int __thiscall sub_4729B0(_DWORD **this, int a2)
{
  if ( ActorAnimData_FindAnimMapEntry(*(this + 0x27), a2, &a2) ) /*0x4729c0*/
    return *(_DWORD *)((*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)a2 + 0x10))(a2, 0xFFFFFFFF) + 0x68); /*0x4729d6*/
  else
    return 0; /*0x4729dc*/
}
