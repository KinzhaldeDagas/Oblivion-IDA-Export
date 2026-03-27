volatile LONG **__thiscall sub_708560(int **this, volatile LONG **a2, signed int a3)
{
  _DWORD *v4; // edi
  volatile LONG *v5; // esi
  int v6; // eax
  void (__thiscall ***v8)(_DWORD, int); // esi
  volatile LONG *v9; // esi
  bool v10; // zf
  volatile LONG *v11; // [esp+10h] [ebp-10h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-4h]

  v11 = 0;
  if ( a3 < 0xA && (v4 = *(this + 0x27)) != 0 )
  {
    while ( 1 )
    {
      v5 = (volatile LONG *)v4[2];
      v4 = (_DWORD *)*v4;
      v11 = v5;
      if ( v5 )
        InterlockedIncrement(v5 + 1);
      v12 = 0;
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(volatile LONG *))(*v5 + 0x4C))(v5);
        if ( v6 == a3 )
          break;
      }
      v12 = 0xFFFFFFFF;
      if ( v5 )
      {
        if ( !InterlockedDecrement(v5 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1);
      }
      if ( !v4 )
        goto LABEL_11;
    }
    sub_4A0E50(this + 0x26, &a3, (int *)&v11);
    v8 = (void (__thiscall ***)(_DWORD, int))a3;
    if ( a3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
      {
        if ( v8 )
          (**v8)(v8, 1);
      }
    }
    v9 = v11;
    v10 = v11 == 0;
    *a2 = v11;
    if ( !v10 )
      InterlockedIncrement(v9 + 1);
    v12 = 0xFFFFFFFF;
    if ( v9 )
    {
      if ( !InterlockedDecrement(v9 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
    }
    return a2;
  }
  else
  {
LABEL_11:
    *a2 = 0;
    return a2;
  }
}
