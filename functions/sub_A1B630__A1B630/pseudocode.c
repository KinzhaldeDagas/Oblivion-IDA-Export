void __cdecl sub_A1B630()
{
  char *v0; // esi

  off_B082F0 = &NiTArray<NiPointer<NiAVObject>>::`vftable';
  if ( dword_B082F4 )
  {
    v0 = (char *)dword_B082F4 + 0xFFFFFFFC;
    _LN21((char *)dword_B082F4, 4u, *((_DWORD *)dword_B082F4 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)v0);
  }
}
