int __usercall sub_948DF0@<eax>(int a1@<esi>, int a2)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 <= 0 )
  {
    if ( v2 == (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)a1, 1);
    v4 = *(_DWORD *)(a1 + 4);
    v3 = v4 + *(_DWORD *)a1;
    *(_DWORD *)(a1 + 4) = v4 + 1;
    *(_DWORD *)(a1 + 4) = 0;
  }
  else
  {
    v3 = v2 + *(_DWORD *)a1;
  }
  v5 = a2 + *(_DWORD *)(a1 + 4) + 6;
  v6 = *(_DWORD *)(a1 + 8) & 0x3FFFFFFF;
  if ( v6 < v5 )
  {
    v7 = 2 * v6;
    if ( v5 >= v7 )
      v7 = a2 + *(_DWORD *)(a1 + 4) + 6;
    sub_8A6E40((const void **)a1, v7, 1);
  }
  *(_DWORD *)(a1 + 4) = v5;
  return v3;
}
