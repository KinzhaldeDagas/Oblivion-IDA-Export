unsigned int *__thiscall sub_6F2770(unsigned int *this, int a2)
{
  const unsigned int *v3; // ebx
  unsigned int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  const unsigned int *v12; // ebx
  int v13; // ecx
  unsigned int v14; // eax

  if ( this == (unsigned int *)a2 ) /*0x6f277a*/
    return this; /*0x6f277a*/
  v3 = *(const unsigned int **)(a2 + 4); /*0x6f2781*/
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 2) == 0 ) /*0x6f2793*/
  {
    OB_stVector4_Clear_010201A0((OB_stVector4_010201A0 *)this); /*0x6f2795*/
    return this; /*0x6f27a0*/
  }
  v6 = *(this + 1); /*0x6f27a3*/
  if ( v6 ) /*0x6f27a8*/
    v7 = (int)(*(this + 2) - v6) >> 2; /*0x6f27b3*/
  else
    v7 = 0; /*0x6f27aa*/
  if ( v4 <= v7 ) /*0x6f27b8*/
  {
    OB_stVector4_CopyRange_010201A0(v3, *(const unsigned int **)(a2 + 8), (unsigned int *)*(this + 1)); /*0x6f27bd*/
    v8 = *(_DWORD *)(a2 + 4); /*0x6f27c2*/
    if ( v8 ) /*0x6f27ca*/
      v9 = *(this + 1) + 4 * ((*(_DWORD *)(a2 + 8) - v8) >> 2); /*0x6f27ec*/
    else
      v9 = *(this + 1); /*0x6f27d2*/
    *(this + 2) = v9; /*0x6f27d7*/
    return this; /*0x6f27dd*/
  }
  if ( v6 ) /*0x6f27fc*/
    v10 = (int)(*(this + 3) - v6) >> 2; /*0x6f2807*/
  else
    v10 = 0; /*0x6f27fe*/
  if ( v4 > v10 ) /*0x6f280c*/
  {
    if ( v6 ) /*0x6f284c*/
      FormHeapFree(*(this + 1)); /*0x6f284f*/
    v13 = *(_DWORD *)(a2 + 4); /*0x6f2857*/
    if ( v13 ) /*0x6f285c*/
      v14 = (*(_DWORD *)(a2 + 8) - v13) >> 2; /*0x6f2867*/
    else
      v14 = 0; /*0x6f285e*/
    if ( sub_6F1BF0(this, v14) ) /*0x6f286d*/
      *(this + 2) = (unsigned int)OB_stVector4_UninitializedCopyRange_010201A0( /*0x6f2889*/
                                    *(const unsigned int **)(a2 + 4),
                                    *(const unsigned int **)(a2 + 8),
                                    (unsigned int *)*(this + 1));
    return this; /*0x6f288f*/
  }
  if ( v6 ) /*0x6f2810*/
    v11 = (int)(*(this + 2) - v6) >> 2; /*0x6f281b*/
  else
    v11 = 0; /*0x6f2812*/
  v12 = &v3[v11]; /*0x6f2821*/
  OB_stVector4_CopyRange_010201A0(*(const unsigned int **)(a2 + 4), v12, (unsigned int *)*(this + 1)); /*0x6f2826*/
  *(this + 2) = (unsigned int)OB_stVector4_UninitializedCopyRange_010201A0( /*0x6f2840*/
                                v12,
                                *(const unsigned int **)(a2 + 8),
                                (unsigned int *)*(this + 2));
  return this; /*0x6f279c*/
}
