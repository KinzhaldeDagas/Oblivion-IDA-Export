void __cdecl sub_A26900()
{
  char *v0; // esi

  off_B252E8 = &NiTArray<NiPointer<NiRefObject>>::`vftable'; /*0xa26907*/
  if ( dword_B252EC ) /*0xa26911*/
  {
    v0 = (char *)dword_B252EC + 0xFFFFFFFC; /*0xa26917*/
    _LN21( /*0xa26923*/
      (char *)dword_B252EC,
      4u,
      *((_DWORD *)dword_B252EC + 0xFFFFFFFF),
      (void (__thiscall *)(void *))NiPointerSlot_Release);
    FormHeapFree((unsigned int)v0); /*0xa26929*/
  }
}
