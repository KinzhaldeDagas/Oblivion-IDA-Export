char __thiscall sub_6DA320(float *this)
{
  float *v1; // ebx
  float v2; // eax
  unsigned int v3; // ebp
  int v4; // esi
  float *v5; // edi
  void (__thiscall ***v6)(_DWORD, int); // esi
  float v7; // ecx
  float v8; // edx
  char v9; // bl
  unsigned int i; // esi
  int v11; // esi
  float y; // ecx
  float z; // edx
  unsigned __int8 v15; // [esp+7h] [ebp-11h]
  NiPoint3 other; // [esp+Ch] [ebp-Ch] BYREF

  v1 = this; /*0x6da324*/
  v2 = *(this + 6); /*0x6da326*/
  if ( v2 != 0.0 ) /*0x6da32f*/
  {
    v3 = *(_DWORD *)(LODWORD(v2) + 8); /*0x6da339*/
    v4 = *(_DWORD *)(LODWORD(v2) + 0x10); /*0x6da33f*/
    v5 = *(float **)(LODWORD(v2) + 0xC); /*0x6da343*/
    v15 = *(_BYTE *)(LODWORD(v2) + 0x14); /*0x6da346*/
    if ( !v3 ) /*0x6da34a*/
    {
      v6 = *((void (__thiscall ****)(_DWORD, int))this + 6); /*0x6da34c*/
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v2) + 4)) ) /*0x6da356*/
        (**v6)(v6, 1); /*0x6da36c*/
      v1[6] = 0.0; /*0x6da36e*/
      v2 = *(float *)&dword_B24FC8; /*0x6da375*/
      *((_DWORD *)v1 + 3) = dword_B24FC8; /*0x6da37a*/
      *((_DWORD *)v1 + 4) = dword_B24FCC; /*0x6da384*/
      *((_DWORD *)v1 + 5) = dword_B24FD0; /*0x6da38f*/
      return LOBYTE(v2); /*0x6da396*/
    }
    v2 = v5[1]; /*0x6da39a*/
    v7 = v5[2]; /*0x6da39d*/
    v8 = v5[3]; /*0x6da3a0*/
    other.x = v2; /*0x6da3a3*/
    other.y = v7; /*0x6da3a7*/
    other.z = v8; /*0x6da3ab*/
    if ( v3 == 1 ) /*0x6da3af*/
      goto LABEL_16; /*0x6da3af*/
    if ( v4 == 1 || v4 == 5 ) /*0x6da3b9*/
    {
      v9 = 1; /*0x6da3bb*/
      for ( i = 1; i < v3; ++i ) /*0x6da3bd*/
      {
        LOBYTE(v2) = NiPoint3__NotEqual((const NiPoint3 *)((char *)v5 + i * v15 + 4), &other); /*0x6da3d7*/
        if ( LOBYTE(v2) ) /*0x6da3de*/
          v9 = 0; /*0x6da3e0*/
        if ( !v9 ) /*0x6da3e7*/
          return LOBYTE(v2); /*0x6da3e7*/
      }
      v1 = this; /*0x6da3f5*/
LABEL_16:
      v11 = *((_DWORD *)v1 + 6); /*0x6da3f9*/
      if ( v11 ) /*0x6da3fe*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x6da404*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x6da41a*/
        v1[6] = 0.0; /*0x6da41c*/
      }
      LOBYTE(v2) = LOBYTE(other.x); /*0x6da423*/
      y = other.y; /*0x6da427*/
      z = other.z; /*0x6da42b*/
      v1[3] = other.x; /*0x6da42f*/
      v1[4] = y; /*0x6da432*/
      v1[5] = z; /*0x6da435*/
    }
  }
  return LOBYTE(v2); /*0x6da392*/
}
