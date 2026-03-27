int *__thiscall sub_6C4A10(unsigned __int16 *this, int *a2, int a3)
{
  unsigned int v4; // ecx
  unsigned int v5; // esi
  int *v6; // eax
  int v7; // ebp
  void (__thiscall ***v9)(_DWORD, int); // esi
  unsigned int v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  _DWORD *v13; // eax
  int v14; // ecx
  int v15; // ebp
  int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  _DWORD *v19; // ecx
  unsigned int i; // eax
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h] BYREF
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  unsigned int v25; // [esp+2Ch] [ebp-4h]

  v4 = *(this + 0x23);
  v5 = 0;
  v23 = 0;
  if ( v4 )
  {
    v6 = *((int **)this + 0x10);
    while ( 1 )
    {
      v7 = *v6;
      v21 = *v6;
      if ( *v6 == a3 )
        break;
      ++v5;
      ++v6;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v24 = *v6;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
    v25 = 0;
    sub_6D7F60((int)(this + 0x1E), &v22, v5);
    if ( v22 )
    {
      v9 = (void (__thiscall ***)(_DWORD, int))v22;
      if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
        (**v9)(v9, 1);
    }
    v10 = *((_DWORD *)this + 0x17);
    v11 = 0;
    if ( v10 )
    {
      v12 = *((_DWORD **)this + 0x18);
      while ( !*v12 )
      {
        ++v11;
        ++v12;
        if ( v11 >= v10 )
          goto LABEL_15;
      }
      v13 = *(_DWORD **)(*((_DWORD *)this + 0x18) + 4 * v11);
    }
    else
    {
LABEL_15:
      v13 = 0;
    }
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = v13[2];
        v15 = v13[1];
        v13 = (_DWORD *)*v13;
        v23 = v14;
        if ( !v13 )
        {
          v16 = (*(int (__thiscall **)(unsigned __int16 *, int))(*((_DWORD *)this + 0x16) + 4))(this + 0x2C, v15);
          v17 = *((_DWORD *)this + 0x17);
          v18 = v16 + 1;
          if ( v18 >= v17 )
          {
LABEL_22:
            v13 = 0;
          }
          else
          {
            v19 = (_DWORD *)(*((_DWORD *)this + 0x18) + 4 * v18);
            while ( !*v19 )
            {
              ++v18;
              ++v19;
              if ( v18 >= v17 )
                goto LABEL_22;
            }
            v13 = (_DWORD *)*v19;
          }
        }
        if ( v23 == a3 )
          break;
        if ( !v13 )
          goto LABEL_29;
      }
      NiTMap_RemoveAt((_DWORD *)this + 0x16, v15);
LABEL_29:
      v7 = v21;
    }
    for ( i = 0; i < *((_DWORD *)this + 0x15); ++i )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * i) == a3 )
      {
        --*((_DWORD *)this + 0x15);
        *(_DWORD *)(*((_DWORD *)this + 0x13) + 4 * i) = *(_DWORD *)(*((_DWORD *)this + 0x13)
                                                                  + 4 * *((_DWORD *)this + 0x15));
      }
    }
    sub_6CAC60((_DWORD *)v7);
    *(_DWORD *)(v7 + 0x40) = 0;
    *a2 = v7;
    InterlockedIncrement((volatile LONG *)(v7 + 4));
    v25 = 0xFFFFFFFF;
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    return a2;
  }
  else
  {
LABEL_5:
    *a2 = 0;
    return a2;
  }
}
