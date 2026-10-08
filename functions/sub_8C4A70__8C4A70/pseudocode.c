int __thiscall sub_8C4A70(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v6; // esi
  _DWORD *v7; // ecx
  unsigned int v8; // ebx

  v2 = (_DWORD *)*(this + 4); /*0x8c4a7c*/
  v3 = (a2 & 0xFFFFFF) + 1; /*0x8c4a7f*/
  v4 = HIBYTE(a2); /*0x8c4a82*/
  if ( v3 >= v2[2] ) /*0x8c4a88*/
    return 0xFFFFFFFF; /*0x8c4a8a*/
  v6 = 0; /*0x8c4a92*/
  v7 = (_DWORD *)(v2[7] + 4); /*0x8c4a9c*/
  v8 = v4 + 1; /*0x8c4a9f*/
  do /*0x8c4aaa*/
  {
    v6 += *v7; /*0x8c4aa2*/
    v7 += 3; /*0x8c4aa4*/
    --v8; /*0x8c4aa7*/
  }
  while ( v8 ); /*0x8c4aaa*/
  if ( *(unsigned __int16 *)(v2[5] + 0x14 * v3) >= v6 ) /*0x8c4aba*/
    ++v4; /*0x8c4abc*/
  return (v4 << 0x18) | v3 & 0xFFFFFF; /*0x8c4a8d*/
}
