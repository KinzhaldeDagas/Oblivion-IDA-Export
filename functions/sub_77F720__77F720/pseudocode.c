char __cdecl sub_77F720(char *Str, TESForm *a2)
{
  char *v2; // esi
  unsigned int i; // edi
  char v4; // al
  bool v5; // zf
  _BYTE v7[256]; // [esp+8h] [ebp-104h] BYREF

  v2 = Str; /*0x77f73d*/
  if ( !Str || strchr(Str, 0x2E) ) /*0x77f74b*/
    return 0; /*0x77f7c8*/
  for ( i = 0; i < 0x100; ++i ) /*0x77f75d*/
  {
    v4 = tolower(*v2); /*0x77f765*/
    v5 = *v2 == 0; /*0x77f76d*/
    v2[v7 - Str] = v4; /*0x77f770*/
    if ( v5 ) /*0x77f773*/
      break; /*0x77f773*/
    ++v2; /*0x77f778*/
  }
  if ( !unk_B428AC ) /*0x77f783*/
    sub_77F680(); /*0x77f78e*/
  sub_412D30((_DWORD *)unk_B428AC, (int)v7, a2); /*0x77f79f*/
  return 1; /*0x77f7a4*/
}
