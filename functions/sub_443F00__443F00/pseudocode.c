void __thiscall sub_443F00(Ni2DBuffer ***this, Ni2DBuffer *a2)
{
  Ni2DBuffer *v2; // ebx
  Ni2DBuffer *v3; // esi
  Ni2DBuffer ***v4; // eax
  Ni2DBuffer ***v5; // ecx
  Ni2DBuffer **v6; // eax
  _DWORD *v7; // eax
  Ni2DBuffer **v8; // edi
  _DWORD *v9; // eax
  int v10; // ebp
  int v11; // eax
  Ni2DBuffer *v12; // esi
  int v13; // edi
  int *v14; // esi
  int v15; // ebx
  int v16; // [esp+14h] [ebp-18h]
  _DWORD *v17; // [esp+18h] [ebp-14h]

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    v4 = this + 0x28;
    v17 = this + 0x28;
    if ( this != (Ni2DBuffer ***)0xFFFFFF60 )
    {
      do
      {
        v5 = (Ni2DBuffer ***)v4[1];
        if ( !v5 && !*v4 )
          break;
        v6 = *v4;
        if ( v6 && *v6 == a2 )
          return;
        v4 = v5;
      }
      while ( v5 );
    }
    v7 = (_DWORD *)FormHeapAlloc(8u);
    if ( v7 )
    {
      v8 = (Ni2DBuffer **)sub_4418E0(v7);
      v16 = (int)v8;
    }
    else
    {
      v16 = 0;
      v8 = 0;
    }
    NiSmartPointer_Set__(v8, a2);
    v9 = (_DWORD *)FormHeapAlloc(0x18u);
    if ( v9 )
    {
      v3 = (Ni2DBuffer *)(v9 + 1);
      *v9 = 5;
      ArrayConstructor(
        v9 + 1,
        4u,
        5,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
    v8[1] = v3;
    v10 = 0;
    while ( 1 )
    {
      v11 = sub_700900(v2);
      v12 = v8[1];
      v13 = *(int *)((char *)&v12->__vftable + v10);
      v14 = (int *)((char *)v12 + v10);
      v15 = v11;
      if ( v13 != v11 )
      {
        if ( v13 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
            (**(void (__thiscall ***)(int, int))v13)(v13, 1);
        }
        *v14 = v15;
        if ( v15 )
          InterlockedIncrement((volatile LONG *)(v15 + 4));
      }
      v10 += 4;
      if ( v10 >= 0x14 )
        break;
      v2 = a2;
      v8 = (Ni2DBuffer **)v16;
    }
    BSSimpleList_PushBack(v17, v16);
  }
}
