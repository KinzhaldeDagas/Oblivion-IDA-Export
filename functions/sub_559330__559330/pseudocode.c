char __thiscall sub_559330(_DWORD *this, char *a2, char *ArgList, void *a4, char a5)
{
  bool v6; // zf
  volatile LONG *v7; // eax
  _DWORD *v8; // eax
  volatile LONG *v9; // eax
  Ni2DBuffer *v10; // edi
  Ni2DBuffer **v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // ebp
  int v16; // eax
  int v17; // ecx
  Ni2DBuffer *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  char *v22; // ebx
  _DWORD *v23; // eax
  unsigned __int16 v24; // bp
  bool v25; // bl
  void *v27; // eax
  BSFaceGenMorphDataHair *v28; // eax
  Ni2DBuffer **v29; // ecx
  void *v30; // eax
  BSFaceGenMorphDataHead *v31; // eax
  Ni2DBuffer **v32; // ecx
  int v33; // ebx
  unsigned int v34; // ebp
  unsigned int v35; // ebp
  int v36; // ebx
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  double v40; // st7
  int v41; // eax
  float v42; // edx
  float *v43; // eax
  float v44; // ecx
  int v45; // esi
  int v46; // eax
  int v47; // eax
  int v48; // [esp+14h] [ebp-4D0h] BYREF
  void *Src; // [esp+18h] [ebp-4CCh]
  float v50; // [esp+1Ch] [ebp-4C8h] BYREF
  float v51; // [esp+20h] [ebp-4C4h]
  float v52; // [esp+24h] [ebp-4C0h]
  unsigned int v53[7]; // [esp+28h] [ebp-4BCh] BYREF
  _DWORD v54[292]; // [esp+44h] [ebp-4A0h] BYREF
  int v55; // [esp+4E0h] [ebp-4h]

  v48 = 0;
  v6 = *(this + 2) == 0;
  Src = a4;
  if ( v6 && a2 )
  {
    v7 = (volatile LONG *)FormHeapAlloc(0x24u);
    v48 = (int)v7;
    v55 = 0;
    if ( v7 )
      v8 = sub_556900(v7);
    else
      v8 = 0;
    *(this + 2) = v8;
    v9 = (volatile LONG *)FormHeapAlloc(0x10u);
    v10 = (Ni2DBuffer *)v9;
    v48 = (int)v9;
    v55 = 1;
    if ( v9 )
    {
      sub_721350(v9);
      v10->__vftable = (#9279 *)&BSFaceGenModelExtraData::`vftable';
      v10->members.height = (UInt32)this;
    }
    else
    {
      v10 = 0;
    }
    v11 = (Ni2DBuffer **)(*(this + 2) + 0x20);
    v55 = 0xFFFFFFFF;
    NiSmartPointer_Set__(v11, v10);
    v12 = 0;
    BSStringT_Set((BSStringT *)*(this + 2), a2, 0);
    if ( ArgList )
    {
      v50 = 0.0;
      v51 = 0.0;
      v55 = 2;
      NiStream::NiStream((NiStream *)v54);
      v54[0] = &BSStream::`vftable';
      v54[0x123] = 0;
      v54[0x122] = 0;
      LOBYTE(v55) = 3;
      if ( !sub_6F9980((char *)v54, ArgList, 0) )
      {
        PrintError("Failed to load '%s' in BSFaceGenModel::LoadModelMesh.", ArgList);
        LOBYTE(v55) = 2;
        BSStream::~BSStream((BSStream *)v54);
        FormHeapFree(0);
        return 0;
      }
      if ( v54[0x84] != 1 )
      {
        PrintError("Bad object count in '%s' in BSFaceGenModel::LoadModelMesh.", ArgList);
        LOBYTE(v55) = 2;
        BSStream::~BSStream((BSStream *)v54);
        v55 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v50);
        return 0;
      }
      NiSmartPointer_Set__((Ni2DBuffer **)(*(this + 2) + 0xC), *(Ni2DBuffer **)v54[0x82]);
      v13 = *(this + 2);
      v14 = *(_DWORD *)(v13 + 0xC);
      if ( v14 )
      {
        v15 = *(unsigned __int16 *)(v14 + 0xB6);
        if ( *(_WORD *)(v14 + 0xB6) )
        {
          do
          {
            v16 = *(_DWORD *)(v13 + 0xC);
            if ( *(unsigned __int16 *)(v16 + 0xB6) > v12 && (v17 = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v12)) != 0 )
              v18 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x10))(v17);
            else
              v18 = 0;
            NiSmartPointer_Set__((Ni2DBuffer **)(*(this + 2) + 0x10), v18);
            v13 = *(this + 2);
            if ( *(_DWORD *)(v13 + 0x10) )
              break;
            ++v12;
          }
          while ( v12 < v15 );
        }
        v19 = *(this + 2);
        if ( *(_DWORD *)(v19 + 0x10) )
        {
          sub_708560(*(_DWORD **)(v19 + 0x10), (volatile LONG **)&v48, 6);
          sub_7016A0((NiD3DVertexShader *)&v48);
          sub_6FFFD0(*(_DWORD **)(*(this + 2) + 0x10));
          sub_6FFC60(*(_DWORD **)(*(this + 2) + 0x10));
          v20 = *(this + 2);
          v21 = *(_DWORD *)(v20 + 0x10);
          if ( *(_DWORD *)(v21 + 0xB8) )
            *(_DWORD *)(*(_DWORD *)(v21 + 0xB8) + 0x10) = *(_DWORD *)(v20 + 0x10);
          *(_WORD *)(*(_DWORD *)(*(this + 2) + 0x10) + 0x18) |= 2u;
        }
      }
      LOBYTE(v55) = 2;
      BSStream::~BSStream((BSStream *)v54);
      v12 = 0;
      v55 = 0xFFFFFFFF;
      FormHeapFree(0);
    }
    v22 = (char *)Src;
    if ( Src )
    {
      v23 = (_DWORD *)FormHeapAlloc(0xA0u);
      Src = v23;
      v55 = 4;
      if ( v23 )
        v12 = (unsigned int)sub_5586C0(v23);
      v55 = 0xFFFFFFFF;
      sub_414750((int)v53, v22);
      v55 = 5;
      v48 = 1;
      v25 = 0;
      if ( sub_6F4B50(v53, v12) )
      {
        v24 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(this + 2) + 0x10) + 0xB4) + 8);
        if ( v24 == sub_556800((_DWORD *)v12) )
          v25 = 1;
      }
      v55 = 0xFFFFFFFF;
      sub_79AB00(v53);
      if ( v25 )
      {
        if ( a5 )
        {
          v27 = (void *)FormHeapAlloc(0xCu);
          Src = v27;
          v55 = 6;
          if ( v27 )
            v28 = BSFaceGenMorphDataHair::BSFaceGenMorphDataHair((BSFaceGenMorphDataHair *)v27, v12);
          else
            v28 = 0;
          v29 = (Ni2DBuffer **)(*(this + 2) + 0x1C);
          v55 = 0xFFFFFFFF;
          NiSmartPointer_Set__(v29, (Ni2DBuffer *)v28);
        }
        else
        {
          v30 = (void *)FormHeapAlloc(0x18u);
          Src = v30;
          v55 = 7;
          if ( v30 )
            v31 = BSFaceGenMorphDataHead::BSFaceGenMorphDataHead((BSFaceGenMorphDataHead *)v30, (_DWORD *)v12);
          else
            v31 = 0;
          v32 = (Ni2DBuffer **)(*(this + 2) + 0x1C);
          v55 = 0xFFFFFFFF;
          NiSmartPointer_Set__(v32, (Ni2DBuffer *)v31);
          v33 = *(this + 2);
          v34 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v33 + 0x10) + 0xB4) + 8);
          if ( sub_6F1080((_DWORD *)v12) > v34 )
          {
            *(_DWORD *)(v33 + 0x18) = sub_6F1080((_DWORD *)v12) - v34;
            *(_DWORD *)(*(this + 2) + 0x14) = FormHeapAlloc(
                                                (0xC * (unsigned __int64)*(unsigned int *)(*(this + 2) + 0x18)) >> 0x20 != 0
                                              ? 0xFFFFFFFF
                                              : 0xC * *(_DWORD *)(*(this + 2) + 0x18));
            v35 = 0;
            if ( *(_DWORD *)(*(this + 2) + 0x18) )
            {
              v36 = 0;
              do
              {
                v37 = sub_556800((_DWORD *)v12);
                v50 = *(float *)sub_6F10A0((_DWORD *)v12, v35 + v37);
                v38 = sub_556800((_DWORD *)v12);
                v51 = *(float *)(sub_6F10A0((_DWORD *)v12, v35 + v38) + 4);
                v39 = sub_556800((_DWORD *)v12);
                v40 = *(float *)(sub_6F10A0((_DWORD *)v12, v35 + v39) + 8);
                v41 = *(this + 2);
                v52 = v40;
                v42 = v51;
                v43 = (float *)(v36 + *(_DWORD *)(v41 + 0x14));
                *v43 = v50;
                v44 = v52;
                v43[1] = v42;
                v43[2] = v44;
                ++v35;
                v36 += 0xC;
              }
              while ( v35 < *(_DWORD *)(*(this + 2) + 0x18) );
            }
          }
        }
      }
      if ( v12 )
      {
        sub_557CF0((_DWORD *)v12);
        FormHeapFree(v12);
      }
    }
    v45 = *(this + 2);
    if ( v45 )
    {
      v46 = *(_DWORD *)(v45 + 0x10);
      if ( v46 )
      {
        v47 = *(_DWORD *)(v46 + 0xB4);
        if ( *(_DWORD *)(v45 + 0x1C) )
          *(_WORD *)(v47 + 0x2E) = *(_WORD *)(v47 + 0x2E) & 0xFFF | 0x8000;
        else
          *(_WORD *)(v47 + 0x2E) &= 0xFFFu;
      }
    }
  }
  return 1;
}
