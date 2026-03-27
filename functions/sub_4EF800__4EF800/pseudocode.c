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
  int *v20; // ebx
  int v21; // esi
  int *v22; // eax
  int v23; // eax
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
  unsigned int v37; // ebp
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
  int v63; // [esp+58h] [ebp-78h]
  unsigned int v64; // [esp+5Ch] [ebp-74h]
  char v66; // [esp+64h] [ebp-6Ch] BYREF
  char v67; // [esp+68h] [ebp-68h] BYREF

  if ( TESDataHandler )
  {
    if ( a7 )
    {
      v8 = dbl_A2FAA0;
      v61 = (a4 + a2) * v8;
      v62 = (a5 + a3) * v8;
      *(float *)&v63 = 0.0;
      v9 = sub_44A270((TESWorldSpace **)TESDataHandler, v61, v62, this, 0);
      v10 = (ExtraDataList *)v9;
      if ( v9 )
      {
        if ( sub_4C9B40((ExtraDataList *)v9, 1) )
        {
          v11 = 0;
          v12 = (float *)&v67;
          v13 = 0.0;
          v14 = a2;
          while ( 1 )
          {
            v52 = (a4 - a2) * v8;
            v12[0xFFFFFFFF] = (double)(v11 % 3) * v52 + v14;
            v16 = (double)(v11 / 3);
            if ( (int)(v11 / 3) < 0 )
              v16 = v16 + flt_A2FC78;
            ++v11;
            v12 += 3;
            v57 = (a5 - a3) * v8;
            v12[0xFFFFFFFD] = v16 * v57 + a3;
            v17 = v14;
            v18 = v13;
            v19 = v17;
            v12[0xFFFFFFFE] = v18;
            if ( v11 >= 9 )
              break;
            v15 = v18;
            v14 = v19;
            v13 = v15;
          }
          v20 = *(int **)(TESDataHandler + 0xCD8);
          v21 = *v20;
          v22 = (int *)sub_4C9B40(v10, 1);
          v23 = sub_4A67B0(v22, 6, v61, v62, v63, (int)this);
          v24 = (*(int (__thiscall **)(int *, int))(v21 + 0x18))(v20, v23);
          v58 = v24;
          if ( v24 )
          {
            v25 = (unsigned int *)FormHeapAlloc(8u);
            if ( v25 )
            {
              *v25 = 0;
              v25[1] = 0;
              v60 = v25;
            }
            else
            {
              v60 = 0;
            }
            v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x24))(v24);
            if ( v26 )
            {
              v27 = (_DWORD *)(v26 + 4);
              if ( v26 != 0xFFFFFFFC )
              {
                do
                {
                  v28 = *v27;
                  if ( *v27 )
                  {
                    v29 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v28 + 4))(*v27);
                    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0xC))(v28) )
                    {
                      if ( v29 )
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 0x120))(v29) )
                        {
                          if ( ((double (__thiscall *)(int, _DWORD, _DWORD, int, TESWorldSpace *, _DWORD))*(_DWORD *)(*(_DWORD *)v28 + 0x18))(
                                 v28,
                                 LODWORD(v61),
                                 LODWORD(v62),
                                 v63,
                                 this,
                                 0) != *(float *)&SrcStr )
                          {
                            v30 = FormHeapAlloc(8u);
                            *(_DWORD *)v30 = v28;
                            *(float *)(v30 + 4) = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 0x120))(v29)
                                                / fCostant_100;
                            BSSimpleList_PushFront(v60, v30);
                            v24 = v58;
                          }
                        }
                      }
                    }
                  }
                  v27 = (_DWORD *)v27[1];
                }
                while ( v27 );
              }
            }
            v31 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x24))(v24);
            if ( v31 )
            {
              v32 = (_DWORD *)(v31 + 4);
              if ( v31 != 0xFFFFFFFC )
              {
                do
                {
                  v33 = *v32;
                  if ( *v32 )
                  {
                    v34 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v33 + 4))(*v32);
                    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v33 + 0xC))(v33) )
                    {
                      if ( v34 )
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x120))(v34) )
                        {
                          if ( ((double (__thiscall *)(int, _DWORD, _DWORD, int, TESWorldSpace *, _DWORD))*(_DWORD *)(*(_DWORD *)v33 + 0x18))(
                                 v33,
                                 LODWORD(v61),
                                 LODWORD(v62),
                                 v63,
                                 this,
                                 0) != *(float *)&SrcStr )
                          {
                            v35 = FormHeapAlloc(8u);
                            *(_DWORD *)v35 = v33;
                            *(float *)(v35 + 4) = (double)(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v34 + 0x120))(v34)
                                                / fCostant_100;
                            BSSimpleList_PushFront(v60, v35);
                          }
                        }
                      }
                    }
                  }
                  v32 = (_DWORD *)v32[1];
                }
                while ( v32 );
              }
            }
            if ( v60 && (v60[1] || *v60) )
            {
              v36 = a7;
              v37 = FormHeapAlloc((unsigned __int64)a7 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a7);
              v64 = v37;
              _memset(v37, 0, 4 * a7);
              v38 = v60;
              v55 = 0;
              v39 = a6 + 4;
              do
              {
                *(_DWORD *)(v39 + 0x1C) = 0;
                *(_DWORD *)(v39 + 0x20) = 0;
                *(_DWORD *)(v39 + 0x24) = 0;
                *(_DWORD *)(v39 + 0x28) = 0;
                *(_DWORD *)(v39 + 0x2C) = 0;
                *(_DWORD *)(v39 + 0x30) = 0;
                *(_DWORD *)(v39 + 0x34) = 0;
                *(_DWORD *)(v39 + 0x38) = 0;
                *(_DWORD *)(v39 + 0x3C) = 0;
                if ( *(_DWORD *)(v39 - 4) )
                  FormHeapFree(*(_DWORD *)(v39 - 4));
                *(_DWORD *)(v39 - 4) = 0;
                if ( v38 )
                {
                  v40 = (int *)*v38;
                  if ( *v38 )
                    goto LABEL_44;
                  while ( 1 )
                  {
                    v38 = (unsigned int *)v38[1];
                    if ( !v38 )
                      break;
                    v40 = (int *)*v38;
                    if ( *v38 )
                      goto LABEL_44;
                  }
                  if ( v40 )
                  {
LABEL_44:
                    v53 = *v40;
                    v41 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v53 + 4))(v53);
                    v42 = v41;
                    if ( v41 )
                      sub_4AF3F0(v41);
                    *(_DWORD *)(v37 + 4 * v55) = v53;
                    if ( *(_DWORD *)(v39 - 4) )
                      FormHeapFree(*(_DWORD *)(v39 - 4));
                    *(_DWORD *)(v39 - 4) = FormHeapAlloc(0x104u);
                    v43 = sub_4AF3F0(v42);
                    _sprintf(*(char **)(v39 - 4), "data/meshes/%s", v43);
                    *(_DWORD *)v39 = v42[3];
                    *(float *)(v39 + 4) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x150))(v42);
                    *(float *)(v39 + 8) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x158))(v42);
                    *(float *)(v39 + 0xC) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x160))(v42);
                    *(float *)(v39 + 0x14) = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*v42 + 0x168))(v42);
                    *(_BYTE *)(v39 + 0x18) = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x170))(v42);
                    *(_BYTE *)(v39 + 0x19) = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x178))(v42);
                    v44 = (*(int (__thiscall **)(_DWORD *))(*v42 + 0x180))(v42);
                    v36 = a7;
                    *(_BYTE *)(v39 + 0x1A) = v44;
                    *(float *)(v39 + 0x10) = flt_B080DC;
                    v38 = (unsigned int *)v38[1];
                  }
                }
                v39 += 0x44;
                ++v55;
              }
              while ( v55 < v36 );
              v45 = (float *)(a6 + 0x20);
              v46 = &v66;
              v59 = a6 + 0x20;
              v54 = 9;
              do
              {
                v47 = 0;
                v56 = (_DWORD *)(a6 + 4);
                do
                {
                  if ( *(_DWORD *)(v37 + 4 * v47) )
                  {
                    if ( *v56 )
                    {
                      *v45 = ((double (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, TESWorldSpace *, int))*(_DWORD *)(**(_DWORD **)(v37 + 4 * v47) + 0x18))(
                               *(_DWORD *)(v37 + 4 * v47),
                               *(_DWORD *)v46,
                               *((_DWORD *)v46 + 1),
                               *((_DWORD *)v46 + 2),
                               this,
                               1);
                      v37 = v64;
                    }
                  }
                  v56 += 0x11;
                  ++v47;
                  v45 += 0x11;
                }
                while ( v47 < a7 );
                v45 = (float *)(v59 + 4);
                v46 += 0xC;
                v48 = v54-- == 1;
                v59 += 4;
              }
              while ( !v48 );
              FormHeapFree(v37);
              v49 = v60;
              do
              {
                v50 = *v49;
                if ( !*v49 )
                  break;
                v49 = (unsigned int *)v49[1];
                FormHeapFree(v50);
              }
              while ( v49 );
              if ( v60[1] )
              {
                do
                {
                  v51 = *(_DWORD *)(v60[1] + 4);
                  FormHeapFree(v60[1]);
                  v60[1] = v51;
                }
                while ( v51 );
              }
              *v60 = 0;
              FormHeapFree((unsigned int)v60);
            }
            else
            {
              FormHeapFree((unsigned int)v60);
            }
          }
        }
      }
    }
  }
}
