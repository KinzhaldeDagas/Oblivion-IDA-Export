int __stdcall sub_8D9540(_DWORD *a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // ecx
  int v4; // eax

  if ( *(_BYTE *)(*a1 + 4) == 2 ) /*0x8d954b*/
  {
    v1 = *a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*a1 + *(char *)(*a1 + 5) + 0x10); /*0x8d955e*/
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x20))(v1, a1[1] + *(char *)(a1[1] + 5)); /*0x8d9565*/
  }
  v3 = a1[1]; /*0x8d9569*/
  if ( *(_BYTE *)(v3 + 4) == 2 ) /*0x8d9570*/
  {
    v4 = v3 + *(char *)(v3 + 5); /*0x8d9578*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(v4 + 0x10) + v4) + 0x20))( /*0x8d958d*/
             v4 + *(_DWORD *)(v4 + 0x10),
             *a1 + *(char *)(*a1 + 5));
  }
  return result; /*0x8d9590*/
}
