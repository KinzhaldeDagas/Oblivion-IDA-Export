_DWORD *__cdecl sub_8FDA70(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  if ( *(float *)(*(_DWORD *)a1 + 0x1C) * flt_A9B9BC <= *(float *)(a3 + 8) /*0x8fdaa5*/
    || *(float *)(*(_DWORD *)a2 + 0x1C) * flt_A9B9BC <= *(float *)(a3 + 8) )
  {
    return sub_9393E0(a1, a2, a3, a4); /*0x8fdae5*/
  }
  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 0x1C); /*0x8fdab6*/
  *(_WORD *)(v4 + 4) = 0x60; /*0x8fdabf*/
  *(_WORD *)(v4 + 6) = 1; /*0x8fdac5*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8fdacb*/
  *(_DWORD *)v4 = &off_A9B988; /*0x8fdace*/
  sub_936420(v4 + 0x10); /*0x8fdad4*/
  return (_DWORD *)v4; /*0x8fdadb*/
}
