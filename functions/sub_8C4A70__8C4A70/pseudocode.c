unsigned int __thiscall sub_8C4A70(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // edi
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v6; // esi
  _DWORD *v7; // ecx
  unsigned int v8; // ebx

  v2 = (_DWORD *)*(this + 4);
  v3 = (a2 & 0xFFFFFF) + 1;
  v4 = HIBYTE(a2);
  if ( v3 >= v2[2] )
    return 0xFFFFFFFF;
  v6 = 0;
  v7 = (_DWORD *)(v2[7] + 4);
  v8 = v4 + 1;
  do
  {
    v6 += *v7;
    v7 += 3;
    --v8;
  }
  while ( v8 );
  if ( *(unsigned __int16 *)(v2[5] + 0x14 * v3) >= v6 )
    ++v4;
  return (v4 << 0x18) | v3 & 0xFFFFFF;
}
