void __cdecl sub_A1B630()
{
  NiAVObject **v0; // esi

  stru_B082F0._vtbl = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0xa1b637*/
  if ( stru_B082F0.data ) /*0xa1b641*/
  {
    v0 = stru_B082F0.data + 0xFFFFFFFF; /*0xa1b647*/
    _LN21( /*0xa1b653*/
      (char *)stru_B082F0.data,
      4u,
      *((_DWORD *)stru_B082F0.data + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree((unsigned int)v0); /*0xa1b659*/
  }
}
