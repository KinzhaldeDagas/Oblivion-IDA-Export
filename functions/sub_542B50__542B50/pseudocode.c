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

  v20 = a3; /*0x542b52*/
  v19 = a2; /*0x542b53*/
  v18 = 3; /*0x542b54*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x542b58*/
  v4 = a1[0xC]; /*0x542b5d*/
  v5 = InterlockedDecrement; /*0x542b60*/
  if ( v4 ) /*0x542b6b*/
  {
    sub_708560(*(int ****)(v4 + 0x10), &v22, 6); /*0x542b77*/
    if ( v22 ) /*0x542b82*/
    {
      v6 = v22; /*0x542b84*/
      if ( !v5(v22 + 1) ) /*0x542b8a*/
      {
        v7 = **(void (__thiscall ***)(volatile LONG *))v6; /*0x542b96*/
        v18 = 1; /*0x542b98*/
        v7(v6); /*0x542b9c*/
      }
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xC] + 0x10)); /*0x542ba4*/
    sub_708560(*(int ****)(a1[0xC] + 0x14), &v21, 6); /*0x542bb6*/
    if ( v21 ) /*0x542bc1*/
    {
      v8 = v21; /*0x542bc3*/
      if ( !v5(v21 + 1) ) /*0x542bc9*/
      {
        v9 = **(void (__thiscall ***)(volatile LONG *))v8; /*0x542bd5*/
        v17 = 1; /*0x542bd7*/
        v9(v8); /*0x542bdb*/
      }
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xC] + 0x14)); /*0x542be3*/
  }
  v10 = a1[0xD]; /*0x542be8*/
  if ( v10 ) /*0x542bed*/
  {
    sub_708560(*(int ****)(v10 + 0x10), &v20, 6); /*0x542bf9*/
    if ( v20 ) /*0x542c04*/
    {
      v11 = v20; /*0x542c06*/
      if ( !v5(v20 + 1) ) /*0x542c0c*/
        (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x542c1e*/
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xD] + 0x10)); /*0x542c26*/
    sub_708560(*(int ****)(a1[0xD] + 0x14), &v19, 6); /*0x542c38*/
    if ( v19 ) /*0x542c43*/
    {
      v12 = v19; /*0x542c45*/
      if ( !v5(v19 + 1) ) /*0x542c4b*/
        (**(void (__thiscall ***)(volatile LONG *, int))v12)(v12, 1); /*0x542c5d*/
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xD] + 0x14)); /*0x542c65*/
  }
  v13 = a1[0xA]; /*0x542c6a*/
  if ( v13 ) /*0x542c6f*/
  {
    sub_708560(*(int ****)(v13 + 8), (volatile LONG **)&v18, 6); /*0x542c7f*/
    if ( v18 ) /*0x542c8a*/
    {
      v14 = (volatile LONG *)v18; /*0x542c8c*/
      if ( !v5((volatile LONG *)(v18 + 4)) ) /*0x542c92*/
        (**(void (__thiscall ***)(volatile LONG *, int))v14)(v14, 1); /*0x542ca4*/
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xA] + 8)); /*0x542cac*/
    NiNode_GetNiPropertyByID(*(NiNode **)(a1[0xA] + 8), 4); /*0x542cb9*/
    sub_708560(*(int ****)(a1[0xA] + 0xC), (volatile LONG **)&v17, 6); /*0x542ccb*/
    if ( v17 ) /*0x542cd6*/
    {
      v15 = (volatile LONG *)v17; /*0x542cd8*/
      if ( !v5((volatile LONG *)(v17 + 4)) ) /*0x542cde*/
        (**(void (__thiscall ***)(volatile LONG *, int))v15)(v15, 1); /*0x542cf0*/
    }
    NiAVObject_InitializePropertyState(*(NiAVObject **)(a1[0xA] + 0xC)); /*0x542cf8*/
    NiNode_GetNiPropertyByID(*(NiNode **)(a1[0xA] + 0xC), 4); /*0x542d05*/
  }
  v16 = (_DWORD *)a1[9]; /*0x542d0a*/
  if ( v16 ) /*0x542d12*/
    sub_540F50(v16); /*0x542d14*/
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x542d1b*/
}
