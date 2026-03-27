void __cdecl sub_6D3BD0(int a1)
{
  Ni2DBuffer *v1; // ebp
  _DWORD *p_vtbl; // ebx
  NiLookAtInterpolator *v3; // edi
  int v4; // eax
  int v5; // eax
  NiTimeController *v6; // eax
  NiTimeController *v7; // eax
  NiLookAtInterpolator *v8; // eax
  int v9; // eax
  int v10; // eax
  volatile LONG *v11; // esi
  int v12; // eax
  int v13; // eax
  float *v14; // eax
  float *v15; // ebp
  int v16; // eax
  int v17; // eax
  float *v18; // eax
  float *v19; // ebp
  int v20; // eax
  Ni2DBuffer **v21; // edi
  char v22; // [esp+17h] [ebp-21h]
  int v23; // [esp+18h] [ebp-20h] BYREF
  Ni2DBuffer **v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h] BYREF
  int v26[2]; // [esp+24h] [ebp-14h] BYREF
  int v27; // [esp+34h] [ebp-4h]

  v1 = (Ni2DBuffer *)a1;
  v24 = *(Ni2DBuffer ***)(a1 + 0x30);
  v22 = 0;
  p_vtbl = sub_700010(v24, (int)dword_B3CA58);
  v3 = 0;
  if ( p_vtbl
    && (v4 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*p_vtbl + 0x80))(p_vtbl, 0)) != 0
    && (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4)) != 0 )
  {
    while ( (char *)v5 != dword_B3D91C )
    {
      v5 = *(_DWORD *)(v5 + 4);
      if ( !v5 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    v22 = 1;
    v6 = (NiTimeController *)FormHeapAlloc(0x40u);
    v26[0] = (int)v6;
    v27 = 0;
    if ( v6 )
      v7 = sub_6C3E50(v6);
    else
      v7 = 0;
    v27 = 0xFFFFFFFF;
    p_vtbl = &v7->vtbl;
    sub_6D3B40(a1, (int)v7);
  }
  v8 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u);
  v26[0] = (int)v8;
  v27 = 1;
  if ( v8 )
    v3 = NiLookAtInterpolator::NiLookAtInterpolator(v8, 0, 0, 0);
  v9 = *(_DWORD *)(a1 + 0x40);
  v27 = 0xFFFFFFFF;
  *((_DWORD *)v3 + 4) = v9;
  sub_6DF010(v3, 0);
  if ( (*(_BYTE *)(a1 + 0x3C) & 1) != 0 )
    *((_WORD *)v3 + 6) |= 1u;
  else
    *((_WORD *)v3 + 6) &= ~1u;
  *((_WORD *)v3 + 6) = (2 * ((*(_BYTE *)(a1 + 0x3C) >> 1) & 3)) | *((_WORD *)v3 + 6) & 0xFFF9;
  v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*p_vtbl + 0x80))(p_vtbl, 0);
  v11 = (volatile LONG *)v10;
  v26[1] = v10;
  if ( v10 )
    InterlockedIncrement((volatile LONG *)(v10 + 4));
  v27 = 2;
  if ( v11 )
  {
    v12 = (*(int (__thiscall **)(volatile LONG *))(*v11 + 4))(v11);
    if ( v12 )
    {
      while ( (char *)v12 != dword_B3D91C )
      {
        v12 = *(_DWORD *)(v12 + 4);
        if ( !v12 )
          goto LABEL_34;
      }
      v13 = *((_DWORD *)v11 + 0xB);
      if ( v13 )
      {
        if ( *(_WORD *)(v13 + 0xA) )
        {
          v14 = (float *)FormHeapAlloc(0x20u);
          v26[0] = (int)v14;
          LOBYTE(v27) = 3;
          if ( v14 )
            v15 = sub_6DA160(v14, 0);
          else
            v15 = 0;
          LOBYTE(v27) = 2;
          v16 = sub_6D3AA0(v11, v26, &v25, &v23);
          NiPosData::NiPosData((NiPosData *)v15, v16, v26[0], v25);
          sub_6E1A80(*((_DWORD *)v11 + 0xB), 0, 0, 0);
          sub_6D38F0((Ni2DBuffer **)v3, (Ni2DBuffer *)v15);
          v1 = (Ni2DBuffer *)a1;
        }
      }
      v17 = *((_DWORD *)v11 + 0xB);
      if ( v17 )
      {
        if ( *(_WORD *)(v17 + 0xC) )
        {
          v18 = (float *)FormHeapAlloc(0x18u);
          v26[0] = (int)v18;
          LOBYTE(v27) = 4;
          if ( v18 )
            v19 = sub_6D2990(v18, 0);
          else
            v19 = 0;
          LOBYTE(v27) = 2;
          v20 = sub_6D3AF0(v11, &v25, v26, &v23);
          sub_6D3830((Ni2DBuffer **)v19, v20, v25, v26[0]);
          sub_6E1AC0(*((_DWORD *)v11 + 0xB), 0, 0, 0);
          sub_6D3990((Ni2DBuffer **)v3, (Ni2DBuffer *)v19);
          v1 = (Ni2DBuffer *)a1;
        }
      }
    }
  }
LABEL_34:
  (*(void (__thiscall **)(_DWORD *, NiLookAtInterpolator *, _DWORD))(*p_vtbl + 0x84))(p_vtbl, v3, 0);
  (*(void (__thiscall **)(NiLookAtInterpolator *))(*(_DWORD *)v3 + 0x7C))(v3);
  v21 = v24;
  if ( v22 )
    (*(void (__thiscall **)(_DWORD *, Ni2DBuffer **))(*p_vtbl + 0x58))(p_vtbl, v24);
  if ( v21 )
    sub_6FFE90(v21, v1);
  v27 = 0xFFFFFFFF;
  if ( v11 )
  {
    if ( !InterlockedDecrement(v11 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v11)(v11, 1);
  }
}
