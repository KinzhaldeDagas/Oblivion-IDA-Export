int __thiscall sub_8115C0(void **this, int a2)
{
  int v2; // esi
  int v3; // edi
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // ecx
  int v7; // eax
  int result; // eax
  int v9; // ebx
  size_t v10; // [esp-4h] [ebp-10h]

  v2 = *(_DWORD *)(a2 + 0x9C);
  v3 = *(unsigned __int16 *)(v2 + 0xC);
  LODWORD(v10) = 0x10 * v3;
  memcpy(*(this + 0x29), *(const void **)(v2 + 0x10), v10);
  v5 = *(_WORD *)(v2 + 0xE);
  v6 = *(unsigned __int16 **)(*(_DWORD *)v2 + 0xB4);
  if ( v5 == v3 )
    v7 = v6[0x20];
  else
    v7 = (unsigned __int16)(v5 * *(_WORD *)(*(_DWORD *)(v2 + 4) + 0x32));
  result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v6 + 0x58))(v6, v7);
  v9 = (int)*(this + 0x2A);
  if ( v9 )
    *(_DWORD *)(v9 + 0x20) = *(unsigned __int16 *)(v2 + 0xE);
  return result;
}
