unsigned int __thiscall sub_954AF0(unsigned int **this, int a2, int a3, int a4)
{
  unsigned int **v4; // edi
  unsigned int *v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  signed int *v8; // edi
  _DWORD *v9; // ebx
  unsigned int **v11; // [esp+Ch] [ebp-8h]
  unsigned int v12; // [esp+10h] [ebp-4h]

  v4 = this; /*0x954b00*/
  v5 = *(this + 4); /*0x954b02*/
  v12 = v5[3]; /*0x954b08*/
  v6 = **(_DWORD **)(a2 + 0xB8) - *(_DWORD *)(a4 + 0x34); /*0x954b12*/
  v11 = v4; /*0x954b18*/
  if ( v6 >= 0x20 ) /*0x954b1d*/
  {
    if ( v6 >= 0x100 ) /*0x954b2d*/
    {
      if ( v6 >= 0x10000 ) /*0x954b3d*/
      {
        if ( v6 >= 0x1000000 ) /*0x954b4d*/
          sub_9567C0(v5, 0x53, v6); /*0x954b5a*/
        else
          sub_956670(v5, 0x52, v6); /*0x954b51*/
      }
      else
      {
        sub_9565E0(v5, 0x51, v6); /*0x954b41*/
      }
    }
    else
    {
      sub_956580(v5, 0x50, v6); /*0x954b31*/
    }
  }
  else
  {
    sub_956550(v5, 0x30, v6); /*0x954b21*/
  }
  v7 = 0; /*0x954b62*/
  if ( *(int *)(a2 + 0x2C) > 0 ) /*0x954b66*/
  {
    v8 = (signed int *)(a2 + 0x30); /*0x954b6d*/
    v9 = (_DWORD *)(a3 + 0x44); /*0x954b70*/
    do /*0x954b95*/
    {
      if ( *v8 ) /*0x954b73*/
      {
        if ( *v9 ) /*0x954b79*/
          sub_9548D0(v11, v7, *v8); /*0x954b84*/
      }
      ++v7; /*0x954b8c*/
      ++v9; /*0x954b8d*/
      ++v8; /*0x954b90*/
    }
    while ( v7 < *(_DWORD *)(a2 + 0x2C) ); /*0x954b95*/
    v4 = v11; /*0x954b97*/
  }
  return v4[4][3] - v12; /*0x954ba6*/
}
