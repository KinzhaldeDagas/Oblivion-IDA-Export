int __userpurge sub_700460@<eax>(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  unsigned __int16 v5; // di
  int v6; // ecx
  unsigned __int16 j; // di
  int v8; // ebx
  _DWORD *k; // esi
  int v11; // [esp-4h] [ebp-10h]
  int i; // [esp+10h] [ebp+4h]

  v11 = a2; /*0x700467*/
  nullsub_returnvVoid_1arg((int)a3); /*0x70046b*/
  sub_713720(a3, *(const char **)(a1 + 8)); /*0x700476*/
  v5 = 0; /*0x70047b*/
  for ( i = 0; v5 < *(_WORD *)(a1 + 0x14); ++v5 ) /*0x70047d*/
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 4 * v5); /*0x700496*/
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x4C))(v6, v11) ) /*0x70049e*/
      ++i; /*0x7004a4*/
  }
  (*(void (__stdcall **)(_DWORD))(a3[0x88] + 8))(a3[0x88]); /*0x7004d2*/
  for ( j = 0; j < *(_WORD *)(a1 + 0x14); ++j ) /*0x7004d9*/
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 4 * j); /*0x7004e6*/
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x4C))(v8) ) /*0x7004f0*/
      (*(void (__thiscall **)(_DWORD *, int))(*a3 + 0x2C))(a3, v8); /*0x7004ff*/
  }
  for ( k = *(_DWORD **)(a1 + 0xC); k; k = (_DWORD *)k[0xD] ) /*0x700510*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*k + 0x6C))(k) ) /*0x700519*/
      break; /*0x70051d*/
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*a3 + 0x2C))(a3, k); /*0x700532*/
}
