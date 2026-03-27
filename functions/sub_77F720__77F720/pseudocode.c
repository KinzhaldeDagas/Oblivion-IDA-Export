char __cdecl sub_77F720(char *Str, TESForm *a2)
{
  char *v2; // esi
  unsigned int i; // edi
  char v4; // al
  bool v5; // zf
  _BYTE v7[256]; // [esp+8h] [ebp-104h] BYREF

  v2 = Str;
  if ( !Str || strchr(Str, 0x2E) )
    return 0;
  for ( i = 0; i < 0x100; ++i )
  {
    v4 = tolower(*v2);
    v5 = *v2 == 0;
    v2[v7 - Str] = v4;
    if ( v5 )
      break;
    ++v2;
  }
  if ( !dword_B428AC )
    sub_77F680();
  sub_412D30((_DWORD *)dword_B428AC, (int)v7, a2);
  return 1;
}
