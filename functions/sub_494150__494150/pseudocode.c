unsigned int *__usercall sub_494150@<eax>(int a1@<ebp>, int a2@<edi>, const char **a3, signed int a4, signed int a5)
{
  const char *v5; // esi
  _DWORD *v6; // eax

  v5 = *a3; /*0x494155*/
  if ( !*a3 || !MEMORY[0xB33A04] || !MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], v5, 0, 0, 0xFFFFFFFF) ) /*0x494171*/
    return 0; /*0x494193*/
  v6 = sub_431130(v5, 0, 0x2800, 0x10); /*0x494181*/
  return sub_493F60(a1, a2, v6, a4, a5); /*0x494189*/
}
