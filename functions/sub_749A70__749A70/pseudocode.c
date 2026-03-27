LONG __thiscall sub_749A70(char **this, int a2, volatile LONG *a3)
{
  volatile LONG *v3; // ebp
  int v4; // edi
  _DWORD *v6; // esi
  int v7; // ecx
  volatile LONG *v8; // eax
  volatile LONG *v9; // edi
  LONG result; // eax
  int v11; // esi
  LONG v12; // edi

  v3 = a3;
  v4 = a2;
  sub_722700(this, (NiGeometry *)a2, (_DWORD **)a3);
  *(_BYTE *)(a2 + 0xC0) = *((_BYTE *)this + 0xC0);
  v6 = *(this + 0x32);
  if ( v6 )
  {
    do
    {
      v7 = v6[2];
      v6 = (_DWORD *)*v6;
      v8 = (volatile LONG *)(*(int (__thiscall **)(int, volatile LONG *))(*(_DWORD *)v7 + 0x18))(v7, v3);
      v9 = v8;
      a3 = v8;
      if ( v8 )
        InterlockedIncrement(v8 + 1);
      sub_7C16B0((_DWORD *)(a2 + 0xC4), (int *)&a3);
      if ( v9 )
      {
        if ( !InterlockedDecrement(v9 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
      }
    }
    while ( v6 );
    v4 = a2;
  }
  *(float *)(v4 + 0xE8) = *((float *)this + 0x3A);
  result = (*(int (__thiscall **)(_DWORD, volatile LONG *))(*(_DWORD *)*(this + 0x2D) + 0x18))(*(this + 0x2D), v3);
  v11 = *(_DWORD *)(a2 + 0xB4);
  v12 = result;
  if ( v11 != result )
  {
    if ( v11 )
    {
      result = InterlockedDecrement((volatile LONG *)(v11 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v11)(v11, 1);
    }
    *(_DWORD *)(a2 + 0xB4) = v12;
    if ( v12 )
      return InterlockedIncrement((volatile LONG *)(v12 + 4));
  }
  return result;
}
