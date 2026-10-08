_BYTE *__thiscall sub_918E90(void *this, _BYTE *a2, unsigned int a3, int a4, __m128 *a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v12; // [esp-4h] [ebp-24h]
  __m128 v13; // [esp+10h] [ebp-10h] BYREF

  v6 = a3; /*0x918e9d*/
  if ( (a3 & 3) == 3 ) /*0x918eab*/
  {
    v6 = a3 & 0xFFFFFFFC; /*0x918ebc*/
  }
  else if ( (a3 & 3) != 0 ) /*0x918f5d*/
  {
    *a2 = 0; /*0x918f68*/
    return a2; /*0x918f63*/
  }
  if ( *(_BYTE *)(v6 + 0x18) == 1 ) /*0x918ec6*/
  {
    v7 = v6 + *(_DWORD *)(v6 + 0x10); /*0x918ecf*/
    if ( v7 ) /*0x918ed1*/
    {
      v8 = *(_DWORD *)(v7 + 8); /*0x918ed3*/
      *((_DWORD *)this + 0xA) = v8; /*0x918ed6*/
      if ( !*(_BYTE *)(v7 + 0x91) && *(_DWORD *)(v7 + 8) == v8 ) /*0x918eea*/
      {
        sub_88FD10(&v13, (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0x10), a5); /*0x918efb*/
        v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x26); /*0x918f0c*/
        *(_WORD *)(v9 + 4) = 0x50; /*0x918f27*/
        v10 = sub_8B89C0((_DWORD *)v9, &v13, a5, 0x3F000000, 0x3E99999A, 0x3F733333, (_WORD *)v7); /*0x918f2d*/
        v12 = *((_DWORD *)this + 0xC); /*0x918f35*/
        *((_DWORD *)this + 0xB) = v10; /*0x918f38*/
        sub_8B8A80(v10, v12); /*0x918f3b*/
        sub_89BAE0(*((int **)this + 0xA), *((_DWORD *)this + 0xB)); /*0x918f47*/
      }
    }
  }
  *a2 = 1; /*0x918f4f*/
  return a2; /*0x918f52*/
}
