int __thiscall sub_521190(_DWORD *this, char *a2)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  int v7; // [esp+8h] [ebp-88h] BYREF
  char Str[128]; // [esp+Ch] [ebp-84h] BYREF

  v2 = a2; /*0x5211a4*/
  if ( !a2 ) /*0x5211b3*/
    return 0; /*0x5211b3*/
  if ( !*a2 ) /*0x5211b5*/
    return 0; /*0x5211b5*/
  v7 = 0; /*0x5211be*/
  do /*0x5211ce*/
  {
    v4 = *v2; /*0x5211c4*/
    v2[Str - a2] = *v2; /*0x5211c6*/
    ++v2; /*0x5211c9*/
  }
  while ( v4 ); /*0x5211ce*/
  v5 = strrchr(Str, 0x5C); /*0x5211d7*/
  *(_DWORD *)(v5 + 1) = *(_DWORD *)aIdleanims; /*0x5211e2*/
  *(_DWORD *)(v5 + 5) = dword_A538D4; /*0x5211eb*/
  *(_WORD *)(v5 + 9) = word_A538D8; /*0x5211f8*/
  if ( NiTMap_GetAt(this, (int)Str, &v7) && v7 ) /*0x521217*/
    return *(_DWORD *)(v7 + 0x20); /*0x521219*/
  else
    return 0; /*0x52121e*/
}
