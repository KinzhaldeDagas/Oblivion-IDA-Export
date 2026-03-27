void __cdecl sub_A26900()
{
  char *v0; // esi

  off_B252E8 = &NiTArray<NiPointer<NiRefObject>>::`vftable';
  if ( dword_B252EC )
  {
    v0 = (char *)dword_B252EC + 0xFFFFFFFC;
    _LN21((char *)dword_B252EC, 4u, *((_DWORD *)dword_B252EC + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)v0);
  }
}
