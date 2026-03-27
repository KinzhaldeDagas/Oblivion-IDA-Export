_WORD *__thiscall sub_901690(_WORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _WORD *v6; // esi
  int v7; // eax
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  int v11; // ecx
  int i; // eax
  int v14; // [esp+8h] [ebp-8h] BYREF

  v6 = this + 6;
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = a5;
  *(_DWORD *)this = &off_A9BB10;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0x80000000;
  if ( a5 )
  {
    (*(void (__thiscall **)(_DWORD, int *))(*(_DWORD *)*a2 + 0x1C))(*a2, &v14);
    v7 = v14;
    v8 = *((_DWORD *)v6 + 1);
    v9 = v14;
    if ( v14 > v8 )
    {
      v10 = *((_DWORD *)v6 + 2) & 0x3FFFFFFF;
      if ( v10 < v14 )
      {
        v11 = 2 * v10;
        if ( v14 < v11 )
          v7 = v11;
        sub_8A6E40((const void **)v6, v7, 2);
      }
      for ( i = v8; i < v9; ++i )
        *(_WORD *)(*(_DWORD *)v6 + 2 * i) = 0xFFFF;
    }
    *((_DWORD *)v6 + 1) = v9;
  }
  return this;
}
