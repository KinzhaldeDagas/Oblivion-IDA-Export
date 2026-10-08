int __thiscall sub_9A4370(void *this, int a2, int a3, NiObjectNET *a4, int a5, int a6, int a7, int a8, int a9, int a10)
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

  v11 = *(_DWORD *)(a3 + 0x18); /*0x9a437d*/
  LOBYTE(v21) = (v11 & 0x2000000) != 0; /*0x9a4388*/
  v26 = v11 & 0xF0000000; /*0x9a43a3*/
  LOBYTE(v22) = HIBYTE(v11) & 1; /*0x9a43a9*/
  v12 = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)this + 0x3C))(this, v11 & 0xFFF); /*0x9a43b5*/
  v13 = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)this + 0x3C))(this, (v11 >> 0xC) & 0xFFF); /*0x9a43c8*/
  v14 = v13; /*0x9a43cc*/
  v25 = v13; /*0x9a43ce*/
  if ( v12 && v13 ) /*0x9a43da*/
  {
    v15 = *(_DWORD *)(v12 + 0x14); /*0x9a43e7*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a43ea*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a43ec*/
    v16 = g_D3DXParameterClassDispatch[(unsigned __int8)v15]; /*0x9a43fe*/
    v17 = *(_DWORD *)(v14 + 0x14); /*0x9a4405*/
    v23 = v16; /*0x9a4408*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a440c*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a440e*/
    v18 = *(_DWORD *)(v12 + 0x14) & 0xF0000000; /*0x9a442b*/
    v24 = g_D3DXParameterClassDispatch[(unsigned __int8)v17]; /*0x9a4435*/
    switch ( v18 ) /*0x9a4439*/
    {
      case 0x20000000u: /*0x9a4439*/
        v23 = sub_9A2690(*(char **)(v12 + 0xC)); /*0x9a4456*/
        sub_9A3A60(0, v12, a4, a5, a6, a7, a8, a9); /*0x9a4466*/
        break;
      case 0x40000000u: /*0x9a4439*/
        sub_9A3D20(0, (_DWORD *)v12, a10); /*0x9a447e*/
        break;
      case 0x30000000u: /*0x9a4439*/
      case 0x10000000u: /*0x9a4439*/
        sub_9A4010(0, v12, a4, a5, a6, a8, a9, a10); /*0x9a44c6*/
        break;
    }
    v19 = *(_DWORD *)(v25 + 0x14) & 0xF0000000; /*0x9a44d2*/
    switch ( v19 ) /*0x9a44dc*/
    {
      case 0x20000000u: /*0x9a44dc*/
        v24 = sub_9A2690(*(char **)(v25 + 0xC)); /*0x9a44f4*/
        sub_9A3A60(1, v25, a4, a5, a6, a7, a8, a9); /*0x9a4509*/
        break;
      case 0x30000000u: /*0x9a44dc*/
        sub_9A4010(1, v25, a4, a5, a6, a8, a9, a10); /*0x9a4532*/
        break;
      case 0x40000000u: /*0x9a44dc*/
      case 0x10000000u: /*0x9a44dc*/
        sub_9A3D20(1, (_DWORD *)v25, a10); /*0x9a4558*/
        break;
    }
    if ( v23 && v24 ) /*0x9a456f*/
    {
      if ( v26 > 0x30000000 ) /*0x9a457e*/
      {
        if ( v26 == 0x40000000 ) /*0x9a4612*/
          return sub_9A3080(a2, a3, v23, v24, v22, v21); /*0x9a4638*/
      }
      else
      {
        switch ( v26 ) /*0x9a4584*/
        {
          case 0x30000000u: /*0x9a4584*/
            return sub_9A2E50(a2, a3, v23, v24, v22, v21); /*0x9a460a*/
          case 0x10000000u: /*0x9a4584*/
            return sub_9A28A0(a2, a3, v23, v24, v22, v21); /*0x9a45e3*/
          case 0x20000000u: /*0x9a4584*/
            return sub_9A2BD0(a2, a3, v23, v24, *(float *)&v22, v21); /*0x9a45bc*/
        }
      }
    }
    else
    {
      sub_738460(1, 0, "Invalid operands in OperatorConstant\n"); /*0x9a4640*/
    }
  }
  else
  {
    sub_738460(1, 0, "Invalid entries in OperatorConstant\n"); /*0x9a464b*/
  }
  return 1; /*0x9a45b5*/
}
