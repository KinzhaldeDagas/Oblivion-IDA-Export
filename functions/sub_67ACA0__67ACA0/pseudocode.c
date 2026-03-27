void __thiscall sub_67ACA0(int *this, int a2)
{
  int *v2; // ebp
  bool v3; // zf
  int *v4; // edi
  int v5; // esi
  char v6; // bl
  char v7; // bl
  volatile LONG *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // ebp
  int *v10; // ebp
  int v11; // esi
  char v12; // bl
  int *v13; // edi
  char v14; // bl
  volatile LONG *v15; // esi
  void (__thiscall ***v16)(_DWORD, int); // ebp
  int v17[5]; // [esp+10h] [ebp-24h] BYREF
  int v18; // [esp+24h] [ebp-10h]
  int *v19; // [esp+28h] [ebp-Ch]
  int v20; // [esp+2Ch] [ebp-8h] BYREF
  int *v21; // [esp+30h] [ebp-4h]

  v2 = this;
  v3 = *(this + 0x11) == 0;
  v4 = this + 0x10;
  v19 = this;
  v18 = 0;
  if ( v3 )
  {
    v5 = 0;
    v3 = *v4 == 0;
    v18 = 1;
    if ( v3 )
    {
      v6 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v5 = a2;
  }
  v6 = 0;
LABEL_6:
  if ( (v18 & 1) != 0 )
  {
    v18 &= ~1u;
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  if ( !v6 )
  {
    v7 = 1;
    if ( v4 )
    {
      do
      {
        v8 = (volatile LONG *)*sub_677C70(v4, &v20);
        if ( v20 )
        {
          v9 = (void (__thiscall ***)(_DWORD, int))v20;
          if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
            (**v9)(v9, 1);
        }
        if ( !v7 )
          v4 = (int *)v4[1];
        if ( !v8 || (*(unsigned __int8 (__thiscall **)(volatile LONG *, int))(*v8 + 0x50))(v8, a2) )
        {
          if ( v7 )
          {
            v4 = (int *)v4[1];
            v7 = 0;
          }
        }
        else
        {
          v17[0] = (int)v8;
          v21 = v17;
          InterlockedIncrement(v8 + 1);
          sub_67A760((Ni2DBuffer **)v19 + 0x10, v17[0]);
        }
      }
      while ( v4 );
      v2 = v19;
    }
  }
  v10 = v2 + 0x12;
  v3 = v10[1] == 0;
  v19 = v10;
  if ( v3 )
  {
    v18 |= 2u;
    v11 = 0;
    if ( !*v10 )
    {
      v12 = 1;
      goto LABEL_29;
    }
  }
  else
  {
    v11 = a2;
  }
  v12 = 0;
LABEL_29:
  if ( (v18 & 2) != 0 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    }
  }
  if ( !v12 )
  {
    v13 = v10;
    v14 = 1;
    while ( v13 )
    {
      v15 = (volatile LONG *)*sub_677C70(v13, &v20);
      if ( v20 )
      {
        v16 = (void (__thiscall ***)(_DWORD, int))v20;
        if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
          (**v16)(v16, 1);
        v10 = v19;
      }
      if ( !v14 )
        v13 = (int *)v13[1];
      if ( !v15 || (*(unsigned __int8 (__thiscall **)(volatile LONG *, int))(*v15 + 0x50))(v15, a2) )
      {
        if ( v14 )
        {
          v13 = (int *)v13[1];
          v14 = 0;
        }
      }
      else
      {
        v17[0] = (int)v15;
        v21 = v17;
        InterlockedIncrement(v15 + 1);
        sub_67A760((Ni2DBuffer **)v10, v17[0]);
      }
    }
  }
}
