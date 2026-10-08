int __thiscall sub_7E6A90(void **this, int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // ecx
  int v8; // eax
  int result; // eax
  int v10; // ebx

  v3 = *(_DWORD *)(a3 + 0x9C); /*0x7e6a96*/
  v4 = *(unsigned __int16 *)(v3 + 0xC); /*0x7e6aa0*/
  memcpy(*(this + 0x56), *(const void **)(v3 + 0x10), 0x10 * v4); /*0x7e6ab4*/
  v6 = *(_WORD *)(v3 + 0xE); /*0x7e6ab9*/
  v7 = *(unsigned __int16 **)(*(_DWORD *)v3 + 0xB4); /*0x7e6abf*/
  if ( v6 == v4 ) /*0x7e6acd*/
    v8 = v7[0x20]; /*0x7e6acf*/
  else
    v8 = (unsigned __int16)(v6 * *(_WORD *)(*(_DWORD *)(v3 + 4) + 0x34)); /*0x7e6ae0*/
  result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)v7 + 0x58))(v7, v8); /*0x7e6ae9*/
  v10 = (int)*(this + 0x57); /*0x7e6aeb*/
  if ( v10 ) /*0x7e6af3*/
    *(_DWORD *)(v10 + 0x20) = *(unsigned __int16 *)(v3 + 0xE); /*0x7e6af9*/
  return result; /*0x7e6afc*/
}
