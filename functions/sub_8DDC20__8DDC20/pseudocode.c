int __thiscall sub_8DDC20(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // eax
  int result; // eax

  *(_DWORD *)(*(this + 0xD) + 4 * *(unsigned __int16 *)(a2 + 0x8C)) = *(_DWORD *)(*(this + 0xD) + 4 * *(this + 0xE) - 4); /*0x8ddc39*/
  *(_WORD *)(*(_DWORD *)(*(this + 0xD) + 4 * *(unsigned __int16 *)(a2 + 0x8C)) + 0x8C) = *(_WORD *)(a2 + 0x8C); /*0x8ddc4c*/
  --*(this + 0xE); /*0x8ddc53*/
  *(_DWORD *)(a2 + 0x54) = 0; /*0x8ddc56*/
  *(_WORD *)(a2 + 0x8C) = 0xFFFF; /*0x8ddc5d*/
  v3 = *this; /*0x8ddc6b*/
  v4 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x50) + 0x1C))(*(_DWORD *)(a2 + 0x50)); /*0x8ddc6f*/
  result = (*(int (__thiscall **)(_DWORD *, int))(v3 + 0x14))(this, -v4); /*0x8ddc77*/
  *((_BYTE *)this + 0x26) = 1; /*0x8ddc7b*/
  return result; /*0x8ddc7a*/
}
