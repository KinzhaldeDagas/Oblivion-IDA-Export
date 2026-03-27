void __usercall sub_542B50(_DWORD *a1@<ecx>, volatile LONG *a2@<edi>, volatile LONG *a3@<esi>)
{
  int v4; // eax
  LONG (__stdcall *v5)(volatile LONG *); // ebx
  volatile LONG *v6; // edi
  void (__thiscall *v7)(volatile LONG *); // eax
  volatile LONG *v8; // edi
  void (__thiscall *v9)(volatile LONG *); // eax
  int v10; // eax
  volatile LONG *v11; // edi
  volatile LONG *v12; // edi
  int v13; // eax
  volatile LONG *v14; // edi
  volatile LONG *v15; // edi
  _DWORD *v16; // ecx
  int v17; // [esp+0h] [ebp-18h] BYREF
  int v18; // [esp+4h] [ebp-14h] BYREF
  volatile LONG *v19; // [esp+8h] [ebp-10h] BYREF
  volatile LONG *v20; // [esp+Ch] [ebp-Ch] BYREF
  volatile LONG *v21; // [esp+10h] [ebp-8h] BYREF
  volatile LONG *v22; // [esp+14h] [ebp-4h] BYREF

  v20 = a3;
  v19 = a2;
  v18 = 3;
  nullsub_returnTrue_0arg();
  v4 = a1[0xC];
  v5 = InterlockedDecrement;
  if ( v4 )
  {
    sub_708560(*(_DWORD **)(v4 + 0x10), &v22, 6);
    if ( v22 )
    {
      v6 = v22;
      if ( !v5(v22 + 1) )
      {
        v7 = **(void (__thiscall ***)(volatile LONG *))v6;
        v18 = 1;
        v7(v6);
      }
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xC] + 0x10));
    sub_708560(*(_DWORD **)(a1[0xC] + 0x14), &v21, 6);
    if ( v21 )
    {
      v8 = v21;
      if ( !v5(v21 + 1) )
      {
        v9 = **(void (__thiscall ***)(volatile LONG *))v8;
        v17 = 1;
        v9(v8);
      }
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xC] + 0x14));
  }
  v10 = a1[0xD];
  if ( v10 )
  {
    sub_708560(*(_DWORD **)(v10 + 0x10), &v20, 6);
    if ( v20 )
    {
      v11 = v20;
      if ( !v5(v20 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xD] + 0x10));
    sub_708560(*(_DWORD **)(a1[0xD] + 0x14), &v19, 6);
    if ( v19 )
    {
      v12 = v19;
      if ( !v5(v19 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1);
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xD] + 0x14));
  }
  v13 = a1[0xA];
  if ( v13 )
  {
    sub_708560(*(_DWORD **)(v13 + 8), (volatile LONG **)&v18, 6);
    if ( v18 )
    {
      v14 = (volatile LONG *)v18;
      if ( !v5((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(volatile LONG *, int))v14)(v14, 1);
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xA] + 8));
    NiNode_GetNiPropertyByID(*(NiNode **)(a1[0xA] + 8), 4);
    sub_708560(*(_DWORD **)(a1[0xA] + 0xC), (volatile LONG **)&v17, 6);
    if ( v17 )
    {
      v15 = (volatile LONG *)v17;
      if ( !v5((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1);
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xA] + 0xC));
    NiNode_GetNiPropertyByID(*(NiNode **)(a1[0xA] + 0xC), 4);
  }
  v16 = (_DWORD *)a1[9];
  if ( v16 )
    sub_540F50(v16);
  nullsub_returnTrue_0arg();
}
