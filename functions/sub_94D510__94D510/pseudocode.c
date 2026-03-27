int __thiscall sub_94D510(__m128 *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  __m128 *v5; // eax
  int result; // eax
  int v7; // edi
  int i; // ecx
  int *v9; // eax

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  v3 = 0;
  if ( v2 )
  {
    *(_DWORD *)v2 = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0x80000000;
    *(_DWORD *)(v2 + 0xC) = 0;
    *(_DWORD *)(v2 + 0x10) = 0;
    *(_DWORD *)(v2 + 0x14) = 0x80000000;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 0x14) = v2;
  sub_94D2E0(this, (const void **)v2);
  v4 = *((_DWORD *)this + 0x14);
  if ( *(_DWORD *)(v4 + 4) == (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v4, 0x10);
  v5 = (__m128 *)(*(_DWORD *)v4 + 0x10 * (*(_DWORD *)(v4 + 4))++);
  *v5 = *(this + 8);
  result = *((_DWORD *)this + 0x27);
  v7 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4) - 1;
  for ( i = 0; i < result; v3 += 0xC )
  {
    v9 = (int *)(v3 + *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC));
    v9[2] = i;
    *v9 = v7;
    v9[1] = i + 1;
    result = *((_DWORD *)this + 0x27);
    ++i;
  }
  return result;
}
