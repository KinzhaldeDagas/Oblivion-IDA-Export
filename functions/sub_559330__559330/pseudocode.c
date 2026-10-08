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
  OB_stString28_010201A0 v53; // [esp+28h] [ebp-4BCh] BYREF
  _DWORD v54[292]; // [esp+44h] [ebp-4A0h] BYREF
  int v55; // [esp+4E0h] [ebp-4h]

  v48 = 0; /*0x559384*/
  v6 = *(this + 2) == 0; /*0x559388*/
  Src = a4; /*0x55938b*/
  if ( v6 && a2 )
  {
    v7 = (volatile LONG *)FormHeapAlloc(0x24u); /*0x55939f*/
    v48 = (int)v7; /*0x5593a7*/
    v55 = 0; /*0x5593ad*/
    if ( v7 ) /*0x5593b4*/
      v8 = sub_556900(v7); /*0x5593b8*/
    else
      v8 = 0; /*0x5593bf*/
    *(this + 2) = v8; /*0x5593ce*/
    v9 = (volatile LONG *)FormHeapAlloc(0x10u); /*0x5593d1*/
    v10 = (Ni2DBuffer *)v9; /*0x5593d6*/
    v48 = (int)v9; /*0x5593db*/
    v55 = 1; /*0x5593e1*/
    if ( v9 ) /*0x5593ec*/
    {
      sub_721350((NiObject *)v9); /*0x5593f0*/
      v10->__vftable = (#9279 *)&BSFaceGenModelExtraData::`vftable'; /*0x5593f5*/
      v10->members.height = (UInt32)this; /*0x5593fb*/
    }
    else
    {
      v10 = 0; /*0x559400*/
    }
    v11 = (Ni2DBuffer **)(*(this + 2) + 0x20); /*0x559406*/
    v55 = 0xFFFFFFFF; /*0x559409*/
    NiSmartPointer_Set__(v11, v10); /*0x559414*/
    v12 = 0; /*0x55941c*/
    BSStringT_Set((BSStringT *)*(this + 2), a2, 0); /*0x559420*/
    if ( ArgList ) /*0x559427*/
    {
      v50 = 0.0; /*0x55942d*/
      v51 = 0.0; /*0x559431*/
      v55 = 2; /*0x559444*/
      NiStream::NiStream((NiStream *)v54); /*0x55944b*/
      v54[0] = &BSStream::`vftable'; /*0x559450*/
      v54[0x123] = 0; /*0x559458*/
      v54[0x122] = 0; /*0x55945f*/
      LOBYTE(v55) = 3; /*0x55946c*/
      if ( !sub_6F9980((char *)v54, ArgList, 0) ) /*0x55947b*/
      {
        PrintError("Failed to load '%s' in BSFaceGenModel::LoadModelMesh.", ArgList); /*0x559654*/
        LOBYTE(v55) = 2; /*0x559660*/
        BSStream::~BSStream((BSStream *)v54); /*0x559667*/
        FormHeapFree(0); /*0x55966d*/
        return 0; /*0x559677*/
      }
      if ( v54[0x84] != 1 ) /*0x559489*/
      {
        PrintError("Bad object count in '%s' in BSFaceGenModel::LoadModelMesh.", ArgList); /*0x55961b*/
        LOBYTE(v55) = 2; /*0x559627*/
        BSStream::~BSStream((BSStream *)v54); /*0x55962e*/
        v55 = 0xFFFFFFFF; /*0x559637*/
        BSStringT_Clear((unsigned int *)&v50); /*0x559642*/
        return 0; /*0x559649*/
      }
      NiSmartPointer_Set__((Ni2DBuffer **)(*(this + 2) + 0xC), *(Ni2DBuffer **)v54[0x82]); /*0x55949f*/
      v13 = *(this + 2); /*0x5594a4*/
      v14 = *(_DWORD *)(v13 + 0xC); /*0x5594a7*/
      if ( v14 ) /*0x5594ac*/
      {
        v15 = *(unsigned __int16 *)(v14 + 0xB6); /*0x5594b2*/
        if ( *(_WORD *)(v14 + 0xB6) ) /*0x5594b2*/
        {
          do /*0x5594fd*/
          {
            v16 = *(_DWORD *)(v13 + 0xC); /*0x5594bd*/
            if ( *(unsigned __int16 *)(v16 + 0xB6) > v12 && (v17 = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v12)) != 0 ) /*0x5594d6*/
              v18 = (Ni2DBuffer *)(*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x10))(v17); /*0x5594dd*/
            else
              v18 = 0; /*0x5594e1*/
            NiSmartPointer_Set__((Ni2DBuffer **)(*(this + 2) + 0x10), v18); /*0x5594ea*/
            v13 = *(this + 2); /*0x5594ef*/
            if ( *(_DWORD *)(v13 + 0x10) ) /*0x5594f2*/
              break; /*0x5594f6*/
            ++v12; /*0x5594f8*/
          }
          while ( v12 < v15 ); /*0x5594fd*/
        }
        v19 = *(this + 2); /*0x5594ff*/
        if ( *(_DWORD *)(v19 + 0x10) ) /*0x559502*/
        {
          sub_708560(*(int ****)(v19 + 0x10), (volatile LONG **)&v48, 6); /*0x559512*/
          NiPointerSlot_Release((NiD3DVertexShader *)&v48); /*0x55951b*/
          sub_6FFFD0(*(_DWORD **)(*(this + 2) + 0x10)); /*0x559526*/
          sub_6FFC60(*(_DWORD **)(*(this + 2) + 0x10)); /*0x559531*/
          v20 = *(this + 2); /*0x559536*/
          v21 = *(_DWORD *)(v20 + 0x10); /*0x559539*/
          if ( *(_DWORD *)(v21 + 0xB8) ) /*0x55953c*/
            *(_DWORD *)(*(_DWORD *)(v21 + 0xB8) + 0x10) = *(_DWORD *)(v20 + 0x10); /*0x55954d*/
          *(_WORD *)(*(_DWORD *)(*(this + 2) + 0x10) + 0x18) |= 2u; /*0x559556*/
        }
      }
      LOBYTE(v55) = 2; /*0x55955e*/
      BSStream::~BSStream((BSStream *)v54); /*0x559565*/
      v12 = 0; /*0x55956a*/
      v55 = 0xFFFFFFFF; /*0x55956d*/
      FormHeapFree(0); /*0x559578*/
    }
    v22 = (char *)Src; /*0x559580*/
    if ( Src )
    {
      v23 = (_DWORD *)FormHeapAlloc(0xA0u); /*0x559591*/
      Src = v23; /*0x559599*/
      v55 = 4; /*0x55959f*/
      if ( v23 ) /*0x5595aa*/
        v12 = (unsigned int)sub_5586C0(v23); /*0x5595b3*/
      v55 = 0xFFFFFFFF; /*0x5595ba*/
      sub_414750((int)&v53, v22); /*0x5595c5*/
      v55 = 5; /*0x5595d0*/
      v48 = 1; /*0x5595db*/
      v25 = 0; /*0x559611*/
      if ( sub_6F4B50(&v53, v12) ) /*0x5595e3*/
      {
        v24 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(this + 2) + 0x10) + 0xB4) + 8); /*0x5595ff*/
        if ( v24 == sub_556800((_DWORD *)v12) ) /*0x55960f*/
          v25 = 1; /*0x5595ed*/
      }
      v55 = 0xFFFFFFFF; /*0x559685*/
      OB_stString28_Dtor_010201A0(&v53); /*0x55968c*/
      if ( v25 )
      {
        if ( a5 )
        {
          v27 = (void *)FormHeapAlloc(0xCu); /*0x5596a5*/
          Src = v27; /*0x5596ad*/
          v55 = 6; /*0x5596b3*/
          if ( v27 ) /*0x5596be*/
            v28 = BSFaceGenMorphDataHair::BSFaceGenMorphDataHair((BSFaceGenMorphDataHair *)v27, v12); /*0x5596c3*/
          else
            v28 = 0; /*0x5596ca*/
          v29 = (Ni2DBuffer **)(*(this + 2) + 0x1C); /*0x5596d0*/
          v55 = 0xFFFFFFFF; /*0x5596d3*/
          NiSmartPointer_Set__(v29, (Ni2DBuffer *)v28); /*0x5596da*/
        }
        else
        {
          v30 = (void *)FormHeapAlloc(0x18u); /*0x5596e6*/
          Src = v30; /*0x5596ee*/
          v55 = 7; /*0x5596f4*/
          if ( v30 ) /*0x5596ff*/
            v31 = BSFaceGenMorphDataHead::BSFaceGenMorphDataHead((BSFaceGenMorphDataHead *)v30, (_DWORD *)v12); /*0x559704*/
          else
            v31 = 0; /*0x55970b*/
          v32 = (Ni2DBuffer **)(*(this + 2) + 0x1C); /*0x559711*/
          v55 = 0xFFFFFFFF; /*0x559714*/
          NiSmartPointer_Set__(v32, (Ni2DBuffer *)v31); /*0x55971b*/
          v33 = *(this + 2); /*0x559720*/
          v34 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v33 + 0x10) + 0xB4) + 8); /*0x55972c*/
          if ( sub_6F1080((_DWORD *)v12) > v34 )
          {
            *(_DWORD *)(v33 + 0x18) = sub_6F1080((_DWORD *)v12) - v34; /*0x559748*/
            *(_DWORD *)(*(this + 2) + 0x14) = FormHeapAlloc(
                                                (0xC * (unsigned __int64)*(unsigned int *)(*(this + 2) + 0x18)) >> 0x20 != 0
                                              ? 0xFFFFFFFF
                                              : 0xC * *(_DWORD *)(*(this + 2) + 0x18));
            v35 = 0; /*0x559770*/
            if ( *(_DWORD *)(*(this + 2) + 0x18) ) /*0x559775*/
            {
              v36 = 0; /*0x55977a*/
              do /*0x5597ef*/
              {
                v37 = sub_556800((_DWORD *)v12); /*0x559782*/
                v50 = *(float *)sub_6F10A0((_DWORD *)v12, v35 + v37); /*0x559795*/
                v38 = sub_556800((_DWORD *)v12); /*0x559799*/
                v51 = *(float *)(sub_6F10A0((_DWORD *)v12, v35 + v38) + 4); /*0x5597ad*/
                v39 = sub_556800((_DWORD *)v12); /*0x5597b1*/
                v40 = *(float *)(sub_6F10A0((_DWORD *)v12, v35 + v39) + 8); /*0x5597c0*/
                v41 = *(this + 2); /*0x5597c3*/
                v52 = v40; /*0x5597c6*/
                v42 = v51; /*0x5597d1*/
                v43 = (float *)(v36 + *(_DWORD *)(v41 + 0x14)); /*0x5597d5*/
                *v43 = v50; /*0x5597d7*/
                v44 = v52; /*0x5597d9*/
                v43[1] = v42; /*0x5597dd*/
                v43[2] = v44; /*0x5597e0*/
                ++v35; /*0x5597e6*/
                v36 += 0xC; /*0x5597e9*/
              }
              while ( v35 < *(_DWORD *)(*(this + 2) + 0x18) ); /*0x5597ef*/
            }
          }
        }
      }
      if ( v12 ) /*0x5597f3*/
      {
        sub_557CF0((_DWORD *)v12); /*0x5597f7*/
        FormHeapFree(v12); /*0x5597fd*/
      }
    }
    v45 = *(this + 2); /*0x559805*/
    if ( v45 ) /*0x55980a*/
    {
      v46 = *(_DWORD *)(v45 + 0x10); /*0x55980c*/
      if ( v46 ) /*0x559811*/
      {
        v47 = *(_DWORD *)(v46 + 0xB4); /*0x559817*/
        if ( *(_DWORD *)(v45 + 0x1C) ) /*0x559813*/
          *(_WORD *)(v47 + 0x2E) = *(_WORD *)(v47 + 0x2E) & 0xFFF | 0x8000; /*0x55982d*/
        else
          *(_WORD *)(v47 + 0x2E) &= 0xFFFu; /*0x559833*/
      }
    }
  }
  return 1; /*0x55983b*/
}
