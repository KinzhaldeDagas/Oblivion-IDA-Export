int __cdecl sub_6BE280(int a1, float a2, int a3, int a4, int a5, char a6)
{
  _DWORD *v7; // ecx
  int v8; // [esp+Ch] [ebp-14h]

  if ( a5 ) /*0x6be286*/
  {
    if ( *(float *)a3 <= (double)a2 ) /*0x6be29d*/
    {
      if ( *(float *)((unsigned __int8)a6 * (a5 - 1) + a3) >= (double)a2 ) /*0x6be2d6*/
      {
        v8 = a5; /*0x6be30b*/
        a5 = 0; /*0x6be317*/
        sub_6BE040((float *)a1, a2, a3, a4, v8, &a5, a6); /*0x6be31f*/
      }
      else
      {
        v7 = (_DWORD *)((unsigned __int8)a6 * (a5 - 1) + a3 + 4); /*0x6be2e4*/
        *(_DWORD *)a1 = *v7; /*0x6be2ea*/
        *(_DWORD *)(a1 + 4) = v7[1]; /*0x6be2ef*/
        *(_DWORD *)(a1 + 8) = v7[2]; /*0x6be2f5*/
        *(_DWORD *)(a1 + 0xC) = v7[3]; /*0x6be2fc*/
      }
      return a1; /*0x6be2d8*/
    }
    else
    {
      *(_DWORD *)a1 = *(_DWORD *)(a3 + 4); /*0x6be2a8*/
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a3 + 8); /*0x6be2ad*/
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a3 + 0xC); /*0x6be2b3*/
      *(_DWORD *)(a1 + 0xC) = *(_DWORD *)(a3 + 0x10); /*0x6be2b9*/
      return a1; /*0x6be2a4*/
    }
  }
  else
  {
    *(_DWORD *)a1 = unk_B3C4E8; /*0x6be336*/
    *(_DWORD *)(a1 + 4) = unk_B3C4EC; /*0x6be33e*/
    *(_DWORD *)(a1 + 8) = unk_B3C4F0; /*0x6be347*/
    *(_DWORD *)(a1 + 0xC) = unk_B3C4F4; /*0x6be350*/
    return a1; /*0x6be332*/
  }
}
