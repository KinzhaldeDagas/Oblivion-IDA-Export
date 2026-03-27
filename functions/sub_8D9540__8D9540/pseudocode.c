int __stdcall sub_8D9540(_DWORD *a1)
{
  int v1; // ecx
  int result; // eax
  int v3; // ecx
  int v4; // eax

  if ( *(_BYTE *)(*a1 + 4) == 2 )
  {
    v1 = *a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*a1 + *(char *)(*a1 + 5) + 0x10);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 0x20))(v1, a1[1] + *(char *)(a1[1] + 5));
  }
  v3 = a1[1];
  if ( *(_BYTE *)(v3 + 4) == 2 )
  {
    v4 = v3 + *(char *)(v3 + 5);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)(*(_DWORD *)(v4 + 0x10) + v4) + 0x20))(
             v4 + *(_DWORD *)(v4 + 0x10),
             *a1 + *(char *)(*a1 + 5));
  }
  return result;
}
