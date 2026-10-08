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

  v2 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94d521*/
  v3 = 0; /*0x94d524*/
  if ( v2 ) /*0x94d528*/
  {
    *(_DWORD *)v2 = 0; /*0x94d52f*/
    *(_DWORD *)(v2 + 4) = 0; /*0x94d531*/
    *(_DWORD *)(v2 + 8) = 0x80000000; /*0x94d534*/
    *(_DWORD *)(v2 + 0xC) = 0; /*0x94d537*/
    *(_DWORD *)(v2 + 0x10) = 0; /*0x94d53a*/
    *(_DWORD *)(v2 + 0x14) = 0x80000000; /*0x94d53d*/
  }
  else
  {
    v2 = 0; /*0x94d542*/
  }
  *((_DWORD *)this + 0x14) = v2; /*0x94d547*/
  sub_94D2E0(this, (const void **)v2); /*0x94d54a*/
  v4 = *((_DWORD *)this + 0x14); /*0x94d54f*/
  if ( *(_DWORD *)(v4 + 4) == (*(_DWORD *)(v4 + 8) & 0x3FFFFFFF) ) /*0x94d560*/
    sub_8A6EE0((const void **)v4, 0x10); /*0x94d565*/
  v5 = (__m128 *)(*(_DWORD *)v4 + 0x10 * (*(_DWORD *)(v4 + 4))++); /*0x94d577*/
  *v5 = *(this + 8); /*0x94d584*/
  result = *((_DWORD *)this + 0x27); /*0x94d58d*/
  v7 = *(_DWORD *)(*((_DWORD *)this + 0x14) + 4) - 1; /*0x94d593*/
  for ( i = 0; i < result; v3 += 0xC ) /*0x94d598*/
  {
    v9 = (int *)(v3 + *(_DWORD *)(*((_DWORD *)this + 0x14) + 0xC)); /*0x94d5a6*/
    v9[2] = i; /*0x94d5ab*/
    *v9 = v7; /*0x94d5ae*/
    v9[1] = i + 1; /*0x94d5b0*/
    result = *((_DWORD *)this + 0x27); /*0x94d5b3*/
    ++i; /*0x94d5b9*/
  }
  return result; /*0x94d5c2*/
}
