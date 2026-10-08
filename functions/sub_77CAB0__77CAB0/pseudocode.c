char __usercall sub_77CAB0@<al>(int a1@<ecx>, void *a2@<esi>, char *a3, char *a4, size_t a5)
{
  char **v6; // eax
  char **v7; // eax
  char **v8; // esi
  int v9; // [esp+0h] [ebp-4h] BYREF

  v9 = a1; /*0x77cab0*/
  if ( !unk_B42898 ) /*0x77cab1*/
    return 0; /*0x77cabd*/
  if ( NiTMap_GetAt((_DWORD *)unk_B42898 + 9, (int)a3, &v9) && v9 ) /*0x77cadb*/
  {
    if ( *(char **)(v9 + 0x10) == a4 ) /*0x77cae4*/
    {
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x77caea*/
      return 1; /*0x77caf4*/
    }
    return 0; /*0x77cae4*/
  }
  v6 = (char **)FormHeapAlloc(0x1Cu); /*0x77caf7*/
  if ( !v6 ) /*0x77cb01*/
    return 0; /*0x77cb01*/
  v7 = sub_77C1B0(v6, a3, a4, a5, a2); /*0x77cb15*/
  v8 = v7; /*0x77cb1a*/
  if ( !v7 ) /*0x77cb1e*/
    return 0; /*0x77cb24*/
  InterlockedIncrement((volatile LONG *)v7 + 1); /*0x77cb29*/
  sub_412D30((_DWORD *)unk_B42898 + 9, (int)v8[2], (TESForm *)v8); /*0x77cb3d*/
  return 1; /*0x77cabd*/
}
