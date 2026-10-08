_BYTE *__stdcall sub_8E00F0(_DWORD *a1)
{
  _DWORD *v1; // esi
  int v2; // edi
  _BYTE *result; // eax
  int v4; // ecx
  int v5; // edi
  _DWORD *v6; // esi

  if ( *(_BYTE *)(*a1 + 4) == 2 ) /*0x8e00fe*/
  {
    v1 = (_DWORD *)(*a1 + *(char *)(*a1 + 5) + *(_DWORD *)(*(char *)(*a1 + 5) + *a1 + 0x10)); /*0x8e0111*/
    v2 = a1[1] + *(char *)(a1[1] + 5); /*0x8e0113*/
    sub_8DF540(v1); /*0x8e0117*/
    (*(void (__thiscall **)(_DWORD *, int))(*v1 + 0x18))(v1, v2); /*0x8e0121*/
    result = sub_8DF540(v1); /*0x8e0126*/
  }
  v4 = a1[1]; /*0x8e012b*/
  if ( *(_BYTE *)(v4 + 4) == 2 ) /*0x8e0132*/
  {
    v5 = *a1 + *(char *)(*a1 + 5); /*0x8e013b*/
    v6 = (_DWORD *)(v4 + *(char *)(v4 + 5) + *(_DWORD *)(*(char *)(v4 + 5) + v4 + 0x10)); /*0x8e0147*/
    sub_8DF540(v6); /*0x8e014b*/
    (*(void (__thiscall **)(_DWORD *, int))(*v6 + 0x18))(v6, v5); /*0x8e0155*/
    return sub_8DF540(v6); /*0x8e015a*/
  }
  return result; /*0x8e015f*/
}
