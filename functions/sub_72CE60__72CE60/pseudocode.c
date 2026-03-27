char __thiscall sub_72CE60(const void **this, int Key)
{
  _DWORD *v2; // ebx
  unsigned int v3; // ebp
  int v4; // esi
  const void *v7; // [esp-10h] [ebp-20h]
  size_t v8; // [esp-Ch] [ebp-1Ch]
  size_t v9; // [esp-4h] [ebp-14h]
  int (__cdecl *v10)(const void *, const void *); // [esp+4h] [ebp-Ch]

  v2 = (_DWORD *)Key;
  v3 = *(_DWORD *)(Key + 8);
  v4 = 0;
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    LODWORD(v9) = PtFuncCompare;
    HIDWORD(v8) = 2;
    LODWORD(v8) = *(this + 2);
    v7 = *this;
    Key = *(unsigned __int16 *)(*v2 + 8 * v4);
    if ( !bsearch(&Key, v7, v8, v9, v10) )
      break;
    if ( ++v4 >= v3 )
      return 1;
  }
  return 0;
}
