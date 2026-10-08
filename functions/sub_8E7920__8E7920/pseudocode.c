int __cdecl sub_8E7920(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edi
  int v4; // eax
  int v5; // esi

  v1 = a1[5] + *(_DWORD *)(a1[5] + 0x10); /*0x8e792b*/
  v2 = a1[6] + *(_DWORD *)(a1[6] + 0x10); /*0x8e7934*/
  v3 = *(_DWORD *)(v1 + 0x54); /*0x8e793a*/
  if ( v3 == *(_DWORD *)(v2 + 0x54) ) /*0x8e793f*/
  {
    v4 = *(_DWORD *)(v1 + 0x54); /*0x8e7941*/
    *(_BYTE *)(v3 + 0x26) = 1; /*0x8e7943*/
  }
  else if ( *(_BYTE *)(v1 + 0x91) ) /*0x8e7949*/
  {
    v4 = *(_DWORD *)(v2 + 0x54); /*0x8e7953*/
  }
  else if ( *(_BYTE *)(v2 + 0x91) ) /*0x8e7957*/
  {
    v4 = *(_DWORD *)(v1 + 0x54); /*0x8e7961*/
  }
  else
  {
    v4 = sub_8E7740((unsigned int)a1, v3, *(_DWORD *)(v2 + 0x54)); /*0x8e7968*/
    *(_BYTE *)(v3 + 0x26) = 1; /*0x8e796f*/
    *(_BYTE *)(*(_DWORD *)(v2 + 0x54) + 0x26) = 1; /*0x8e7978*/
  }
  v5 = a1[4]; /*0x8e7981*/
  sub_8E6B20(v4 + 0x44, (int)a1, *(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0x7C)); /*0x8e798a*/
  return (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x18))(v5);
}
