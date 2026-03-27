signed int __thiscall sub_679480(int *this)
{
  int *v1; // esi
  int v2; // ebx
  int v3; // ebp
  void (__thiscall ***v4)(_DWORD, int); // edi
  int *v5; // edi
  int v6; // ebx
  int v7; // ebp
  int *v8; // esi
  char v10; // [esp+13h] [ebp-11h]
  char v11; // [esp+13h] [ebp-11h]
  int v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+18h] [ebp-Ch]
  int v14; // [esp+1Ch] [ebp-8h] BYREF
  int *v15; // [esp+20h] [ebp-4h] BYREF

  v1 = this + 0x10;
  v15 = this;
  v12 = 0;
  v13 = 2;
  if ( this != (int *)0xFFFFFFC0 )
  {
    v2 = (int)v15;
    do
    {
      if ( v1[1] || (v12 |= 1u, v2 = 0, v10 = 1, *v1) )
        v10 = 0;
      if ( (v12 & 1) != 0 )
      {
        v12 &= ~1u;
        if ( v2 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
            (**(void (__thiscall ***)(int, int))v2)(v2, 1);
        }
      }
      if ( v10 )
        break;
      v3 = *sub_677C70(v1, &v14);
      if ( v14 )
      {
        v4 = (void (__thiscall ***)(_DWORD, int))v14;
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
          (**v4)(v4, 1);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x58))(v3) )
        v13 += (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x5C))(v3) + 1;
      v1 = (int *)v1[1];
    }
    while ( v1 );
  }
  v5 = v15 + 0x12;
  if ( v15 != (int *)0xFFFFFFB8 )
  {
    v6 = (int)v15;
    do
    {
      if ( v5[1] || (v12 |= 2u, v6 = 0, v11 = 1, *v5) )
        v11 = 0;
      if ( (v12 & 2) != 0 )
      {
        v12 &= ~2u;
        if ( v6 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
            (**(void (__thiscall ***)(int, int))v6)(v6, 1);
        }
      }
      if ( v11 )
        break;
      v7 = *sub_677C70(v5, (int *)&v15);
      if ( v15 )
      {
        v8 = v15;
        if ( !InterlockedDecrement(v15 + 1) )
          (*(void (__thiscall **)(int *, int))*v8)(v8, 1);
      }
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 0x58))(v7) )
        v13 += (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x5C))(v7) + 1;
      v5 = (int *)v5[1];
    }
    while ( v5 );
  }
  return v13;
}
