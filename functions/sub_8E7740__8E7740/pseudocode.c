int __cdecl sub_8E7740(unsigned int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // edi
  char v5; // al
  int v6; // edx
  _DWORD *v7; // esi
  bool v8; // zf
  int result; // eax

  v3 = a3;
  if ( *(_DWORD *)(a2 + 0x48) <= *(_DWORD *)(a3 + 0x48) )
    v3 = a2;
  v4 = *(_DWORD *)(v3 + 0x48);
  v5 = 0;
  v6 = 0;
  if ( v4 > 0 )
  {
    v7 = *(_DWORD **)(v3 + 0x44);
    while ( *v7 > a1 || a1 >= *v7 + (unsigned int)*(unsigned __int16 *)(v3 + 0x5A) )
    {
      ++v6;
      ++v7;
      if ( v6 >= v4 )
      {
        v5 = 0;
        goto LABEL_10;
      }
    }
    v5 = 1;
  }
LABEL_10:
  v8 = v5 == 0;
  result = a3;
  if ( *(_DWORD *)(a2 + 0x48) <= *(_DWORD *)(a3 + 0x48) == !v8 )
    return a2;
  return result;
}
