int __thiscall sub_9A7F90(
        _DWORD *this,
        int a2,
        int a3,
        NiObjectNET *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // eax
  int v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // eax
  int v21; // [esp+10h] [ebp-18h]
  int v22; // [esp+14h] [ebp-14h]
  int v23; // [esp+18h] [ebp-10h]
  int v24; // [esp+1Ch] [ebp-Ch]
  int v25; // [esp+20h] [ebp-8h]
  unsigned int v26; // [esp+24h] [ebp-4h]

  v11 = *(_DWORD *)(a3 + 0x18); /*0x9a7f9d*/
  LOBYTE(v21) = (v11 & 0x2000000) != 0; /*0x9a7fa8*/
  v26 = v11 & 0xF0000000; /*0x9a7fc3*/
  LOBYTE(v22) = HIBYTE(v11) & 1; /*0x9a7fc9*/
  v12 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x3C))(this, v11 & 0xFFF); /*0x9a7fd5*/
  v13 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x3C))(this, (v11 >> 0xC) & 0xFFF); /*0x9a7fe8*/
  v14 = v13; /*0x9a7fec*/
  v25 = v13; /*0x9a7fee*/
  if ( v12 && v13 ) /*0x9a7ffa*/
  {
    v15 = *(_DWORD *)(v12 + 0x14); /*0x9a8007*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a800a*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a800c*/
    v16 = g_D3DXParameterClassDispatch[(unsigned __int8)v15]; /*0x9a801e*/
    v17 = *(_DWORD *)(v14 + 0x14); /*0x9a8025*/
    v23 = v16; /*0x9a8028*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a802c*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a802e*/
    v18 = *(_DWORD *)(v12 + 0x14) & 0xF0000000; /*0x9a804b*/
    v24 = g_D3DXParameterClassDispatch[(unsigned __int8)v17]; /*0x9a8055*/
    switch ( v18 ) /*0x9a8059*/
    {
      case 0x20000000u: /*0x9a8059*/
        v23 = sub_9A4960(*(char **)(v12 + 0xC)); /*0x9a8076*/
        sub_9A73C0(this, 0, v12, a4, a5, a6, a7, a8, a9); /*0x9a8086*/
        break;
      case 0x40000000u: /*0x9a8059*/
        sub_9A3D20(0, (_DWORD *)v12, a10); /*0x9a809e*/
        break;
      case 0x30000000u: /*0x9a8059*/
      case 0x10000000u: /*0x9a8059*/
        sub_9A4010(0, v12, a4, a5, a6, a8, a9, a10); /*0x9a80e6*/
        break;
    }
    v19 = *(_DWORD *)(v25 + 0x14) & 0xF0000000; /*0x9a80f2*/
    switch ( v19 ) /*0x9a80fc*/
    {
      case 0x20000000u: /*0x9a80fc*/
        v24 = sub_9A4960(*(char **)(v25 + 0xC)); /*0x9a8114*/
        sub_9A73C0(this, 1, v25, a4, a5, a6, a7, a8, a9); /*0x9a8129*/
        break;
      case 0x30000000u: /*0x9a80fc*/
        sub_9A4010(1, v25, a4, a5, a6, a8, a9, a10); /*0x9a8152*/
        break;
      case 0x40000000u: /*0x9a80fc*/
      case 0x10000000u: /*0x9a80fc*/
        sub_9A3D20(1, (_DWORD *)v25, a10); /*0x9a8178*/
        break;
    }
    if ( v23 && v24 ) /*0x9a818f*/
    {
      if ( v26 > 0x30000000 ) /*0x9a819e*/
      {
        if ( v26 == 0x40000000 ) /*0x9a8232*/
          return sub_9A52E0(a2, a3, v23, v24, v22, v21); /*0x9a8258*/
      }
      else
      {
        switch ( v26 ) /*0x9a81a4*/
        {
          case 0x30000000u: /*0x9a81a4*/
            return sub_9A50B0(a2, a3, v23, v24, v22, v21); /*0x9a822a*/
          case 0x10000000u: /*0x9a81a4*/
            return sub_9A4B00(a2, a3, v23, v24, v22, v21); /*0x9a8203*/
          case 0x20000000u: /*0x9a81a4*/
            return sub_9A4E30(a2, a3, v23, v24, *(float *)&v22, v21); /*0x9a81dc*/
        }
      }
    }
    else
    {
      sub_738460(1, 0, "Invalid operands in OperatorConstant\n"); /*0x9a8260*/
    }
  }
  else
  {
    sub_738460(1, 0, "Invalid entries in OperatorConstant\n"); /*0x9a826b*/
  }
  return 1; /*0x9a81d5*/
}
