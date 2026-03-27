char __thiscall sub_6E9220(float *this, int a2)
{
  _DWORD *v2; // edi
  float *v3; // ebx
  __int16 v5; // cx
  unsigned int v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // ebp
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v11; // ecx
  _DWORD *v12; // ebp
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // esi
  _DWORD *v16; // edi
  _DWORD *v17; // ebx
  int v18; // esi
  int v19; // ecx
  unsigned int v20; // [esp+Ch] [ebp-Ch]
  unsigned int i; // [esp+Ch] [ebp-Ch]
  _DWORD *v22; // [esp+10h] [ebp-8h]

  v2 = (_DWORD *)a2;
  v3 = this;
  if ( !sub_715820(this, a2) )
    return 0;
  if ( *((_DWORD *)v3 + 0xF) != *(_DWORD *)(a2 + 0x3C) )
    return 0;
  if ( *((_DWORD *)v3 + 0x10) != *(_DWORD *)(a2 + 0x40) )
    return 0;
  v5 = *((_WORD *)v3 + 0x27);
  if ( v5 != *(_WORD *)(a2 + 0x4E)
    || *((_WORD *)v3 + 0x2F) != *(_WORD *)(a2 + 0x5E)
    || *((_DWORD *)v3 + 0x1B) != *(_DWORD *)(a2 + 0x6C) )
  {
    return 0;
  }
  v6 = 0;
  v20 = 0;
  if ( v5 )
  {
    do
    {
      v7 = *(_DWORD **)(*((_DWORD *)v3 + 0x12) + 4 * v6);
      v8 = *(_DWORD **)(v2[0x12] + 4 * v6);
      if ( v7 )
      {
        if ( !v8 )
          return 0;
        v9 = v7[2];
        if ( v9 != v8[2] )
          return 0;
        v10 = 0;
        if ( v9 )
        {
          do
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(4 * v10 + *v7) + 0x2C))(
                    *(_DWORD *)(4 * v10 + *v7),
                    *(_DWORD *)(4 * v10 + *v8)) )
              return 0;
            ++v10;
          }
          while ( v10 < v7[2] );
          v6 = v20;
        }
        v2 = (_DWORD *)a2;
      }
      else if ( v8 )
      {
        return 0;
      }
      v20 = ++v6;
    }
    while ( v6 < *((unsigned __int16 *)v3 + 0x27) );
  }
  v11 = 0;
  for ( i = 0; v11 < *((unsigned __int16 *)v3 + 0x2F); i = ++v11 )
  {
    v12 = *(_DWORD **)(*((_DWORD *)v3 + 0x16) + 4 * v11);
    v13 = *(_DWORD **)(v2[0x16] + 4 * v11);
    v22 = v13;
    if ( v12 )
    {
      if ( !v13 )
        return 0;
      v14 = v12[2];
      if ( v14 != v13[2] )
        return 0;
      v15 = 0;
      if ( v14 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD **)(*v12 + 4 * v15);
          v17 = *(_DWORD **)(*v13 + 4 * v15);
          if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*v16 + 0x2C))(*v16, *v17)
            || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v16[1] + 0x2C))(v16[1], v17[1]) )
          {
            return 0;
          }
          if ( (unsigned int)++v15 >= v12[2] )
          {
            v11 = i;
            v3 = this;
            v2 = (_DWORD *)a2;
            break;
          }
          v13 = v22;
        }
      }
    }
    else if ( v13 )
    {
      return 0;
    }
  }
  v18 = 0;
  if ( *((_DWORD *)v3 + 0x1B) )
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(4 * v18 + *((_DWORD *)v3 + 0x19));
      if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v19 + 0x2C))(
              v19,
              *(_DWORD *)(4 * v18 + v2[0x19])) )
        break;
      if ( (unsigned int)++v18 >= *((_DWORD *)v3 + 0x1B) )
        return 1;
    }
    return 0;
  }
  return 1;
}
