int __thiscall sub_8A16D0(_DWORD *this, const void **a2)
{
  int v4; // ecx
  int v5; // ebx
  const void **v6; // ebp
  signed int v7; // eax
  int v8; // eax
  const void **v9; // edi
  int result; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ebp
  unsigned int i; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  const void **v19; // [esp+10h] [ebp-4h]
  const void **v20; // [esp+18h] [ebp+4h]

  sub_8CE4C0(this, a2); /*0x8a16dc*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8a16ea*/
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x1C))(v4); /*0x8a16f3*/
  else
    v5 = 0; /*0x8a16f7*/
  v6 = a2 + 1; /*0x8a16f9*/
  a2[2] = 0; /*0x8a16fc*/
  v7 = (unsigned int)a2[3] & 0x3FFFFFFF; /*0x8a1706*/
  v20 = a2 + 1; /*0x8a170d*/
  if ( v7 < v5 ) /*0x8a1711*/
  {
    v8 = 2 * v7; /*0x8a1713*/
    if ( v5 >= v8 ) /*0x8a1717*/
      v8 = v5; /*0x8a1719*/
    sub_8A6E40(a2 + 1, v8, 4); /*0x8a171f*/
  }
  v9 = a2 + 4; /*0x8a1727*/
  v6[1] = (const void *)v5; /*0x8a172a*/
  result = (unsigned int)v9[2] & 0x3FFFFFFF; /*0x8a1730*/
  v19 = v9; /*0x8a1737*/
  if ( result < v5 ) /*0x8a173b*/
  {
    v11 = 2 * result; /*0x8a173d*/
    if ( v5 >= v11 ) /*0x8a1741*/
      v11 = v5; /*0x8a1743*/
    result = sub_8A6E40(v9, v11, 4); /*0x8a1749*/
  }
  v9[1] = (const void *)v5; /*0x8a1753*/
  if ( this && (v12 = *(this + 2)) != 0 ) /*0x8a175d*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x20))(v12); /*0x8a1764*/
    v13 = result; /*0x8a1766*/
  }
  else
  {
    v13 = 0; /*0x8a176a*/
  }
  for ( i = 0; i < v5; ++i ) /*0x8a1770*/
  {
    if ( this && (v15 = *(this + 2)) != 0 ) /*0x8a177b*/
      v16 = *(_DWORD *)(*(_DWORD *)(v15 + 0x10) + 8 * i); /*0x8a1780*/
    else
      v16 = 0; /*0x8a1785*/
    *((_DWORD *)*v20 + i) = v16; /*0x8a178f*/
    if ( this && (v17 = *(this + 2)) != 0 ) /*0x8a1799*/
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 0x2C))(v17, v13); /*0x8a17a1*/
    else
      result = 0; /*0x8a17a5*/
    *((_DWORD *)*v19 + i) = result; /*0x8a17af*/
    if ( this && (v18 = *(this + 2)) != 0 ) /*0x8a17b9*/
    {
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v18 + 0x24))(v18, v13); /*0x8a17c1*/
      v13 = result; /*0x8a17c3*/
    }
    else
    {
      v13 = 0; /*0x8a17c7*/
    }
  }
  return result; /*0x8a17d0*/
}
