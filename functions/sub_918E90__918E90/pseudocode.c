_BYTE *__thiscall sub_918E90(void *this, _BYTE *a2, unsigned int a3, int a4, __m128 *a5)
{
  unsigned int v6; // ecx
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  int v12; // [esp-4h] [ebp-24h]
  __m128 v13; // [esp+10h] [ebp-10h] BYREF

  v6 = a3;
  if ( (a3 & 3) == 3 )
  {
    v6 = a3 & 0xFFFFFFFC;
  }
  else if ( (a3 & 3) != 0 )
  {
    *a2 = 0;
    return a2;
  }
  if ( *(_BYTE *)(v6 + 0x18) == 1 )
  {
    v7 = v6 + *(_DWORD *)(v6 + 0x10);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      *((_DWORD *)this + 0xA) = v8;
      if ( !*(_BYTE *)(v7 + 0x91) && *(_DWORD *)(v7 + 8) == v8 )
      {
        sub_88FD10(&v13, (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0x10), a5);
        v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x26);
        *(_WORD *)(v9 + 4) = 0x50;
        v10 = sub_8B89C0((_DWORD *)v9, &v13, a5, 0x3F000000, 0x3E99999A, 0x3F733333, (_WORD *)v7);
        v12 = *((_DWORD *)this + 0xC);
        *((_DWORD *)this + 0xB) = v10;
        sub_8B8A80(v10, v12);
        sub_89BAE0(*((int **)this + 0xA), *((_DWORD *)this + 0xB));
      }
    }
  }
  *a2 = 1;
  return a2;
}
