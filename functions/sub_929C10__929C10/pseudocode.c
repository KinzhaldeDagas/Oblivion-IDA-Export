int __thiscall sub_929C10(unsigned int *this, unsigned int a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  int v5; // ecx
  signed int v6; // eax
  unsigned int v7; // eax
  int v8; // esi
  __m128 *v9; // eax
  unsigned int v11; // [esp+14h] [ebp-21Ch]
  _BYTE v12[5]; // [esp+1Bh] [ebp-215h] BYREF
  _BYTE v13[524]; // [esp+20h] [ebp-210h] BYREF

  v3 = a2 >> (0x20 - *(this + 8)); /*0x929c3c*/
  v4 = a2 & (0xFFFFFFFF >> *(this + 8)); /*0x929c48*/
  v5 = 0x30 * v3; /*0x929c4a*/
  for ( *(_DWORD *)&v12[1] = 0x30 * v3; ; v5 = *(_DWORD *)&v12[1] ) /*0x929c4d*/
  {
    v6 = v4 + 1; /*0x929c58*/
    v11 = v6; /*0x929c5b*/
    if ( v6 >= *(_DWORD *)(*(this + 9) + v5 + 0x18) ) /*0x929c5f*/
    {
      v7 = *(this + 0xA); /*0x929c61*/
      ++v3; /*0x929c64*/
      *(_DWORD *)&v12[1] = v5 + 0x30; /*0x929c6a*/
      if ( v3 >= v7 ) /*0x929c6e*/
        return 0xFFFFFFFF; /*0x929cdf*/
      v11 = 0; /*0x929c70*/
      v6 = 0; /*0x929c78*/
    }
    v8 = v6 | (v3 << (0x20 - *(this + 8))); /*0x929c91*/
    v9 = (__m128 *)(*(int (__thiscall **)(unsigned int *, int, _BYTE *))(*this + 0x28))(this, v8, v13); /*0x929c96*/
    if ( *sub_950B10(v12, v9 + 1, v9 + 2, v9 + 3, dword_B3060C) == 1 ) /*0x929cbe*/
      break; /*0x929cbe*/
    v4 = v11; /*0x929cc0*/
  }
  return v8; /*0x929ccd*/
}
