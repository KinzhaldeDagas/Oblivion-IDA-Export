int __cdecl sub_8E7920(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi

  v1 = a1[5] + *(_DWORD *)(a1[5] + 0x10);
  v2 = a1[6] + *(_DWORD *)(a1[6] + 0x10);
  v3 = *(_DWORD *)(v1 + 0x54);
  if ( v3 == *(_DWORD *)(v2 + 0x54) )
  {
    v4 = *(_DWORD *)(v1 + 0x54);
    *(_BYTE *)(v3 + 0x26) = 1;
  }
  else if ( *(_BYTE *)(v1 + 0x91) )
  {
    v4 = *(_DWORD *)(v2 + 0x54);
  }
  else if ( *(_BYTE *)(v2 + 0x91) )
  {
    v4 = *(_DWORD *)(v1 + 0x54);
  }
  else
  {
    v4 = sub_8E7740((unsigned int)a1, v3, *(_DWORD *)(v2 + 0x54));
    *(_BYTE *)(v3 + 0x26) = 1;
    *(_BYTE *)(*(_DWORD *)(v2 + 0x54) + 0x26) = 1;
  }
  v5 = a1[4];
  sub_8E6B20(v4 + 0x44, (int)a1, *(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0x7C));
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5);
}
