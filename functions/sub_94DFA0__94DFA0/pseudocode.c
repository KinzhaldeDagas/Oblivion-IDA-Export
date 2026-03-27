__int32 *__thiscall sub_94DFA0(__m128 *this)
{
  _DWORD *v2; // eax
  int v3; // edi
  __m128 *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // edi
  _DWORD *v13; // eax
  __int32 *result; // eax
  __int32 v15; // edx

  v2 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    v2[2] = 0x80000000;
    v2[3] = 0;
    v2[4] = 0;
    v2[5] = 0x80000000;
  }
  else
  {
    v2 = 0;
  }
  *((_DWORD *)this + 0x14) = v2;
  sub_94DB40(this, (int)v2);
  v3 = *((_DWORD *)this + 0x14);
  if ( *(_DWORD *)(v3 + 4) == (*(_DWORD *)(v3 + 8) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)v3, 0x10);
  v4 = (__m128 *)(*(_DWORD *)v3 + 0x10 * (*(_DWORD *)(v3 + 4))++);
  *v4 = *(this + 6);
  v5 = *((_DWORD *)this + 0x14);
  v6 = *(_DWORD *)(v5 + 0x14);
  v7 = v5 + 0xC;
  v8 = *((_DWORD *)this + 0x20);
  v9 = v6 & 0x3FFFFFFF;
  if ( v9 < v8 )
  {
    v10 = 2 * v9;
    if ( v8 >= v10 )
      v10 = *((_DWORD *)this + 0x20);
    sub_8A6E40((const void **)v7, v10, 0xC);
  }
  *(_DWORD *)(v7 + 4) = v8;
  v11 = 0;
  if ( *((_DWORD *)this + 0x20) - 1 > 0 )
  {
    v12 = 0;
    do
    {
      v13 = (_DWORD *)(v12 + *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC));
      *v13 = *((_DWORD *)this + 0x20);
      v13[2] = v11;
      v13[1] = v11 + 1;
      v12 += 0xC;
      ++v11;
    }
    while ( v11 < *((_DWORD *)this + 0x20) - 1 );
  }
  result = (__int32 *)(*(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC) + 0xC * v11);
  v15 = *((_DWORD *)this + 0x20);
  result[1] = 0;
  *result = v15;
  result[2] = v11;
  return result;
}
