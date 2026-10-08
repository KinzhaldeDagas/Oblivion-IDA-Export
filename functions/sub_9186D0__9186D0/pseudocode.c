int __thiscall sub_9186D0(int *this, int a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ecx

  v3 = *(this + 0xF); /*0x9186d6*/
  v4 = 0; /*0x9186d9*/
  if ( v3 <= 0 ) /*0x9186dd*/
    return 0xFFFFFFFF; /*0x9186f7*/
  while ( 1 ) /*0x9186e6*/
  {
    v5 = *(_DWORD *)(*(this + 0xE) + 4 * v4); /*0x9186e6*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) == a2 ) /*0x9186f0*/
      break; /*0x9186f0*/
    if ( ++v4 >= v3 ) /*0x9186f5*/
      return 0xFFFFFFFF; /*0x9186f5*/
  }
  return v4; /*0x9186f7*/
}
