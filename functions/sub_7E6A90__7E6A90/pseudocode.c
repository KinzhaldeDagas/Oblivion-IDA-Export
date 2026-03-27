int __thiscall sub_7E6A90(void **this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // ecx
  int v8; // eax
  int result; // eax
  int v10; // ebx
  size_t v11; // [esp-4h] [ebp-10h]

  v3 = *(_DWORD *)(a3 + 0x9C);
  v4 = *(unsigned __int16 *)(v3 + 0xC);
  LODWORD(v11) = 0x10 * v4;
  memcpy(*(this + 0x56), *(const void **)(v3 + 0x10), v11);
  v6 = *(_WORD *)(v3 + 0xE);
  v7 = *(unsigned __int16 **)(*(_DWORD *)v3 + 0xB4);
  if ( v6 == v4 )
    v8 = v7[0x20];
  else
    v8 = (unsigned __int16)(v6 * *(_WORD *)(*(_DWORD *)(v3 + 4) + 0x34));
  result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v7 + 0x58))(v7, v8);
  v10 = (int)*(this + 0x57);
  if ( v10 )
    *(_DWORD *)(v10 + 0x20) = *(unsigned __int16 *)(v3 + 0xE);
  return result;
}
