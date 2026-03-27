int __thiscall sub_8BC0A0(_DWORD *this)
{
  int v2; // edx
  int result; // eax
  int v4; // ecx
  int v5; // ecx

  *(_DWORD *)(*(this + 2) + 4) = 0;
  v2 = *(this + 2);
  *(this + 3) = 0;
  result = *(_DWORD *)(v2 + 4) + 1;
  v4 = *(_DWORD *)(v2 + 8) & 0x3FFFFFFF;
  if ( v4 < result )
  {
    v5 = 2 * v4;
    if ( result < v5 )
      result = v5;
    result = sub_8A6E40((const void **)v2, result, 1);
  }
  *(_BYTE *)(*(_DWORD *)(*(this + 2) + 4) + *(_DWORD *)*(this + 2)) = 0;
  return result;
}
