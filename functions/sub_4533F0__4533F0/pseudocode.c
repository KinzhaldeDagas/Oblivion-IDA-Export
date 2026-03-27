int __thiscall sub_4533F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v4; // ecx
  int result; // eax
  _DWORD *v6; // ecx
  int v7; // [esp-8h] [ebp-10h]
  int v8; // [esp-8h] [ebp-10h]

  if ( (_BYTE)a3 )
  {
    v4 = (_DWORD *)*(this + 1);
    if ( v4 )
    {
      v7 = *(_DWORD *)(a2 + 0xC);
      a3 = 0;
      NiTMap_GetAt(v4, v7, &a3);
      result = a3;
      if ( a3 )
        return *(_DWORD *)result;
    }
  }
  v8 = *(_DWORD *)(a2 + 0xC);
  v6 = (_DWORD *)*this;
  a3 = 0;
  NiTMap_GetAt(v6, v8, &a3);
  result = a3;
  if ( a3 )
    return *(_DWORD *)result;
  return result;
}
