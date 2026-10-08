_DWORD *__thiscall sub_8BC7B0(int *this, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // edx
  int v7; // edx
  int v8; // edi
  int v9; // ebx
  int v10; // edi
  int i; // esi
  _DWORD *v12; // eax
  int v13; // [esp+1Ch] [ebp-4h]

  v3 = *(this + 0x12); /*0x8bc7b6*/
  v4 = 0; /*0x8bc7b9*/
  if ( v3 <= 0 ) /*0x8bc7be*/
  {
LABEL_5:
    *a2 = 0; /*0x8bc7dc*/
    a2[1] = 0; /*0x8bc7e9*/
    return a2; /*0x8bc7dc*/
  }
  else
  {
    v5 = (_DWORD *)*(this + 0x11); /*0x8bc7c7*/
    while ( *v5 != a3 ) /*0x8bc7d2*/
    {
      ++v4; /*0x8bc7d4*/
      v5 += 4; /*0x8bc7d5*/
      if ( v4 >= v3 ) /*0x8bc7da*/
        goto LABEL_5; /*0x8bc7da*/
    }
    v7 = 0x10 * v4; /*0x8bc7f9*/
    v8 = 0x10 * v4 + *(this + 0x11); /*0x8bc7fc*/
    v9 = *(_DWORD *)(v8 + 8); /*0x8bc807*/
    v13 = *(_DWORD *)(v8 + 0xC); /*0x8bc811*/
    v10 = *(this + 0x12) - 1; /*0x8bc819*/
    *(this + 0x12) = v10; /*0x8bc81d*/
    for ( i = v4; i < *(this + 0x12); v7 += 0x10 ) /*0x8bc822*/
    {
      v12 = (_DWORD *)(v7 + *(this + 0x11)); /*0x8bc827*/
      *v12 = v12[4]; /*0x8bc82e*/
      v12[1] = v12[5]; /*0x8bc833*/
      v12[2] = v12[6]; /*0x8bc839*/
      v12[3] = v12[7]; /*0x8bc83f*/
      ++i; /*0x8bc845*/
    }
    *a2 = v9; /*0x8bc858*/
    a2[1] = v13; /*0x8bc85a*/
    return a2; /*0x8bc84d*/
  }
}
