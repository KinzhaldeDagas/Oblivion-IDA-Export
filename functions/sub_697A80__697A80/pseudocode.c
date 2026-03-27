void __userpurge sub_697A80(
        float *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st1>,
        double a6@<st0>,
        float a7,
        int a8,
        int a9,
        float a10)
{
  float *v12; // eax
  bool v13; // zf
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  float v17; // esi
  _DWORD *v18; // eax
  float v19; // ecx
  float v20; // eax
  float v21; // edx
  double v22; // st6
  bhkCharacterProxy *CharProxy; // eax
  float v24; // eax
  float v25; // edx
  bhkCharacterProxy *v26; // eax
  unsigned int v27; // esi
  float v28; // ebx
  _DWORD *v29; // eax
  unsigned int v30; // ecx
  int v31; // ecx
  void (__thiscall ***v32)(_DWORD, int); // edi
  int v33; // edi
  volatile LONG *v34; // edi
  int v35; // edi
  int v36; // edi
  float *v37; // eax
  bool v38; // bl
  void *v39; // ecx
  void *v40; // ecx
  bhkCharacterProxy *v41; // eax
  bhkCharacterProxy *v42; // eax
  bhkCharacterProxy *v43; // eax
  _DWORD *v44; // esi
  _DWORD *v45; // eax
  int v46; // eax
  int *v47; // ecx
  unsigned int v48; // esi
  float v49; // [esp+18h] [ebp-84h]
  float v50; // [esp+1Ch] [ebp-80h]
  float v51; // [esp+20h] [ebp-7Ch]
  int v52; // [esp+20h] [ebp-7Ch]
  float v54; // [esp+34h] [ebp-68h]
  int v55; // [esp+38h] [ebp-64h] BYREF
  double v56; // [esp+3Ch] [ebp-60h]
  float v57; // [esp+44h] [ebp-58h]
  float v58; // [esp+48h] [ebp-54h] BYREF
  float v59; // [esp+4Ch] [ebp-50h]
  float v60; // [esp+50h] [ebp-4Ch]
  float v61; // [esp+54h] [ebp-48h]
  float v62; // [esp+58h] [ebp-44h]
  float v63; // [esp+5Ch] [ebp-40h]
  float v64[3]; // [esp+60h] [ebp-3Ch] BYREF
  float v65; // [esp+6Ch] [ebp-30h] BYREF
  float v66; // [esp+70h] [ebp-2Ch]
  float v67; // [esp+74h] [ebp-28h]
  float v68[9]; // [esp+78h] [ebp-24h] BYREF

  if ( 0.0 != a7 && ((_DWORD)a1[2] & 0x20) == 0 )
  {
    v12 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x154))(a1);
    v13 = *((_DWORD *)a1 + 0x1F) == 0;
    v14 = v12[0x15];
    v15 = v12[0x16];
    v16 = v12[0x17];
    v61 = v14;
    v62 = v15;
    v63 = v16;
    if ( v13 || *((_DWORD *)a1 + 0x20) )
    {
      if ( *((_DWORD *)a1 + 0x20) == 1 )
      {
        v27 = *((unsigned int *)a1 + 0x21);
        v28 = 0.0;
        v54 = 0.0;
        if ( *(float *)&v27 != 0.0 )
        {
          while ( 1 )
          {
            sub_696460(a1, a7, (void **)v27);
            v29 = *(_DWORD **)v27;
            v13 = *(_BYTE *)(*(_DWORD *)v27 + 0x180) == 0;
            v30 = *(unsigned int *)(v27 + 0x1C);
            LODWORD(v56) = v30;
            if ( v13 && v29[0x21] >= v29[0x22] )
            {
              v31 = *(_DWORD *)(*(_DWORD *)(v27 + 4) + 0x1C);
              if ( v31 )
              {
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v31 + 0x88))(v31, &v55, *(_DWORD *)(v27 + 4));
                if ( v55 )
                {
                  v32 = (void (__thiscall ***)(_DWORD, int))v55;
                  if ( !InterlockedDecrement((volatile LONG *)(v55 + 4)) )
                    (**v32)(v32, 1);
                }
              }
              if ( v28 == 0.0 )
                a1[0x21] = *(float *)(v27 + 0x1C);
              else
                *(_DWORD *)(LODWORD(v28) + 0x1C) = *(_DWORD *)(v27 + 0x1C);
              v33 = *(_DWORD *)(v27 + 4);
              if ( v33 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
                  (**(void (__thiscall ***)(int, int))v33)(v33, 1);
                *(_DWORD *)(v27 + 4) = 0;
              }
              v34 = *(volatile LONG **)v27;
              if ( *(_DWORD *)v27 )
              {
                if ( !InterlockedDecrement(v34 + 1) )
                {
                  if ( v34 )
                    (**(void (__thiscall ***)(void *, int))v34)((void *)v34, 1);
                }
                *(_DWORD *)v27 = 0;
              }
              v35 = *(_DWORD *)(v27 + 0x14);
              if ( v35 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) )
                  (**(void (__thiscall ***)(int, int))v35)(v35, 1);
                *(_DWORD *)(v27 + 0x14) = 0;
              }
              v36 = *(_DWORD *)(v27 + 0x18);
              if ( v36 )
              {
                if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) )
                  (**(void (__thiscall ***)(int, int))v36)(v36, 1);
                *(_DWORD *)(v27 + 0x18) = 0;
              }
              sub_696C00((int *)v27);
              FormHeapFree(v27);
              v30 = LODWORD(v56);
            }
            else
            {
              v54 = *(float *)&v27;
            }
            v27 = v30;
            if ( *(float *)&v30 == 0.0 )
              break;
            v28 = v54;
          }
        }
      }
      goto LABEL_48;
    }
    MobileObject_GetCharProxy((MobileObject *)a1);
    if ( *((float *)&v56 + 1) >= (double)*(float *)((*(int (__usercall **)@<eax>(float *@<ecx>, int, int, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x174))(
                                                      a1,
                                                      a3,
                                                      a4,
                                                      a2,
                                                      a6,
                                                      a5)
                                                  + 8) )
    {
      v17 = *a1;
      v18 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1);
      (*(void (__thiscall **)(float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(LODWORD(v17) + 0x208))(
        a1,
        *v18,
        v18[1],
        v18[2],
        0,
        0,
        1);
    }
    v19 = *(&Vector3_InitValue_ + 1);
    v20 = Vector3_InitValue_;
    v65 = 0.0;
    v21 = dword_B3F9B0;
    v22 = a1[0x17] * a10;
    v59 = v19;
    v58 = v20;
    v60 = v21;
    v66 = v22;
    v67 = 0.0;
    if ( MobileObject_GetCharProxy((MobileObject *)a1) )
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
      sub_5E1500((__m128 *)CharProxy, &v58);
    }
    (*(void (__thiscall **)(float *, _DWORD, float *, int))(*(_DWORD *)a1 + 0x1B4))(a1, LODWORD(a10), &v65, 0xF);
    v24 = Vector3_InitValue_;
    v25 = dword_B3F9B0;
    v59 = *(&Vector3_InitValue_ + 1);
    v58 = v24;
    v60 = v25;
    if ( MobileObject_GetCharProxy((MobileObject *)a1) )
    {
      v26 = MobileObject_GetCharProxy((MobileObject *)a1);
      sub_5E1500((__m128 *)v26, &v58);
    }
    v65 = v58 - *(float *)&v56;
    v66 = v59 - *((float *)&v56 + 1);
    v67 = v60 - v57;
    v54 = sub_404C90(&v65) + a1[0x18];
    a6 = v54;
    a1[0x18] = v54;
    a5 = flt_B37E88;
    if ( a5 < v54 )
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x8C))(a1, 1);
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 0x210))(a1) )
    {
LABEL_48:
      if ( iShockDebug <= 0 && !byte_B3C0BA )
      {
        v37 = *((float **)a1 + 0x24);
        v38 = *((_DWORD *)a1 + 0x20) != 0;
        LOBYTE(v54) = v38;
        if ( v37 )
        {
          v58 = v37[0x22] - v61;
          v59 = v37[0x23] - v62;
          v60 = v37[0x24] - v63;
          if ( !v38
            || (double)*(int *)(*((_DWORD *)a1 + 0x1F) + 0x14C) * *(float *)(*((_DWORD *)a1 + 0x1F) + 0x150) < a1[0x19] * a1[0x17] )
          {
            v50 = a1[0x17];
            v49 = sub_404C90(&v58);
            sub_7F3530(*((_DWORD *)a1 + 0x1F), a7, v49, v50, v54);
          }
          a7 = v60;
          v60 = 0.0;
          v56 = a7;
          sub_404C90(&v58);
          sub_98598A(v39);
          a7 = a5;
          v51 = -a7;
          sub_98598A(v40);
          a7 = a6;
          sub_7118E0(v68, a7, 0.0, v51);
          qmemcpy((void *)(*((_DWORD *)a1 + 0x22) + 0x30), v68, 0x24u);
        }
        else if ( MobileObject_GetCharProxy((MobileObject *)a1) )
        {
          v41 = MobileObject_GetCharProxy((MobileObject *)a1);
          sub_5E1500((__m128 *)v41, &v65);
          v64[0] = v61 - v65;
          v64[1] = v62 - v66;
          v64[2] = v63 - v67;
          *(float *)&v56 = sub_404C90(v64);
          if ( !v38
            || (double)*(int *)(*((_DWORD *)a1 + 0x1F) + 0x14C) * *(float *)(*((_DWORD *)a1 + 0x1F) + 0x150) < a1[0x19] * a1[0x17] )
          {
            sub_7F3530(*((_DWORD *)a1 + 0x1F), a7, *(float *)&v56, a1[0x17], v54);
          }
          if ( nullsub_returnFalse_0arg() )
          {
            *((_DWORD *)a1 + 0x20) = 2;
            v42 = MobileObject_GetCharProxy((MobileObject *)a1);
            sub_57E270(v42, &a7);
            v52 = LODWORD(a7) | 0x4000;
            v43 = MobileObject_GetCharProxy((MobileObject *)a1);
            sub_694FC0(v43, v52);
          }
        }
      }
      v44 = *((_DWORD **)a1 + 0x25);
      if ( v44 )
      {
        v45 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1);
        v44[0x22] = *v45;
        v44[0x23] = v45[1];
        v44[0x24] = v45[2];
      }
      v46 = *((_DWORD *)a1 + 0x1F);
      if ( !*(_BYTE *)(v46 + 0x180) && *(_DWORD *)(v46 + 0x84) >= *(_DWORD *)(v46 + 0x88)
        || *((_DWORD *)a1 + 0x20) == 1 && a1[0x1E] - a1[0x28] > dbl_A30E48 )
      {
        v47 = *((int **)a1 + 0x27);
        if ( v47 )
        {
          sub_6B7240(v47);
          v48 = *((_DWORD *)a1 + 0x27);
          if ( v48 )
          {
            sub_6B73E0(*((_DWORD **)a1 + 0x27));
            FormHeapFree(v48);
            a1[0x27] = 0.0;
          }
        }
        if ( !*((_DWORD *)a1 + 0x21) )
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x8C))(a1, 1);
      }
    }
  }
}
