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

  v2 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94dfb1*/
  if ( v2 ) /*0x94dfb8*/
  {
    *v2 = 0; /*0x94dfbf*/
    v2[1] = 0; /*0x94dfc1*/
    v2[2] = 0x80000000; /*0x94dfc4*/
    v2[3] = 0; /*0x94dfc7*/
    v2[4] = 0; /*0x94dfca*/
    v2[5] = 0x80000000; /*0x94dfcd*/
  }
  else
  {
    v2 = 0; /*0x94dfd2*/
  }
  *((_DWORD *)this + 0x14) = v2; /*0x94dfd7*/
  sub_94DB40(this, (int)v2); /*0x94dfda*/
  v3 = *((_DWORD *)this + 0x14); /*0x94dfdf*/
  if ( *(_DWORD *)(v3 + 4) == (*(_DWORD *)(v3 + 8) & 0x3FFFFFFF) ) /*0x94dff0*/
    sub_8A6EE0((const void **)v3, 0x10); /*0x94dff5*/
  v4 = (__m128 *)(*(_DWORD *)v3 + 0x10 * (*(_DWORD *)(v3 + 4))++); /*0x94e007*/
  *v4 = *(this + 6); /*0x94e011*/
  v5 = *((_DWORD *)this + 0x14); /*0x94e014*/
  v6 = *(_DWORD *)(v5 + 0x14); /*0x94e017*/
  v7 = v5 + 0xC; /*0x94e01a*/
  v8 = *((_DWORD *)this + 0x20); /*0x94e01e*/
  v9 = v6 & 0x3FFFFFFF; /*0x94e024*/
  if ( v9 < v8 ) /*0x94e02b*/
  {
    v10 = 2 * v9; /*0x94e02d*/
    if ( v8 >= v10 ) /*0x94e031*/
      v10 = *((_DWORD *)this + 0x20); /*0x94e033*/
    sub_8A6E40((const void **)v7, v10, 0xC); /*0x94e039*/
  }
  *(_DWORD *)(v7 + 4) = v8; /*0x94e041*/
  v11 = 0; /*0x94e04a*/
  if ( *((_DWORD *)this + 0x20) - 1 > 0 ) /*0x94e050*/
  {
    v12 = 0; /*0x94e052*/
    do /*0x94e07b*/
    {
      v13 = (_DWORD *)(v12 + *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC)); /*0x94e060*/
      *v13 = *((_DWORD *)this + 0x20); /*0x94e062*/
      v13[2] = v11; /*0x94e067*/
      v13[1] = v11 + 1; /*0x94e06a*/
      v12 += 0xC; /*0x94e073*/
      ++v11; /*0x94e076*/
    }
    while ( v11 < *((_DWORD *)this + 0x20) - 1 ); /*0x94e07b*/
  }
  result = (__int32 *)(*(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC) + 0xC * v11); /*0x94e086*/
  v15 = *((_DWORD *)this + 0x20); /*0x94e089*/
  result[1] = 0; /*0x94e091*/
  *result = v15; /*0x94e094*/
  result[2] = v11; /*0x94e096*/
  return result; /*0x94e08f*/
}
