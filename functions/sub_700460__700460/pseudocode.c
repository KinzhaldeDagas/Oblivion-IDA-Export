int __userpurge sub_700460@<eax>(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  unsigned __int16 v5; // di
  int v6; // ecx
  unsigned __int16 j; // di
  int v8; // ebx
  _DWORD *k; // esi
  int v11; // [esp-4h] [ebp-10h]
  int i; // [esp+10h] [ebp+4h]

  v11 = a2;
  nullsub_returnvVoid_1arg((int)a3);
  sub_713720(a3, *(const char **)(a1 + 8));
  v5 = 0;
  for ( i = 0; v5 < *(_WORD *)(a1 + 0x14); ++v5 )
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 4 * v5);
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x4C))(v6, v11) )
      ++i;
  }
  (*(void (__stdcall **)(_DWORD))(a3[0x88] + 8))(a3[0x88]);
  for ( j = 0; j < *(_WORD *)(a1 + 0x14); ++j )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a1 + 0x10) + 4 * j);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 0x4C))(v8) )
      (*(void (__thiscall **)(_DWORD *, int))(*a3 + 0x2C))(a3, v8);
  }
  for ( k = *(_DWORD **)(a1 + 0xC); k; k = (_DWORD *)k[0xD] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*k + 0x6C))(k) )
      break;
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*a3 + 0x2C))(a3, k);
}
