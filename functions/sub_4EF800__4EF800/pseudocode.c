void __thiscall sub_4EF800(TESWorldSpace *this, float a2, float a3, float a4, float a5, int a6, unsigned int a7)
{
  double v8; // st6
  TESForm *v9; // eax
  ExtraDataList *v10; // ebp
  unsigned int v11; // ecx
  float *v12; // esi
  double v13; // st5
  double v14; // st3
  double v15; // rt0
  double v16; // st2
  double v17; // rt1
  double v18; // st3
  double v19; // st5
  TESRegionDataManager *regionDataManager; // ebx
  TESRegionDataManagerVtable *vtable; // esi
  BSExtraData *v22; // eax
  TESRegionData *v23; // eax
  int v24; // ebp
  unsigned int *v25; // eax
  int v26; // eax
  _DWORD *v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // ebp
  int v31; // eax
  _DWORD *v32; // edi
  int v33; // esi
  int v34; // ebx
  int v35; // ebp
  unsigned int v36; // edi
  int v37; // ebp
  unsigned int *v38; // ebx
  int v39; // esi
  int *v40; // eax
  _DWORD *v41; // eax
  _DWORD *v42; // edi
  CHAR *v43; // eax
  char v44; // al
  float *v45; // ebx
  char *v46; // edi
  unsigned int v47; // esi
  bool v48; // zf
  unsigned int *v49; // esi
  unsigned int v50; // eax
  unsigned int v51; // esi
  float v52; // [esp+40h] [ebp-90h]
  int v53; // [esp+40h] [ebp-90h]
  int v54; // [esp+40h] [ebp-90h]
  unsigned int v55; // [esp+44h] [ebp-8Ch]
  _DWORD *v56; // [esp+44h] [ebp-8Ch]
  float v57; // [esp+48h] [ebp-88h]
  int v58; // [esp+48h] [ebp-88h]
  int v59; // [esp+48h] [ebp-88h]
  unsigned int *v60; // [esp+4Ch] [ebp-84h]
  float v61; // [esp+50h] [ebp-80h]
  float v62; // [esp+54h] [ebp-7Ch]
  float v63; // [esp+58h] [ebp-78h]
  int v64; // [esp+5Ch] [ebp-74h]
  char v66; // [esp+64h] [ebp-6Ch] BYREF
  char v67; // [esp+68h] [ebp-68h] BYREF

  if ( g_TESDataHandler )
  {
    if ( a7 )
    {
      v8 = dbl_A2FAA0; /*0x4ef84e*/
      v61 = (a4 + a2) * v8; /*0x4ef850*/
      v62 = (a5 + a3) * v8; /*0x4ef86c*/
      v63 = 0.0; /*0x4ef872*/
      v9 = sub_44A270((TESWorldSpace **)g_TESDataHandler, v61, v62, this, 0); /*0x4ef899*/
      v10 = (ExtraDataList *)v9; /*0x4ef89e*/
      if ( v9 )
      {
        if ( sub_4C9B40((ExtraDataList *)v9, 1) )
        {
          v11 = 0; /*0x4ef8bd*/
          v12 = (float *)&v67; /*0x4ef8c3*/
          v13 = 0.0; /*0x4ef8c7*/
          v14 = a2; /*0x4ef8d0*/
          while ( 1 ) /*0x4ef87e*/
          {
            v52 = (a4 - a2) * v8; /*0x4ef87e*/
            v12[0xFFFFFFFF] = (double)(v11 % 3) * v52 + v14; /*0x4ef907*/
            v16 = (double)(v11 / 3); /*0x4ef90a*/
            if ( (int)(v11 / 3) < 0 ) /*0x4ef90e*/
              v16 = v16 + flt_A2FC78; /*0x4ef910*/
            ++v11; /*0x4ef918*/
            v12 += 3; /*0x4ef91b*/
            v57 = (a5 - a3) * v8; /*0x4ef886*/
            v12[0xFFFFFFFD] = v16 * v57 + a3; /*0x4ef923*/
            v17 = v14; /*0x4ef926*/
            v18 = v13; /*0x4ef926*/
            v19 = v17; /*0x4ef926*/
            v12[0xFFFFFFFE] = v18; /*0x4ef928*/
            if ( v11 >= 9 ) /*0x4ef92b*/
              break; /*0x4ef92b*/
            v15 = v18; /*0x4ef8d9*/
            v14 = v19; /*0x4ef8d9*/
            v13 = v15; /*0x4ef8d9*/
          }
          regionDataManager = g_TESDataHandler->regionDataManager; /*0x4ef935*/
          vtable = regionDataManager->vtable; /*0x4ef949*/
          v22 = sub_4C9B40(v10, 1); /*0x4ef968*/
          v23 = TESRegionList_SelectDataAtWorldPosition((TESRegionList *)v22, 6, v61, v62, v63, this); /*0x4ef96f*/
          v24 = ((int (__thiscall *)(TESRegionDataManager *, TESRegionData *))vtable->filterDataID6)( /*0x4ef97b*/
                  regionDataManager,
                  v23);
          v58 = v24; /*0x4ef981*/
          if ( v24 )
          {
            v25 = (unsigned int *)FormHeapAlloc(8u); /*0x4ef98d*/
            if ( v25 ) /*0x4ef997*/
            {
              *v25 = 0; /*0x4ef999*/
              v25[1] = 0; /*0x4ef99b*/
              v60 = v25; /*0x4ef99e*/
            }
            else
            {
              v60 = 0; /*0x4ef9a4*/
            }
            v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x24))(v24); /*0x4ef9b0*/
            if ( v26 ) /*0x4ef9b4*/
            {
              v27 = (_DWORD *)(v26 + 4); /*0x4ef9ba*/
              if ( v26 != 0xFFFFFFFC ) /*0x4ef9bf*/
              {
                do /*0x4efa7b*/
                {
                  v28 = *v27; /*0x4ef9c5*/
                  if ( *v27 ) /*0x4ef9c5*/
                  {
                    v29 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 4))(*v27); /*0x4ef9da*/
                    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0xC))(v28) ) /*0x4ef9e1*/
                    {
                      if ( v29 ) /*0x4ef9ed*/
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 0x120))(v29) ) /*0x4ef9fd*/
                        {
                          if ( ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, TESWorldSpace *, _DWORD))*(_DWORD *)(*(_DWORD *)v28 + 0x18))( /*0x4efa37*/
                                 v28,
                                 LODWORD(v61),
                                 LODWORD(v62),
                                 LODWORD(v63),
                                 this,
                                 0) != *(float *)&SrcStr )
                          {
                            v30 = FormHeapAlloc(8u); /*0x4efa40*/
                            *(_DWORD *)v30 = v28; /*0x4efa42*/
                            *(float *)(v30 + 4) = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 0x120))(v29) /*0x4efa6a*/
                                                / fCostant_100;
                            BSSimpleList_PushFront(v60, v30); /*0x4efa6d*/
                            v24 = v58; /*0x4efa72*/
                          }
                        }
                      }
                    }
                  }
                  v27 = (_DWORD *)v27[1]; /*0x4efa76*/
                }
                while ( v27 ); /*0x4efa7b*/
              }
            }
            v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x24))(v24); /*0x4efa89*/
            if ( v31 ) /*0x4efa8d*/
            {
              v32 = (_DWORD *)(v31 + 4); /*0x4efa93*/
              if ( v31 != 0xFFFFFFFC ) /*0x4efa98*/
              {
                do /*0x4efb52*/
                {
                  v33 = *v32; /*0x4efaa0*/
                  if ( *v32 ) /*0x4efaa0*/
                  {
                    v34 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 4))(*v32); /*0x4efab5*/
                    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v33 + 0xC))(v33) ) /*0x4efabc*/
                    {
                      if ( v34 ) /*0x4efac8*/
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x120))(v34) ) /*0x4efad8*/
                        {
                          if ( ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, TESWorldSpace *, _DWORD))*(_DWORD *)(*(_DWORD *)v33 + 0x18))( /*0x4efb12*/
                                 v33,
                                 LODWORD(v61),
                                 LODWORD(v62),
                                 LODWORD(v63),
                                 this,
                                 0) != *(float *)&SrcStr )
                          {
                            v35 = FormHeapAlloc(8u); /*0x4efb1b*/
                            *(_DWORD *)v35 = v33; /*0x4efb1d*/
                            *(float *)(v35 + 4) = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x120))(v34) /*0x4efb45*/
                                                / fCostant_100;
                            BSSimpleList_PushFront(v60, v35); /*0x4efb48*/
                          }
                        }
                      }
                    }
                  }
                  v32 = (_DWORD *)v32[1]; /*0x4efb4d*/
                }
                while ( v32 ); /*0x4efb52*/
              }
            }
            if ( v60 && (v60[1] || *v60) )
            {
              v36 = a7; /*0x4efb73*/
              v37 = FormHeapAlloc((unsigned __int64)a7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a7);
              v64 = v37; /*0x4efb9f*/
              _memset(v37, 0, 4 * a7); /*0x4efba3*/
              v38 = v60; /*0x4efbad*/
              v55 = 0; /*0x4efbaf*/
              v39 = a6 + 4; /*0x4efbc4*/
              do /*0x4efd19*/
              {
                *(_DWORD *)(v39 + 0x1C) = 0; /*0x4efbc9*/
                *(_DWORD *)(v39 + 0x20) = 0; /*0x4efbcc*/
                *(_DWORD *)(v39 + 0x24) = 0; /*0x4efbcf*/
                *(_DWORD *)(v39 + 0x28) = 0; /*0x4efbd2*/
                *(_DWORD *)(v39 + 0x2C) = 0; /*0x4efbd5*/
                *(_DWORD *)(v39 + 0x30) = 0; /*0x4efbd8*/
                *(_DWORD *)(v39 + 0x34) = 0; /*0x4efbdb*/
                *(_DWORD *)(v39 + 0x38) = 0; /*0x4efbde*/
                *(_DWORD *)(v39 + 0x3C) = 0; /*0x4efbe1*/
                if ( *(_DWORD *)(v39 - 4) ) /*0x4efbe4*/
                  FormHeapFree(*(_DWORD *)(v39 - 4)); /*0x4efbec*/
                *(_DWORD *)(v39 - 4) = 0; /*0x4efbf6*/
                if ( v38 ) /*0x4efbfd*/
                {
                  v40 = (int *)*v38; /*0x4efc03*/
                  if ( *v38 ) /*0x4efc03*/
                    goto LABEL_44; /*0x4efc03*/
                  while ( 1 ) /*0x4efc10*/
                  {
                    v38 = (unsigned int *)v38[1]; /*0x4efc10*/
                    if ( !v38 ) /*0x4efc15*/
                      break; /*0x4efc15*/
                    v40 = (int *)*v38; /*0x4efc17*/
                    if ( *v38 ) /*0x4efc17*/
                      goto LABEL_44; /*0x4efc1b*/
                  }
                  if ( v40 ) /*0x4efc21*/
                  {
LABEL_44:
                    v53 = *v40; /*0x4efc27*/
                    v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v53 + 4))(v53); /*0x4efc34*/
                    v42 = v41; /*0x4efc36*/
                    if ( v41 ) /*0x4efc3a*/
                      sub_4AF3F0(v41); /*0x4efc3e*/
                    *(_DWORD *)(v37 + 4 * v55) = v53; /*0x4efc4b*/
                    if ( *(_DWORD *)(v39 - 4) ) /*0x4efc4f*/
                      FormHeapFree(*(_DWORD *)(v39 - 4)); /*0x4efc57*/
                    *(_DWORD *)(v39 - 4) = FormHeapAlloc(0x104u); /*0x4efc6e*/
                    v43 = sub_4AF3F0(v42); /*0x4efc71*/
                    _sprintf(*(char **)(v39 - 4), "data/meshes/%s", v43); /*0x4efc80*/
                    *(_DWORD *)v39 = v42[3]; /*0x4efc88*/
                    *(float *)(v39 + 4) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x150))(v42); /*0x4efc99*/
                    *(float *)(v39 + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x158))(v42); /*0x4efca8*/
                    *(float *)(v39 + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x160))(v42); /*0x4efcb7*/
                    *(float *)(v39 + 0x14) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x168))(v42); /*0x4efcc6*/
                    *(_BYTE *)(v39 + 0x18) = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x170))(v42); /*0x4efcd5*/
                    *(_BYTE *)(v39 + 0x19) = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x178))(v42); /*0x4efce4*/
                    v44 = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x180))(v42); /*0x4efcf1*/
                    v36 = a7; /*0x4efcf3*/
                    *(_BYTE *)(v39 + 0x1A) = v44; /*0x4efcfa*/
                    *(float *)(v39 + 0x10) = flt_B080DC; /*0x4efd03*/
                    v38 = (unsigned int *)v38[1]; /*0x4efd06*/
                  }
                }
                v39 += 0x44; /*0x4efd10*/
                ++v55; /*0x4efd15*/
              }
              while ( v55 < v36 ); /*0x4efd19*/
              v45 = (float *)(a6 + 0x20); /*0x4efd26*/
              v46 = &v66; /*0x4efd29*/
              v59 = a6 + 0x20; /*0x4efd2d*/
              v54 = 9; /*0x4efd31*/
              do /*0x4efdc4*/
              {
                v47 = 0; /*0x4efd40*/
                v56 = (_DWORD *)(a6 + 4); /*0x4efd55*/
                do /*0x4efdaf*/
                {
                  if ( *(_DWORD *)(v37 + 4 * v47) ) /*0x4efd60*/
                  {
                    if ( *v56 ) /*0x4efd6b*/
                    {
                      *v45 = ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, TESWorldSpace *, int))*(_DWORD *)(**(_DWORD **)(v37 + 4 * v47) + 0x18))( /*0x4efd97*/
                               *(_DWORD *)(v37 + 4 * v47),
                               *(_DWORD *)v46,
                               *((_DWORD *)v46 + 1),
                               *((_DWORD *)v46 + 2),
                               this,
                               1);
                      v37 = v64; /*0x4efd99*/
                    }
                  }
                  v56 += 0x11; /*0x4efd9d*/
                  ++v47; /*0x4efda2*/
                  v45 += 0x11; /*0x4efda5*/
                }
                while ( v47 < a7 ); /*0x4efdaf*/
                v45 = (float *)(v59 + 4); /*0x4efdb5*/
                v46 += 0xC; /*0x4efdb8*/
                v48 = v54-- == 1; /*0x4efdbb*/
                v59 += 4; /*0x4efdc0*/
              }
              while ( !v48 ); /*0x4efdc4*/
              FormHeapFree(v37); /*0x4efdcb*/
              v49 = v60; /*0x4efdd7*/
              do /*0x4efdf4*/
              {
                v50 = *v49; /*0x4efde0*/
                if ( !*v49 ) /*0x4efde0*/
                  break; /*0x4efde4*/
                v49 = (unsigned int *)v49[1]; /*0x4efde6*/
                FormHeapFree(v50); /*0x4efdea*/
              }
              while ( v49 ); /*0x4efdf4*/
              if ( v60[1] ) /*0x4efdf6*/
              {
                do /*0x4efe14*/
                {
                  v51 = *(_DWORD *)(v60[1] + 4); /*0x4efe03*/
                  FormHeapFree(v60[1]); /*0x4efe07*/
                  v60[1] = v51; /*0x4efe11*/
                }
                while ( v51 ); /*0x4efe14*/
              }
              *v60 = 0; /*0x4efe16*/
              FormHeapFree((unsigned int)v60); /*0x4efe1d*/
            }
            else
            {
              FormHeapFree((unsigned int)v60); /*0x4efe20*/
            }
          }
        }
      }
    }
  }
}
