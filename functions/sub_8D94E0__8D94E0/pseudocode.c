int __stdcall sub_8D94E0(_DWORD *a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // ecx
  int v4; // eax

  if ( *(_BYTE *)(*a1 + 4) == 2 ) /*0x8d94eb*/
  {
    v1 = *a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*a1 + *(char *)(*a1 + 5) + 0x10); /*0x8d94fe*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x18))(v1, a1[1] + *(char *)(a1[1] + 5)); /*0x8d9505*/
  }
  v3 = a1[1]; /*0x8d9509*/
  if ( *(_BYTE *)(v3 + 4) == 2 ) /*0x8d9510*/
  {
    v4 = v3 + *(char *)(v3 + 5); /*0x8d9518*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(v4 + 0x10) + v4) + 0x18))( /*0x8d952d*/
             v4 + *(_DWORD *)(v4 + 0x10),
             *a1 + *(char *)(*a1 + 5));
  }
  return result; /*0x8d9530*/
}
