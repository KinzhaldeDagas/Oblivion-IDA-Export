signed int __thiscall sub_946340(void **this, int a2)
{
  int v3; // ecx
  int v4; // eax
  _DWORD *i; // edx
  void *v7; // ecx
  int v8; // esi

  sub_918440(*(this + 5), 9);
  sub_9181B0((_DWORD **)*(this + 5), 0x22);
  sub_918460(*(this + 5), a2, 0);
  v3 = (int)*(this + 9);
  v4 = 0;
  if ( v3 > 0 )
  {
    for ( i = *(this + 8); *i != a2; i += 2 )
    {
      if ( ++v4 >= v3 )
        return 9;
    }
    v7 = (char *)*(this + 9) + 0xFFFFFFFF;
    *(this + 9) = v7;
    v8 = (int)*(this + 8);
    *(_DWORD *)(v8 + 8 * v4) = *(_DWORD *)(v8 + 8 * (_DWORD)v7);
    *(_DWORD *)(v8 + 8 * v4 + 4) = *(_DWORD *)(v8 + 8 * (_DWORD)v7 + 4);
  }
  return 9;
}
