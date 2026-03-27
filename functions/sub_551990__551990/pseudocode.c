bool __cdecl sub_551990(char *a1, char *a2)
{
  int v4; // ebp
  char *v5; // ebx
  int v6; // esi
  int *v7; // edi
  int v8; // [esp+4h] [ebp+4h]

  if ( !a1 )
    return !a2;
  if ( !a2 )
    return 0;
  v4 = 0;
  v8 = a2 - a1;
  v5 = a1;
  while ( 2 )
  {
    v6 = 0;
    v7 = (int *)v5;
    do
    {
      if ( !sub_550330(v7, (int *)((char *)v7 + v8)) )
        return 1;
      ++v6;
      v7 += 6;
    }
    while ( v6 < 2 );
    ++v4;
    v5 += 0x30;
    if ( v4 < 2 )
      continue;
    break;
  }
  return 0;
}
