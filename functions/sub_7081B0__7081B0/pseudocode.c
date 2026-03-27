_DWORD *__thiscall sub_7081B0(unsigned __int16 *this, _DWORD *a2)
{
  unsigned __int16 *v2; // esi
  _DWORD *v3; // ebx
  _DWORD *result; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  int v7; // esi
  _DWORD *v8; // ebp
  int v9; // esi
  Ni2DBuffer **v10; // esi
  Ni2DBuffer *v11; // eax

  v2 = this;
  v3 = a2;
  sub_700050(this, a2);
  result = (_DWORD *)sub_7124D0(v3);
  v5 = result;
  if ( v3[0x36] >= 0x4010008u )
  {
    if ( result )
    {
      v8 = v2 + 0x4C;
      do
      {
        v5 = (_DWORD *)((char *)v5 + 0xFFFFFFFF);
        v9 = sub_7124A0(v3);
        a2 = (_DWORD *)v9;
        if ( v9 )
          InterlockedIncrement((volatile LONG *)(v9 + 4));
        result = (_DWORD *)sub_749800(v8, (int *)&a2);
        if ( v9 )
        {
          result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v9 + 4));
          if ( !result )
            result = (_DWORD *)(**(int (__thiscall ***)(int, int))v9)(v9, 1);
        }
      }
      while ( v5 );
      v2 = this;
    }
    if ( v3[0x36] >= 0x5000013u )
    {
      v10 = (Ni2DBuffer **)(v2 + 0x54);
      v11 = (Ni2DBuffer *)sub_7124A0(v3);
      result = NiSmartPointer_Set__(v10, v11);
      if ( *v10 )
        return (*((_DWORD *(__thiscall **)(Ni2DBuffer *, _DWORD, _DWORD))(*v10)->__vftable + 0x17))(*v10, v3[0x36], 0);
    }
  }
  else if ( result )
  {
    v6 = v2 + 0x4C;
    do
    {
      v5 = (_DWORD *)((char *)v5 + 0xFFFFFFFF);
      v7 = sub_7124A0(v3);
      a2 = (_DWORD *)v7;
      if ( v7 )
        InterlockedIncrement((volatile LONG *)(v7 + 4));
      result = sub_7C16B0(v6, (int *)&a2);
      if ( v7 )
      {
        result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v7 + 4));
        if ( !result )
          result = (_DWORD *)(**(int (__thiscall ***)(int, int))v7)(v7, 1);
      }
    }
    while ( v5 );
  }
  return result;
}
