int __cdecl _setmode_nolock(int a1, int a2)
{
  int v2; // edx
  _DWORD *v3; // esi
  int v4; // ecx
  int v5; // eax
  _BYTE *v6; // ecx
  char v7; // dl
  int v9; // [esp+14h] [ebp+8h]

  v2 = 0x28 * (a1 & 0x1F);
  v3 = (_DWORD *)(4 * (a1 >> 5) + 0xBAAAC0);
  v4 = dword_BAAAC0[a1 >> 5] + v2;
  v9 = *(_BYTE *)(v4 + 4) & 0x80;
  v5 = (char)(2 * *(_BYTE *)(v4 + 0x24)) >> 1;
  if ( a2 == 0x4000 )
  {
    *(_BYTE *)(v4 + 4) |= 0x80u;
    *(_BYTE *)(*v3 + v2 + 0x24) &= 0x80u;
  }
  else if ( a2 == 0x8000 )
  {
    *(_BYTE *)(v4 + 4) &= ~0x80u;
  }
  else
  {
    if ( a2 == 0x10000 || a2 == 0x20000 )
    {
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v6 = (_BYTE *)(*v3 + v2 + 0x24);
      v7 = *v6 & 0x80 | 2;
    }
    else
    {
      if ( a2 != 0x40000 )
        goto LABEL_11;
      *(_BYTE *)(v4 + 4) |= 0x80u;
      v6 = (_BYTE *)(*v3 + v2 + 0x24);
      v7 = *v6 & 0x80 | 1;
    }
    *v6 = v7;
  }
LABEL_11:
  if ( v9 )
    return v5 != 0 ? 0x10000 : 0x4000;
  else
    return 0x8000;
}
