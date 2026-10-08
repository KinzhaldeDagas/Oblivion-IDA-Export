int __thiscall sub_8DFA10(_DWORD *this, _DWORD *a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // edx
  int v5; // esi
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  _DWORD *v9; // edx
  int v10; // esi
  char v11; // cl

  v2 = *(this + 2); /*0x8dfa10*/
  result = *a2 + *(char *)(*a2 + 5); /*0x8dfa22*/
  v4 = a2[1] + *(char *)(a2[1] + 5); /*0x8dfa28*/
  v5 = result + *(_DWORD *)(result + 0x10); /*0x8dfa31*/
  v6 = v4 + *(_DWORD *)(v4 + 0x10); /*0x8dfa33*/
  if ( !*(_BYTE *)(v2 + 0x44) /*0x8dfa53*/
    || *(_BYTE *)(v5 + 0x91)
    || *(_BYTE *)(v6 + 0x91)
    || *(_DWORD *)(v5 + 0x54) == *(_DWORD *)(v6 + 0x54) )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(v2 + 0x28) + 0x74); /*0x8dfa93*/
    v11 = *(_BYTE *)(*(_DWORD *)v10 /*0x8dfaa2*/
                   + *(unsigned __int16 *)(v4 + 0x1A)
                   + 8 * *(unsigned __int16 *)(result + 0x1A)
                   + 0x19D4);
    if ( v11 ) /*0x8dfaab*/
    {
      *(_BYTE *)(v10 + 0xC) = *(_BYTE *)(0x3C * v11 + *(_DWORD *)v10 + 0x1A24); /*0x8dfabd*/
      return sub_8E7850((_DWORD *)result, (_DWORD *)v4, (int *)v10); /*0x8dfac0*/
    }
  }
  else
  {
    v7 = v2 + 0x48; /*0x8dfa58*/
    if ( *(_DWORD *)(v2 + 0x4C) == (*(_DWORD *)(v2 + 0x50) & 0x3FFFFFFF) ) /*0x8dfa65*/
      sub_8A6EE0((const void **)v7, 8); /*0x8dfa6a*/
    v8 = *(_DWORD *)(v7 + 4); /*0x8dfa74*/
    v9 = *(_DWORD **)v7; /*0x8dfa77*/
    v9[2 * v8] = *a2; /*0x8dfa79*/
    v9[2 * v8 + 1] = a2[1]; /*0x8dfa7f*/
    result = *(_DWORD *)(v7 + 4) + 1; /*0x8dfa86*/
    *(_DWORD *)(v7 + 4) = result; /*0x8dfa88*/
  }
  return result; /*0x8dfa87*/
}
