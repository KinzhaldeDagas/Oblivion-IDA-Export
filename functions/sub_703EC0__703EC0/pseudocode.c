int __thiscall sub_703EC0(unsigned __int16 *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int result; // eax
  unsigned int v5; // ebx
  int v6; // ebx
  int v7; // esi
  int v8; // ebx
  int *v9; // esi
  int v10; // ebp
  unsigned int v11; // ebx
  int v12; // ebx
  int v13; // esi
  int v14; // ebx
  int *v15; // esi
  int v16; // ebp
  unsigned int i; // [esp+10h] [ebp-8h]
  unsigned int j; // [esp+10h] [ebp-8h]
  unsigned int v19; // [esp+14h] [ebp-4h]
  unsigned int v20; // [esp+14h] [ebp-4h]

  v2 = a2;
  sub_6D7DF0(this, a2);
  result = sub_7124D0(a2);
  *(this + 0xC) &= 0xF00Fu;
  v5 = 0;
  v19 = result;
  for ( i = 0; i < v19; ++i )
  {
    result = sub_7124D0(v2);
    if ( result )
    {
      v6 = *((_DWORD *)this + 8) + 4 * v5;
      result = sub_7124A0(v2);
      v7 = *(_DWORD *)v6;
      v8 = *(_DWORD *)(*(_DWORD *)v6 + 8);
      v9 = (int *)(v7 + 8);
      v10 = result;
      if ( v8 != result )
      {
        if ( v8 )
        {
          result = InterlockedDecrement((volatile LONG *)(v8 + 4));
          if ( !result )
            result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
        }
        *v9 = v10;
        if ( v10 )
          result = InterlockedIncrement((volatile LONG *)(v10 + 4));
      }
      v2 = a2;
      if ( i >= 6 )
      {
        result = *(this + 0xC) & 0xF00F;
        *(this + 0xC) = result | (0x10 * ((unsigned __int8)(*(this + 0xC) >> 4) + 1));
      }
    }
    v5 = i + 1;
  }
  if ( v2[0x36] >= 0x5000011u )
  {
    result = sub_7124D0(v2);
    v11 = 0;
    v20 = result;
    for ( j = 0; j < v20; ++j )
    {
      result = sub_7124D0(v2);
      if ( result )
      {
        v12 = *(_DWORD *)(*((_DWORD *)this + 0xB) + 4) + 4 * v11;
        result = sub_7124A0(v2);
        v13 = *(_DWORD *)v12;
        v14 = *(_DWORD *)(*(_DWORD *)v12 + 8);
        v15 = (int *)(v13 + 8);
        v16 = result;
        if ( v14 != result )
        {
          if ( v14 )
          {
            result = InterlockedDecrement((volatile LONG *)(v14 + 4));
            if ( !result )
              result = (**(int (__thiscall ***)(int, int))v14)(v14, 1);
          }
          *v15 = v16;
          if ( v16 )
            result = InterlockedIncrement((volatile LONG *)(v16 + 4));
        }
        v2 = a2;
      }
      v11 = j + 1;
    }
  }
  return result;
}
