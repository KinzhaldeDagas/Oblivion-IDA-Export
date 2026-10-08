void __cdecl sub_6D3BD0(int a1)
{
  Ni2DBuffer *v1; // ebp
  _DWORD *p_vtbl; // ebx
  NiLookAtInterpolator *v3; // edi
  int v4; // eax
  NiRTTI *v5; // eax
  NiTimeController *v6; // eax
  NiTimeController *v7; // eax
  NiLookAtInterpolator *v8; // eax
  int v9; // eax
  int v10; // eax
  volatile LONG *v11; // esi
  NiRTTI *v12; // eax
  int v13; // eax
  float *v14; // eax
  float *v15; // ebp
  int v16; // eax
  int v17; // eax
  NiObject *v18; // eax
  Ni2DBuffer **v19; // ebp
  int v20; // eax
  Ni2DBuffer **v21; // edi
  char v22; // [esp+17h] [ebp-21h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  Ni2DBuffer **v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h] BYREF
  int v26[2]; // [esp+24h] [ebp-14h] BYREF
  int v27; // [esp+34h] [ebp-4h]

  v1 = (Ni2DBuffer *)a1; /*0x6d3bf7*/
  v24 = *(Ni2DBuffer ***)(a1 + 0x30); /*0x6d3c03*/
  v22 = 0; /*0x6d3c07*/
  p_vtbl = sub_700010(v24, (int)unk_B3CA58); /*0x6d3c11*/
  v3 = 0; /*0x6d3c13*/
  if ( p_vtbl /*0x6d3c35*/
    && (v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*p_vtbl + 0x80))(p_vtbl, 0)) != 0
    && (v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4)) != 0 )
  {
    while ( v5 != &stru_B3D91C ) /*0x6d3c3c*/
    {
      v5 = v5->parent; /*0x6d3c3e*/
      if ( !v5 ) /*0x6d3c43*/
        goto LABEL_6; /*0x6d3c43*/
    }
  }
  else
  {
LABEL_6:
    v22 = 1; /*0x6d3c45*/
    v6 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x6d3c4c*/
    v26[0] = (int)v6; /*0x6d3c54*/
    v27 = 0; /*0x6d3c5a*/
    if ( v6 ) /*0x6d3c5e*/
      v7 = sub_6C3E50(v6); /*0x6d3c62*/
    else
      v7 = 0; /*0x6d3c69*/
    v27 = 0xFFFFFFFF; /*0x6d3c6d*/
    p_vtbl = &v7->vtbl; /*0x6d3c75*/
    sub_6D3B40(a1, (int)v7); /*0x6d3c77*/
  }
  v8 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u); /*0x6d3c81*/
  v26[0] = (int)v8; /*0x6d3c89*/
  v27 = 1; /*0x6d3c94*/
  if ( v8 ) /*0x6d3c98*/
    v3 = NiLookAtInterpolator::NiLookAtInterpolator(v8, 0, 0, 0); /*0x6d3ca4*/
  v9 = *(_DWORD *)(a1 + 0x40); /*0x6d3ca6*/
  v27 = 0xFFFFFFFF; /*0x6d3cad*/
  *((_DWORD *)v3 + 4) = v9; /*0x6d3cb5*/
  sub_6DF010((unsigned int *)v3, 0); /*0x6d3cb8*/
  if ( (*(_BYTE *)(a1 + 0x3C) & 1) != 0 ) /*0x6d3cc3*/
    *((_WORD *)v3 + 6) |= 1u; /*0x6d3cc5*/
  else
    *((_WORD *)v3 + 6) &= ~1u; /*0x6d3ccb*/
  *((_WORD *)v3 + 6) = (2 * ((*(_BYTE *)(a1 + 0x3C) >> 1) & 3)) | *((_WORD *)v3 + 6) & 0xFFF9; /*0x6d3ce8*/
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*p_vtbl + 0x80))(p_vtbl, 0); /*0x6d3cf8*/
  v11 = (volatile LONG *)v10; /*0x6d3cfa*/
  v26[1] = v10; /*0x6d3cfe*/
  if ( v10 ) /*0x6d3d02*/
    InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x6d3d08*/
  v27 = 2; /*0x6d3d10*/
  if ( v11 ) /*0x6d3d18*/
  {
    v12 = (NiRTTI *)(*(int (__thiscall **)(volatile LONG *))(*v11 + 4))(v11); /*0x6d3d25*/
    if ( v12 ) /*0x6d3d29*/
    {
      while ( v12 != &stru_B3D91C ) /*0x6d3d35*/
      {
        v12 = v12->parent; /*0x6d3d37*/
        if ( !v12 ) /*0x6d3d3c*/
          goto LABEL_34; /*0x6d3d3c*/
      }
      v13 = *((_DWORD *)v11 + 0xB); /*0x6d3d43*/
      if ( v13 ) /*0x6d3d48*/
      {
        if ( *(_WORD *)(v13 + 0xA) ) /*0x6d3d4a*/
        {
          v14 = (float *)FormHeapAlloc(0x20u); /*0x6d3d54*/
          v26[0] = (int)v14; /*0x6d3d5c*/
          LOBYTE(v27) = 3; /*0x6d3d62*/
          if ( v14 ) /*0x6d3d67*/
            v15 = sub_6DA160(v14, 0); /*0x6d3d72*/
          else
            v15 = 0; /*0x6d3d76*/
          LOBYTE(v27) = 2; /*0x6d3d89*/
          v16 = sub_6D3AA0(v11, v26, &v25, &v23); /*0x6d3d8e*/
          NiPosData::NiPosData((NiPosData *)v15, v16, v26[0], v25); /*0x6d3da0*/
          sub_6E1A80(*((_DWORD *)v11 + 0xB), 0, 0, 0); /*0x6d3dae*/
          sub_6D38F0((Ni2DBuffer **)v3, (Ni2DBuffer *)v15); /*0x6d3db6*/
          v1 = (Ni2DBuffer *)a1; /*0x6d3dbb*/
        }
      }
      v17 = *((_DWORD *)v11 + 0xB); /*0x6d3dbf*/
      if ( v17 ) /*0x6d3dc4*/
      {
        if ( *(_WORD *)(v17 + 0xC) ) /*0x6d3dc6*/
        {
          v18 = (NiObject *)FormHeapAlloc(0x18u); /*0x6d3dd0*/
          v26[0] = (int)v18; /*0x6d3dd8*/
          LOBYTE(v27) = 4; /*0x6d3dde*/
          if ( v18 ) /*0x6d3de3*/
            v19 = (Ni2DBuffer **)sub_6D2990(v18, 0); /*0x6d3dee*/
          else
            v19 = 0; /*0x6d3df2*/
          LOBYTE(v27) = 2; /*0x6d3e05*/
          v20 = sub_6D3AF0(v11, &v25, v26, &v23); /*0x6d3e0a*/
          sub_6D3830(v19, v20, v25, v26[0]); /*0x6d3e1c*/
          sub_6E1AC0(*((_DWORD *)v11 + 0xB), 0, 0, 0); /*0x6d3e2a*/
          sub_6D3990((Ni2DBuffer **)v3, (Ni2DBuffer *)v19); /*0x6d3e32*/
          v1 = (Ni2DBuffer *)a1; /*0x6d3e37*/
        }
      }
    }
  }
LABEL_34:
  (*(void (__thiscall **)(_DWORD *, NiLookAtInterpolator *, _DWORD))(*p_vtbl + 0x84))(p_vtbl, v3, 0); /*0x6d3e3b*/
  (*(void (__thiscall **)(NiLookAtInterpolator *))(*(_DWORD *)v3 + 0x7C))(v3); /*0x6d3e51*/
  v21 = v24; /*0x6d3e58*/
  if ( v22 ) /*0x6d3e5c*/
    (*(void (__thiscall **)(_DWORD *, Ni2DBuffer **))(*p_vtbl + 0x58))(p_vtbl, v24); /*0x6d3e66*/
  if ( v21 ) /*0x6d3e6a*/
    NiObjectNET_RemoveController(v21, v1); /*0x6d3e6f*/
  v27 = 0xFFFFFFFF; /*0x6d3e76*/
  if ( v11 ) /*0x6d3e7e*/
  {
    if ( !InterlockedDecrement(v11 + 1) ) /*0x6d3e84*/
      (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1); /*0x6d3e96*/
  }
}
