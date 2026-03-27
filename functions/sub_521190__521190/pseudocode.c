int __thiscall sub_521190(_DWORD *this, char *a2)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  int v7; // [esp+8h] [ebp-88h] BYREF
  char Str[128]; // [esp+Ch] [ebp-84h] BYREF

  v2 = a2;
  if ( !a2 )
    return 0;
  if ( !*a2 )
    return 0;
  v7 = 0;
  do
  {
    v4 = *v2;
    v2[Str - a2] = *v2;
    ++v2;
  }
  while ( v4 );
  v5 = strrchr(Str, 0x5C);
  *(_DWORD *)(v5 + 1) = *(_DWORD *)aIdleanims;
  *(_DWORD *)(v5 + 5) = dword_A538D4;
  *(_WORD *)(v5 + 9) = word_A538D8;
  if ( NiTMap_GetAt(this, (int)Str, &v7) && v7 )
    return *(_DWORD *)(v7 + 0x20);
  else
    return 0;
}
