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
  float *v11; // eax
  bool v12; // zf
  float v13; // ecx
  float v14; // edx
  float v15; // eax
  int v16; // esi
  _DWORD *v17; // eax
  float y; // ecx
  float x; // eax
  float z; // edx
  double v21; // st6
  bhkCharacterProxy *CharProxy; // eax
  float v23; // eax
  float v24; // edx
  bhkCharacterProxy *v25; // eax
  unsigned int v26; // esi
  float v27; // ebx
  float *v28; // eax
  unsigned int v29; // ecx
  int v30; // ecx
  void (__thiscall ***v31)(_DWORD, int); // edi
  int v32; // edi
  float *v33; // edi
  int v34; // edi
  int v35; // edi
  float *v36; // eax
  bool v37; // bl
  __int16 v38; // fps
  __int16 v39; // fps
  bhkCharacterProxy *v40; // eax
  bhkCharacterProxy *v41; // eax
  bhkCharacterProxy *v42; // eax
  _DWORD *v43; // esi
  _DWORD *v44; // eax
  int v45; // eax
  int *v46; // ecx
  unsigned int v47; // esi
  float v48; // [esp+18h] [ebp-84h]
  float v49; // [esp+1Ch] [ebp-80h]
  float v50; // [esp+20h] [ebp-7Ch]
  int v51; // [esp+20h] [ebp-7Ch]
  float v53; // [esp+34h] [ebp-68h]
  int v54; // [esp+38h] [ebp-64h] BYREF
  double v55; // [esp+3Ch] [ebp-60h]
  float v56; // [esp+44h] [ebp-58h]
  float v57; // [esp+48h] [ebp-54h] BYREF
  float v58; // [esp+4Ch] [ebp-50h]
  float v59; // [esp+50h] [ebp-4Ch]
  float v60; // [esp+54h] [ebp-48h]
  float v61; // [esp+58h] [ebp-44h]
  float v62; // [esp+5Ch] [ebp-40h]
  float v63[3]; // [esp+60h] [ebp-3Ch] BYREF
  float v64; // [esp+6Ch] [ebp-30h] BYREF
  float v65; // [esp+70h] [ebp-2Ch]
  float v66; // [esp+74h] [ebp-28h]
  float v67[9]; // [esp+78h] [ebp-24h] BYREF

  if ( 0.0 != a7 && ((_DWORD)a1[2] & 0x20) == 0 ) /*0x697aa2*/
  {
    v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x154))(a1); /*0x697ab1*/
    v12 = *((_DWORD *)a1 + 0x1F) == 0; /*0x697ab3*/
    v13 = v11[0x15]; /*0x697ab7*/
    v14 = v11[0x16]; /*0x697aba*/
    v15 = v11[0x17]; /*0x697abd*/
    v60 = v13; /*0x697ac0*/
    v61 = v14; /*0x697ac4*/
    v62 = v15; /*0x697ac8*/
    if ( v12 || *((_DWORD *)a1 + 0x20) ) /*0x697ad2*/
    {
      if ( *((_DWORD *)a1 + 0x20) == 1 ) /*0x697c76*/
      {
        v26 = *((unsigned int *)a1 + 0x21); /*0x697c7c*/
        v27 = 0.0; /*0x697c82*/
        v53 = 0.0; /*0x697c86*/
        if ( *(float *)&v26 != 0.0 ) /*0x697c8a*/
        {
          while ( 1 ) /*0x697cb6*/
          {
            sub_696460(a1, a7, (float **)v26); /*0x697ca1*/
            v28 = *(float **)v26; /*0x697ca6*/
            v12 = *(_BYTE *)(*(_DWORD *)v26 + 0x180) == 0; /*0x697ca8*/
            v29 = *(unsigned int *)(v26 + 0x1C); /*0x697caf*/
            LODWORD(v55) = v29; /*0x697cb2*/
            if ( v12 && *((_DWORD *)v28 + 0x21) >= *((_DWORD *)v28 + 0x22) ) /*0x697cc8*/
            {
              v30 = *(_DWORD *)(*(_DWORD *)(v26 + 4) + 0x1C); /*0x697cd1*/
              if ( v30 ) /*0x697cd6*/
              {
                (*(void (__thiscall **)(int, int *, _DWORD))(*(_DWORD *)v30 + 0x88))(v30, &v54, *(_DWORD *)(v26 + 4)); /*0x697ce6*/
                if ( v54 ) /*0x697cee*/
                {
                  v31 = (void (__thiscall ***)(_DWORD, int))v54; /*0x697cf0*/
                  if ( !InterlockedDecrement((volatile LONG *)(v54 + 4)) ) /*0x697cf6*/
                    (**v31)(v31, 1); /*0x697d0c*/
                }
              }
              if ( v27 == 0.0 ) /*0x697d10*/
                a1[0x21] = *(float *)(v26 + 0x1C); /*0x697d15*/
              else
                *(_DWORD *)(LODWORD(v27) + 0x1C) = *(_DWORD *)(v26 + 0x1C); /*0x697d20*/
              v32 = *(_DWORD *)(v26 + 4); /*0x697d23*/
              if ( v32 ) /*0x697d2a*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x697d30*/
                  (**(void (__thiscall ***)(int, int))v32)(v32, 1); /*0x697d46*/
                *(_DWORD *)(v26 + 4) = 0; /*0x697d48*/
              }
              v33 = *(float **)v26; /*0x697d4b*/
              if ( *(_DWORD *)v26 ) /*0x697d4b*/
              {
                if ( !InterlockedDecrement((volatile LONG *)v33 + 1) ) /*0x697d55*/
                {
                  if ( v33 ) /*0x697d61*/
                    (**(void (__thiscall ***)(float *, int))v33)(v33, 1); /*0x697d6b*/
                }
                *(_DWORD *)v26 = 0; /*0x697d6d*/
              }
              v34 = *(_DWORD *)(v26 + 0x14); /*0x697d6f*/
              if ( v34 ) /*0x697d74*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v34 + 4)) ) /*0x697d7a*/
                  (**(void (__thiscall ***)(int, int))v34)(v34, 1); /*0x697d90*/
                *(_DWORD *)(v26 + 0x14) = 0; /*0x697d92*/
              }
              v35 = *(_DWORD *)(v26 + 0x18); /*0x697d95*/
              if ( v35 ) /*0x697d9a*/
              {
                if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) ) /*0x697da0*/
                  (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x697db6*/
                *(_DWORD *)(v26 + 0x18) = 0; /*0x697db8*/
              }
              sub_696C00((int *)v26); /*0x697dbd*/
              FormHeapFree(v26); /*0x697dc3*/
              v29 = LODWORD(v55); /*0x697dc8*/
            }
            else
            {
              v53 = *(float *)&v26; /*0x697dd1*/
            }
            v26 = v29; /*0x697dd7*/
            if ( *(float *)&v29 == 0.0 ) /*0x697dd9*/
              break; /*0x697dd9*/
            v27 = v53; /*0x697c92*/
          }
        }
      }
      goto LABEL_48; /*0x697dd9*/
    }
    MobileObject_GetCharProxy((MobileObject *)a1); /*0x697ae1*/
    if ( *((float *)&v55 + 1) >= (double)*(float *)((*(int (__usercall **)@<eax>(float *@<ecx>, int, int, int, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x174))( /*0x697b21*/
                                                      a1,
                                                      a3,
                                                      a4,
                                                      a2,
                                                      a6,
                                                      a5)
                                                  + 8) )
    {
      v16 = *(_DWORD *)a1; /*0x697b23*/
      v17 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1); /*0x697b2e*/
      (*(void (__thiscall **)(float *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(v16 + 0x208))( /*0x697b53*/
        a1,
        *v17,
        v17[1],
        v17[2],
        0,
        0,
        1);
    }
    y = g_zeroNiPoint3.y; /*0x697b57*/
    x = g_zeroNiPoint3.x; /*0x697b5d*/
    v64 = 0.0; /*0x697b62*/
    z = g_zeroNiPoint3.z; /*0x697b69*/
    v21 = a1[0x17] * a10; /*0x697b6f*/
    v58 = y; /*0x697b73*/
    v57 = x; /*0x697b79*/
    v59 = z; /*0x697b7d*/
    v65 = v21; /*0x697b81*/
    v66 = 0.0; /*0x697b85*/
    if ( MobileObject_GetCharProxy((MobileObject *)a1) ) /*0x697b89*/
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697b99*/
      sub_5E1500((__m128 *)CharProxy, &v57); /*0x697ba0*/
    }
    (*(void (__thiscall **)(float *, _DWORD, float *, int))(*(_DWORD *)a1 + 0x1B4))(a1, LODWORD(a10), &v64, 0xF); /*0x697bbf*/
    v23 = g_zeroNiPoint3.x; /*0x697bc7*/
    v24 = g_zeroNiPoint3.z; /*0x697bcc*/
    v58 = g_zeroNiPoint3.y; /*0x697bd2*/
    v57 = v23; /*0x697bd8*/
    v59 = v24; /*0x697bdc*/
    if ( MobileObject_GetCharProxy((MobileObject *)a1) ) /*0x697be0*/
    {
      v25 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697bf0*/
      sub_5E1500((__m128 *)v25, &v57); /*0x697bf7*/
    }
    v64 = v57 - *(float *)&v55; /*0x697c08*/
    v65 = v58 - *((float *)&v55 + 1); /*0x697c14*/
    v66 = v59 - v56; /*0x697c20*/
    v53 = NiPoint3_Length(&v64) + a1[0x18]; /*0x697c2c*/
    a6 = v53; /*0x697c30*/
    a1[0x18] = v53; /*0x697c34*/
    a5 = unk_B37E88; /*0x697c37*/
    if ( a5 < v53 ) /*0x697c44*/
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x8C))(a1, 1); /*0x697c53*/
    if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 0x210))(a1) ) /*0x697c60*/
    {
LABEL_48:
      if ( SLODWORD(flt_B37ED0[0xC8]) <= 0 && !unk_B3C0BA ) /*0x697dec*/
      {
        v36 = *((float **)a1 + 0x24); /*0x697e00*/
        v37 = *((_DWORD *)a1 + 0x20) != 0; /*0x697e06*/
        LOBYTE(v53) = v37; /*0x697e0b*/
        if ( v36 ) /*0x697e0f*/
        {
          v57 = v36[0x22] - v60; /*0x697e21*/
          v58 = v36[0x23] - v61; /*0x697e2f*/
          v59 = v36[0x24] - v62; /*0x697e3d*/
          if ( !v37 /*0x697e5f*/
            || (double)*(int *)(*((_DWORD *)a1 + 0x1F) + 0x14C) * *(float *)(*((_DWORD *)a1 + 0x1F) + 0x150) < a1[0x19] * a1[0x17] )
          {
            v49 = a1[0x17]; /*0x697e6e*/
            v48 = NiPoint3_Length(&v57); /*0x697e7c*/
            sub_7F3530(*((_DWORD *)a1 + 0x1F), a7, v48, v49, v53); /*0x697e8a*/
          }
          a7 = v59; /*0x697e97*/
          v59 = 0.0; /*0x697e9d*/
          v55 = a7; /*0x697ea5*/
          NiPoint3_Length(&v57); /*0x697ea9*/
          sub_98598A(a5, a6, v38); /*0x697eb4*/
          a7 = a5; /*0x697eb9*/
          v50 = -a7; /*0x697ec6*/
          sub_98598A(v57, a6, v39); /*0x697ed7*/
          a7 = a6; /*0x697edc*/
          sub_7118E0(v67, a7, 0.0, v50); /*0x697ef2*/
          qmemcpy((void *)(*((_DWORD *)a1 + 0x22) + 0x30), v67, 0x24u); /*0x697f09*/
        }
        else if ( MobileObject_GetCharProxy((MobileObject *)a1) ) /*0x697f12*/
        {
          v40 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697f26*/
          sub_5E1500((__m128 *)v40, &v64); /*0x697f2d*/
          v63[0] = v60 - v64; /*0x697f3e*/
          v63[1] = v61 - v65; /*0x697f4a*/
          v63[2] = v62 - v66; /*0x697f56*/
          *(float *)&v55 = NiPoint3_Length(v63); /*0x697f61*/
          if ( !v37 /*0x697f83*/
            || (double)*(int *)(*((_DWORD *)a1 + 0x1F) + 0x14C) * *(float *)(*((_DWORD *)a1 + 0x1F) + 0x150) < a1[0x19] * a1[0x17] )
          {
            sub_7F3530(*((_DWORD *)a1 + 0x1F), a7, *(float *)&v55, a1[0x17], v53); /*0x697fa9*/
          }
          if ( TESForm::IsActor(*((TESForm **)a1 + 0x1F)) ) /*0x697fb1*/
          {
            *((_DWORD *)a1 + 0x20) = 2; /*0x697fc1*/
            v41 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697fcb*/
            bhkCharacterProxy_GetCollisionFilterInfo(v41, &a7); /*0x697fd2*/
            v51 = LODWORD(a7) | 0x4000; /*0x697fe0*/
            v42 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x697fe3*/
            sub_694FC0(v42, v51); /*0x697fea*/
          }
        }
      }
      v43 = *((_DWORD **)a1 + 0x25); /*0x697fef*/
      if ( v43 ) /*0x697ff7*/
      {
        v44 = (_DWORD *)(*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x174))(a1); /*0x698004*/
        v43[0x22] = *v44; /*0x698008*/
        v43[0x23] = v44[1]; /*0x698011*/
        v43[0x24] = v44[2]; /*0x69801a*/
      }
      v45 = *((_DWORD *)a1 + 0x1F); /*0x698020*/
      if ( !*(_BYTE *)(v45 + 0x180) && *(_DWORD *)(v45 + 0x84) >= *(_DWORD *)(v45 + 0x88) /*0x698057*/
        || *((_DWORD *)a1 + 0x20) == 1 && a1[0x1E] - a1[0x28] > dbl_A30E48 )
      {
        v46 = *((int **)a1 + 0x27); /*0x698059*/
        if ( v46 ) /*0x698061*/
        {
          sub_6B7240(v46); /*0x698063*/
          v47 = *((_DWORD *)a1 + 0x27); /*0x698068*/
          if ( v47 ) /*0x698070*/
          {
            sub_6B73E0(*((_DWORD **)a1 + 0x27)); /*0x698074*/
            FormHeapFree(v47); /*0x69807a*/
            a1[0x27] = 0.0; /*0x698082*/
          }
        }
        if ( !*((_DWORD *)a1 + 0x21) ) /*0x69808c*/
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x8C))(a1, 1); /*0x6980a2*/
      }
    }
  }
}
