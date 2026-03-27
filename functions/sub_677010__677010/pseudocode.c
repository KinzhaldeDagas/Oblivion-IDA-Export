signed __int16 __thiscall sub_677010(int *this)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // esi
  unsigned __int16 v5; // ax
  __int16 v7; // [esp+Ch] [ebp-4h]

  v7 = 4;
  v2 = this + 0xA;
  v3 = 6;
  do
  {
    v4 = *v2;
    v7 += 2;
    if ( *v2 )
    {
      do
      {
        if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 )
          break;
        v5 = sub_6061F0(*(char **)v4);
        v4 = *(_DWORD *)(v4 + 4);
        v7 += v5;
      }
      while ( v4 );
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  return v7;
}
