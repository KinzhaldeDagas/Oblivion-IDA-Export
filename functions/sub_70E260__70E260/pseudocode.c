char __thiscall sub_70E260(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // eax
  int v5; // edi
  _BYTE *v6; // edx
  _DWORD *i; // eax

  if ( *(_DWORD *)(a2 + 4) != *(this + 1) )
    return 1;
  if ( *(_BYTE *)a2 != *(_BYTE *)this )
    return 1;
  if ( *(_DWORD *)(a2 + 8) != *(this + 2) )
    return 1;
  if ( *(_BYTE *)(a2 + 1) != *((_BYTE *)this + 1) )
    return 1;
  v2 = *(_DWORD *)(a2 + 0xC);
  v3 = *(this + 3);
  if ( v2 != v3 && v3 != 0xFFFFFFFF && v2 != 0xFFFFFFFF )
    return 1;
  v5 = 0;
  v6 = (_BYTE *)(a2 + 0x1C);
  for ( i = this + 5;
        *(_DWORD *)((char *)i + a2 - (_DWORD)this) == *i
     && *((_DWORD *)v6 + 0xFFFFFFFF) == i[1]
     && *v6 == *((_BYTE *)i + 8)
     && v6[1] == *((_BYTE *)i + 9);
        i += 3 )
  {
    ++v5;
    v6 += 0xC;
    if ( v5 >= 4 )
      return 0;
  }
  return 1;
}
