_BYTE *__stdcall sub_8E00F0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edi
  _BYTE *result; // eax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // esi

  if ( *(_BYTE *)(*a1 + 4) == 2 )
  {
    v1 = (_DWORD *)(*a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*(char *)(*a1 + 5) + *a1 + 0x10));
    v2 = a1[1] + *(char *)(a1[1] + 5);
    sub_8DF540(v1);
    (*(void (__thiscall **)(_DWORD *, int))(*v1 + 0x18))(v1, v2);
    result = sub_8DF540(v1);
  }
  v4 = a1[1];
  if ( *(_BYTE *)(v4 + 4) == 2 )
  {
    v5 = *a1 + *(char *)(*a1 + 5);
    v6 = (_DWORD *)(v4 + *(char *)(v4 + 5) + *(_DWORD *)(*(char *)(v4 + 5) + v4 + 0x10));
    sub_8DF540(v6);
    (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x18))(v6, v5);
    return sub_8DF540(v6);
  }
  return result;
}
