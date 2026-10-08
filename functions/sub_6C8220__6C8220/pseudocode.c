char __thiscall sub_6C8220(_DWORD *this, Ni2DBuffer **a2, int a3)
{
  _DWORD *v3; // ebx
  volatile LONG *v4; // ebp
  __int16 v5; // di
  _WORD *v6; // esi
  int v7; // ebx
  unsigned __int16 v8; // cx
  int v9; // eax
  unsigned __int16 v11; // di
  NiTimeController *v12; // eax
  NiTimeController *v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // edi
  volatile LONG *v17; // esi
  int v18; // ecx
  int v19; // eax
  unsigned __int16 v20; // dx
  _WORD *v21; // eax
  int v22; // esi
  int v23; // edx
  unsigned __int16 v24; // ax
  int v25; // eax
  _DWORD *v26; // eax
  int v27; // esi
  Ni2DBuffer *v28; // eax
  unsigned __int16 v29; // cx
  Ni2DBuffer *v30; // ebx
  unsigned __int16 v31; // ax
  int v32; // edx
  unsigned __int16 v33; // di
  volatile LONG *v34; // esi
  int v35; // eax
  bool v36; // cf
  char v37; // [esp+19h] [ebp-1Dh]
  int v39; // [esp+1Eh] [ebp-18h]
  int v40; // [esp+26h] [ebp-10h]
  int v41; // [esp+3Ah] [ebp+4h]

  v3 = this; /*0x6c8247*/
  v37 = 0; /*0x6c8256*/
  v4 = sub_700010(a2, (int)&stru_B3CD7C); /*0x6c8260*/
  v5 = 0; /*0x6c8262*/
  if ( v4 ) /*0x6c826a*/
  {
    InterlockedIncrement(v4 + 1); /*0x6c8270*/
  }
  else
  {
    if ( !v3[3] ) /*0x6c8282*/
      return 0; /*0x6c8282*/
    v6 = (_WORD *)v3[6]; /*0x6c8289*/
    v7 = v3[3]; /*0x6c828c*/
    do /*0x6c82c3*/
    {
      v8 = v6[4]; /*0x6c8290*/
      if ( v8 != 0xFFFF ) /*0x6c8299*/
      {
        if ( v8 + *(_DWORD *)(*(_DWORD *)v6 + 8) ) /*0x6c82a3*/
        {
          v9 = v8 + *(_DWORD *)(*(_DWORD *)v6 + 8); /*0x6c82aa*/
          if ( v9 ) /*0x6c82ac*/
          {
            if ( *(_BYTE *)(v9 + 2) == 0x54 && *(_BYTE *)(v9 + 7) == 0x66 ) /*0x6c82b8*/
              ++v5; /*0x6c82ba*/
          }
        }
      }
      v6 += 8; /*0x6c82bd*/
      --v7; /*0x6c82c0*/
    }
    while ( v7 ); /*0x6c82c3*/
    if ( !v5 ) /*0x6c82c8*/
      return 0; /*0x6c82cc*/
    v11 = v5 + 0xA; /*0x6c82d3*/
    v12 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x6c82d6*/
    if ( v12 ) /*0x6c82e9*/
      v13 = sub_6C5EE0(v12, v11); /*0x6c82ee*/
    else
      v13 = 0; /*0x6c82f5*/
    if ( v13 ) /*0x6c82fe*/
    {
      v4 = (volatile LONG *)v13; /*0x6c8300*/
      InterlockedIncrement((volatile LONG *)&v13->members); /*0x6c830a*/
    }
    (*(void (__thiscall **)(volatile LONG *, Ni2DBuffer **))(*v4 + 0x58))(v4, a2); /*0x6c831d*/
    *((_WORD *)v4 + 4) |= 0x20u; /*0x6c831f*/
    v3 = this; /*0x6c8324*/
    v37 = 1; /*0x6c832e*/
    if ( a2 == *(Ni2DBuffer ***)(*(this + 0x10) + 0x30) ) /*0x6c8333*/
    {
      NiObjectNET_RemoveController(a2, (Ni2DBuffer *)v4); /*0x6c833c*/
      v14 = *(_DWORD *)(*(this + 0x10) + 0x34); /*0x6c8344*/
      v15 = *((_DWORD *)v4 + 0xD); /*0x6c8347*/
      if ( v15 != v14 ) /*0x6c834c*/
      {
        if ( v15 ) /*0x6c8350*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x6c8356*/
            (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x6c836c*/
        }
        *((_DWORD *)v4 + 0xD) = v14; /*0x6c8370*/
        if ( v14 ) /*0x6c8373*/
          InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x6c8379*/
      }
      v16 = *(this + 0x10); /*0x6c837f*/
      v17 = *(volatile LONG **)(v16 + 0x34); /*0x6c8382*/
      if ( v17 != v4 ) /*0x6c8387*/
      {
        if ( v17 ) /*0x6c838b*/
        {
          if ( !InterlockedDecrement(v17 + 1) ) /*0x6c8391*/
            (**(void (__thiscall ***)(volatile LONG *, int))v17)(v17, 1); /*0x6c83a7*/
        }
        *(_DWORD *)(v16 + 0x34) = v4; /*0x6c83ad*/
        InterlockedIncrement(v4 + 1); /*0x6c83b0*/
      }
    }
  }
  v18 = 0; /*0x6c83b6*/
  v41 = 0; /*0x6c83bb*/
  if ( v3[3] )
  {
    v39 = 0; /*0x6c83c5*/
    while ( 1 )
    {
      v40 = v18 + v3[5]; /*0x6c83ce*/
      v19 = v3[6]; /*0x6c83d2*/
      v20 = *(_WORD *)(v19 + v18 + 8); /*0x6c83d5*/
      v21 = (_WORD *)(v18 + v19); /*0x6c83da*/
      if ( v20 == 0xFFFF ) /*0x6c83e1*/
        goto LABEL_62; /*0x6c83e1*/
      if ( !(v20 + *(_DWORD *)(*(_DWORD *)v21 + 8)) ) /*0x6c83ef*/
        goto LABEL_62; /*0x6c83ef*/
      v22 = *(_DWORD *)(*(_DWORD *)v21 + 8); /*0x6c83f7*/
      v23 = v22 + v20; /*0x6c83fa*/
      if ( !v23 ) /*0x6c83fc*/
        goto LABEL_62; /*0x6c83fc*/
      if ( *(_BYTE *)(v23 + 2) != 0x54 ) /*0x6c8406*/
        goto LABEL_62; /*0x6c8406*/
      if ( *(_BYTE *)(v23 + 7) != 0x66 ) /*0x6c8410*/
        goto LABEL_62; /*0x6c8410*/
      v24 = v21[2]; /*0x6c8416*/
      v25 = v24 == 0xFFFF ? 0 : v22 + v24;
      v26 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x4C))(a3, v25); /*0x6c8435*/
      v27 = (int)v26; /*0x6c8437*/
      if ( !v26 || (_DWORD *)v3[0x18] == v26 && *(_BYTE *)(v3[0x10] + 0x6C) ) /*0x6c8449*/
        goto LABEL_62; /*0x6c844d*/
      v28 = (Ni2DBuffer *)sub_700010(v26, (int)&qword_B3BB2C[0x3CB]); /*0x6c845a*/
      v29 = *((_WORD *)v4 + 0x22); /*0x6c845f*/
      v30 = v28; /*0x6c8463*/
      v31 = 0; /*0x6c8465*/
      if ( v29 ) /*0x6c846a*/
      {
        v32 = *((_DWORD *)v4 + 0x10); /*0x6c846c*/
        while ( *(_DWORD *)(v32 + 4 * v31) != v27 ) /*0x6c8476*/
        {
          if ( ++v31 >= v29 ) /*0x6c847e*/
            goto LABEL_50; /*0x6c847e*/
        }
        v33 = v31; /*0x6c8489*/
        if ( v31 != word_A7A160 ) /*0x6c848c*/
          break; /*0x6c848c*/
      }
LABEL_50:
      v33 = sub_6C5F80((int)v4, v27); /*0x6c848e*/
      if ( v33 != word_A7A160 ) /*0x6c84a0*/
        goto LABEL_53; /*0x6c84a0*/
LABEL_61:
      v3 = this; /*0x6c8514*/
LABEL_62:
      v18 = v39 + 0x10; /*0x6c8518*/
      v36 = (unsigned int)++v41 < v3[3]; /*0x6c8526*/
      v39 += 0x10; /*0x6c852d*/
      if ( !v36 ) /*0x6c8531*/
        goto LABEL_63; /*0x6c8531*/
    }
    *(_DWORD *)(v32 + 4 * v31) = v27; /*0x6c84a7*/
LABEL_53:
    if ( CRT_StricmpLocaleDispatch(*(unsigned __int8 **)(v27 + 8), "Bip01") ) /*0x6c84b3*/
      NiObjectNET_RemoveController((Ni2DBuffer **)v27, v30); /*0x6c84c2*/
    v34 = *(volatile LONG **)(v40 + 4); /*0x6c84cb*/
    if ( v34 != v4 ) /*0x6c84d0*/
    {
      if ( v34 ) /*0x6c84d4*/
      {
        if ( !InterlockedDecrement(v34 + 1) ) /*0x6c84da*/
          (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1); /*0x6c84f0*/
      }
      *(_DWORD *)(v40 + 4) = v4; /*0x6c84f6*/
      InterlockedIncrement(v4 + 1); /*0x6c84f9*/
    }
    v35 = 0x30 * v33 + *((_DWORD *)v4 + 0xF); /*0x6c850b*/
    *(_DWORD *)(v40 + 8) = v35; /*0x6c850d*/
    *(_BYTE *)(v35 + 0xC) |= 1u; /*0x6c8510*/
    goto LABEL_61; /*0x6c8510*/
  }
LABEL_63:
  if ( v4 ) /*0x6c8541*/
  {
    if ( !InterlockedDecrement(v4 + 1) ) /*0x6c8547*/
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1); /*0x6c855a*/
  }
  return v37; /*0x6c8560*/
}
