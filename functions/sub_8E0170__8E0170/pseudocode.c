_BYTE *__stdcall sub_8E0170(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edi
  _BYTE *result; // eax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // esi

  if ( *(_BYTE *)(*a1 + 4) == 2 ) /*0x8e017e*/
  {
    v1 = (_DWORD *)(*a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*(char *)(*a1 + 5) + *a1 + 0x10)); /*0x8e0191*/
    v2 = a1[1] + *(char *)(a1[1] + 5); /*0x8e0193*/
    sub_8DF540(v1); /*0x8e0197*/
    (*(void (__thiscall **)(_DWORD *, int))(*v1 + 0x20))(v1, v2); /*0x8e01a1*/
    result = sub_8DF540(v1); /*0x8e01a6*/
  }
  v4 = a1[1]; /*0x8e01ab*/
  if ( *(_BYTE *)(v4 + 4) == 2 ) /*0x8e01b2*/
  {
    v5 = *a1 + *(char *)(*a1 + 5); /*0x8e01bb*/
    v6 = (_DWORD *)(v4 + *(char *)(v4 + 5) + *(_DWORD *)(*(char *)(v4 + 5) + v4 + 0x10)); /*0x8e01c7*/
    sub_8DF540(v6); /*0x8e01cb*/
    (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x20))(v6, v5); /*0x8e01d5*/
    return sub_8DF540(v6); /*0x8e01da*/
  }
  return result; /*0x8e01df*/
}
