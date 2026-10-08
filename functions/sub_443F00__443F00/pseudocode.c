void __thiscall sub_443F00(Ni2DBuffer ***this, Ni2DBuffer *a2)
{
  NiObject *v2; // ebx
  int v3; // esi
  Ni2DBuffer ***v4; // eax
  Ni2DBuffer ***v5; // ecx
  Ni2DBuffer **v6; // eax
  _DWORD *v7; // eax
  Ni2DBuffer **v8; // edi
  int v9; // eax
  int v10; // ebp
  NiObject *v11; // eax
  Ni2DBuffer *v12; // esi
  NiObject *v13; // edi
  NiObject **v14; // esi
  NiObject *v15; // ebx
  int v16; // [esp+14h] [ebp-18h]
  Ni2DBuffer ***v17; // [esp+18h] [ebp-14h]

  v2 = (NiObject *)a2; /*0x443f27*/
  v3 = 0; /*0x443f2b*/
  if ( a2 ) /*0x443f2f*/
  {
    v4 = this + 0x28; /*0x443f35*/
    v17 = this + 0x28; /*0x443f3d*/
    if ( this != (Ni2DBuffer ***)0xFFFFFF60 ) /*0x443f41*/
    {
      do /*0x443f43*/
      {
        v5 = (Ni2DBuffer ***)v4[1]; /*0x443f43*/
        if ( !v5 && !*v4 ) /*0x443f4a*/
          break; /*0x443f4a*/
        v6 = *v4; /*0x443f4e*/
        if ( v6 && *v6 == a2 ) /*0x443f56*/
          return; /*0x443f56*/
        v4 = v5; /*0x443f5c*/
      }
      while ( v5 ); /*0x443f43*/
    }
    v7 = (_DWORD *)FormHeapAlloc(8u); /*0x443f62*/
    if ( v7 ) /*0x443f76*/
    {
      v8 = (Ni2DBuffer **)sub_4418E0(v7); /*0x443f7f*/
      v16 = (int)v8; /*0x443f81*/
    }
    else
    {
      v16 = 0; /*0x443f87*/
      v8 = 0; /*0x443f8b*/
    }
    NiSmartPointer_Set__(v8, a2); /*0x443f97*/
    v9 = FormHeapAlloc(0x18u); /*0x443f9e*/
    if ( v9 ) /*0x443fb4*/
    {
      v3 = v9 + 4; /*0x443fc2*/
      *(_DWORD *)v9 = 5; /*0x443fc8*/
      ArrayConstructor( /*0x443fce*/
        (char *)(v9 + 4),
        4u,
        5,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    v8[1] = (Ni2DBuffer *)v3; /*0x443fd7*/
    v10 = 0; /*0x443fda*/
    while ( 1 ) /*0x443fea*/
    {
      v11 = NiObject_CloneWithPointerMap(v2); /*0x443fea*/
      v12 = v8[1]; /*0x443fef*/
      v13 = *(NiObject **)((char *)&v12->__vftable + v10); /*0x443ff2*/
      v14 = (NiObject **)((char *)v12 + v10); /*0x443ff5*/
      v15 = v11; /*0x443ff7*/
      if ( v13 != v11 ) /*0x443ffb*/
      {
        if ( v13 ) /*0x443fff*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v13->members) ) /*0x444005*/
            v13->__vftable->super.Destructor((NiRefObject *)v13, 1); /*0x44401b*/
        }
        *v14 = v15; /*0x44401f*/
        if ( v15 ) /*0x444021*/
          InterlockedIncrement((volatile LONG *)&v15->members); /*0x444027*/
      }
      v10 += 4; /*0x44402d*/
      if ( v10 >= 0x14 ) /*0x444033*/
        break; /*0x444033*/
      v2 = (NiObject *)a2; /*0x443fe0*/
      v8 = (Ni2DBuffer **)v16; /*0x443fe4*/
    }
    BSSimpleList_PushBack(v17, v16); /*0x44403e*/
  }
}
