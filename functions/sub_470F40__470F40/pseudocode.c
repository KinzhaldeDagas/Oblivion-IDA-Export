bool __thiscall sub_470F40(int this)
{
  _DWORD **v1; // esi
  int v2; // eax
  int v3; // edi
  unsigned __int8 v4; // bl
  int v5; // ebp
  unsigned __int8 v6; // al
  char *v8; // [esp+4h] [ebp-8h]
  _DWORD *v9; // [esp+8h] [ebp-4h]

  v1 = (_DWORD **)(this + 0xA0);
  v9 = (_DWORD *)(this + 0xA0);
  if ( !*(_DWORD *)(this + 0xA0) )
    return 0;
  v2 = *(_DWORD *)(this + 0x24);
  if ( !v2 )
    return 0;
  v8 = *(char **)(v2 + 8);
  if ( (unsigned int)(sub_51AA00(*(_WORD *)(this + 0x3C)) - 3) > 0xB )
    return 0;
  v3 = 0;
  v4 = 0;
  v5 = 5;
  do
  {
    if ( *v1 )
    {
      v6 = sub_49FD20(*v1, v8);
      if ( v6 > v4 )
      {
        v3 = (int)*v1;
        v4 = v6;
      }
    }
    ++v1;
    --v5;
  }
  while ( v5 );
  return v3 == *v9;
}
