char __stdcall sub_707A60(int a1, int a2)
{
  char result; // al
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  result = a1;
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    v4 = a2;
    do
    {
      v5 = *(_DWORD *)(v3 + 8);
      v3 = *(_DWORD *)(v3 + 4);
      result = sub_4D6760(*(_DWORD **)(v4 + 4), v5, &a1);
      if ( !result )
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, v4);
    }
    while ( v3 );
  }
  return result;
}
