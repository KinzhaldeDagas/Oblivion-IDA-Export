char __thiscall sub_6E9410(NiTriBasedGeomData *this, _DWORD *a2)
{
  _DWORD *v3; // ebp
  unsigned int *v4; // ebx
  unsigned int *v5; // eax
  NiTArray_NiTexturingPropertyMap *v6; // edi
  unsigned int v7; // ecx
  bool v8; // zf
  int v9; // ebp
  _DWORD *v10; // esi
  _DWORD *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // eax
  unsigned int *v17; // eax
  _DWORD *v18; // ecx
  bool v19; // cf
  NiTArray_NiTexturingPropertyMap *v20; // edi
  unsigned int v21; // edx
  unsigned int *v22; // eax
  unsigned int *v23; // ebp
  unsigned int v24; // edx
  int v25; // esi
  _DWORD *v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  _DWORD *v30; // esi
  int v31; // ebx
  _DWORD *v32; // edi
  _DWORD *v33; // edx
  _DWORD *v34; // ebx
  int v35; // eax
  int v36; // esi
  int v37; // edi
  int v38; // esi
  unsigned int *v39; // ebx
  _DWORD *v40; // esi
  int v41; // ebp
  _DWORD *v42; // edi
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // edi
  unsigned int v47; // eax
  int v48; // ecx
  int v50; // [esp-4h] [ebp-48h]
  unsigned int v51; // [esp+1Ch] [ebp-28h]
  unsigned int i; // [esp+1Ch] [ebp-28h]
  unsigned int v53; // [esp+1Ch] [ebp-28h]
  int v55; // [esp+24h] [ebp-20h] BYREF
  _DWORD *v56; // [esp+28h] [ebp-1Ch]
  unsigned int *v57; // [esp+2Ch] [ebp-18h] BYREF
  unsigned __int16 *v58; // [esp+30h] [ebp-14h]
  _DWORD *v59; // [esp+34h] [ebp-10h] BYREF
  unsigned int v60; // [esp+40h] [ebp-4h]

  sub_715E40(this, (int)a2); /*0x6e9442*/
  NiTMap_GetAt((_DWORD *)*a2, (int)this, &v55); /*0x6e944f*/
  v51 = 0; /*0x6e9459*/
  if ( *((_WORD *)this + 0x27) ) /*0x6e9454*/
  {
    v58 = (unsigned __int16 *)(v55 + 0x44); /*0x6e946e*/
    do /*0x6e95dc*/
    {
      v4 = 0; /*0x6e9480*/
      v59 = *(_DWORD **)(*((_DWORD *)this + 0x12) + 4 * v51); /*0x6e9484*/
      v3 = v59; /*0x6e947d*/
      if ( v59 ) /*0x6e9488*/
      {
        v5 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6e9490*/
        if ( v5 ) /*0x6e949a*/
        {
          *v5 = 0; /*0x6e949c*/
          v5[1] = 0; /*0x6e949e*/
          v5[2] = 0; /*0x6e94a1*/
          v4 = v5; /*0x6e94a4*/
        }
        v6 = (NiTArray_NiTexturingPropertyMap *)v58; /*0x6e94a6*/
        v7 = v58[4]; /*0x6e94aa*/
        v60 = 0xFFFFFFFF; /*0x6e94b0*/
        v57 = v4; /*0x6e94b8*/
        if ( v51 >= v7 ) /*0x6e94bc*/
          NiTArray_SetSize(v58, v51 + v58[7]); /*0x6e94c7*/
        NiTArray_SetAt(v6, v51, &v57); /*0x6e94d4*/
        v8 = v3[2] == 0; /*0x6e94d9*/
        v57 = 0; /*0x6e94dd*/
        if ( !v8 ) /*0x6e94e5*/
        {
          do /*0x6e9594*/
          {
            v9 = *(_DWORD *)(*v59 + 4 * (_DWORD)v57); /*0x6e94fe*/
            v10 = (_DWORD *)*a2; /*0x6e9501*/
            v11 = *(_DWORD **)(v10[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 4))(*a2, v9)); /*0x6e9510*/
            if ( v11 ) /*0x6e9515*/
            {
              while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v10 + 8))(v10, v9, v11[1]) ) /*0x6e9527*/
              {
                v11 = (_DWORD *)*v11; /*0x6e9529*/
                if ( !v11 ) /*0x6e952d*/
                  goto LABEL_12; /*0x6e952d*/
              }
              v14 = v4[1]; /*0x6e953f*/
              v15 = v11[2]; /*0x6e9545*/
              if ( v4[2] == v14 ) /*0x6e9548*/
              {
                if ( v14 ) /*0x6e954c*/
                  v16 = 2 * v14; /*0x6e954e*/
                else
                  v16 = 1; /*0x6e9552*/
                sub_6E8CA0(v4, v16); /*0x6e955a*/
              }
              *(_DWORD *)(*v4 + 4 * v4[2]) = v15; /*0x6e9564*/
            }
            else
            {
LABEL_12:
              v12 = v4[1]; /*0x6e952f*/
              if ( v4[2] == v12 ) /*0x6e9535*/
              {
                if ( v12 ) /*0x6e9539*/
                  v13 = 2 * v12; /*0x6e953b*/
                else
                  v13 = 1; /*0x6e9569*/
                sub_6E8CA0(v4, v13); /*0x6e9571*/
              }
              *(_DWORD *)(*v4 + 4 * v4[2]) = v9; /*0x6e957b*/
            }
            v17 = v57; /*0x6e957e*/
            v18 = v59; /*0x6e9582*/
            ++v4[2]; /*0x6e9586*/
            v17 = (unsigned int *)((char *)v17 + 1); /*0x6e958a*/
            v19 = (unsigned int)v17 < v18[2]; /*0x6e958d*/
            v57 = v17; /*0x6e9590*/
          }
          while ( v19 ); /*0x6e9594*/
        }
      }
      else
      {
        v20 = (NiTArray_NiTexturingPropertyMap *)v58; /*0x6e959c*/
        v21 = v58[4]; /*0x6e95a0*/
        v59 = 0; /*0x6e95a6*/
        if ( v51 >= v21 ) /*0x6e95aa*/
          NiTArray_SetSize(v58, v51 + v58[7]); /*0x6e95b5*/
        NiTArray_SetAt(v20, v51, &v59); /*0x6e95c2*/
      }
      ++v51; /*0x6e95d8*/
    }
    while ( v51 < *((unsigned __int16 *)this + 0x27) ); /*0x6e95dc*/
  }
  for ( i = 0; i < *((unsigned __int16 *)this + 0x2F); ++i ) /*0x6e95e6*/
  {
    v59 = *(_DWORD **)(*((_DWORD *)this + 0x16) + 4 * i); /*0x6e9610*/
    if ( v59 ) /*0x6e9614*/
    {
      v22 = (unsigned int *)FormHeapAlloc(0xCu); /*0x6e961c*/
      if ( v22 ) /*0x6e9626*/
      {
        *v22 = 0; /*0x6e962a*/
        v22[1] = 0; /*0x6e962c*/
        v22[2] = 0; /*0x6e962f*/
        v23 = v22; /*0x6e9632*/
      }
      else
      {
        v23 = 0; /*0x6e9636*/
      }
      v24 = *(unsigned __int16 *)(v55 + 0x5C); /*0x6e963e*/
      v25 = v55 + 0x54; /*0x6e9646*/
      v60 = 0xFFFFFFFF; /*0x6e964b*/
      if ( i >= v24 ) /*0x6e9653*/
        NiTArray_SetSize((unsigned __int16 *)(v55 + 0x54), i + *(unsigned __int16 *)(v55 + 0x62)); /*0x6e965e*/
      if ( i < *(unsigned __int16 *)(v25 + 0xA) ) /*0x6e9669*/
      {
        if ( v23 ) /*0x6e967f*/
        {
          if ( !*(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) ) /*0x6e9684*/
            ++*(_WORD *)(v25 + 0xC); /*0x6e9689*/
        }
        else if ( *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) ) /*0x6e9693*/
        {
          --*(_WORD *)(v25 + 0xC); /*0x6e9698*/
        }
      }
      else
      {
        *(_WORD *)(v25 + 0xA) = i + 1; /*0x6e9670*/
        if ( v23 ) /*0x6e9674*/
          ++*(_WORD *)(v25 + 0xC); /*0x6e9676*/
      }
      v26 = v59; /*0x6e96a1*/
      *(_DWORD *)(*(_DWORD *)(v25 + 4) + 4 * i) = v23; /*0x6e96a5*/
      v8 = v26[2] == 0; /*0x6e96a8*/
      v58 = 0; /*0x6e96ab*/
      if ( !v8 ) /*0x6e96af*/
      {
        do /*0x6e97cd*/
        {
          v57 = *(unsigned int **)(*v59 + 4 * (_DWORD)v58); /*0x6e96c4*/
          v27 = FormHeapAlloc(8u); /*0x6e96c8*/
          if ( v27 ) /*0x6e96d4*/
          {
            *(_DWORD *)(v27 + 4) = 0; /*0x6e96d6*/
            v56 = (_DWORD *)v27; /*0x6e96d9*/
          }
          else
          {
            v56 = 0; /*0x6e96df*/
          }
          v28 = v23[1]; /*0x6e96e3*/
          if ( v23[2] == v28 ) /*0x6e96e9*/
          {
            if ( v28 ) /*0x6e96ed*/
              v29 = 2 * v28; /*0x6e96ef*/
            else
              v29 = 1; /*0x6e96f3*/
            sub_6E8CA0(v23, v29); /*0x6e96fb*/
          }
          *(_DWORD *)(*v23 + 4 * v23[2]++) = v56; /*0x6e970a*/
          v30 = (_DWORD *)*a2; /*0x6e9715*/
          v31 = *v57; /*0x6e971b*/
          v32 = *(_DWORD **)(v30[2] + 4 * (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*a2 + 4))(*a2, *v57)); /*0x6e972a*/
          if ( v32 ) /*0x6e972f*/
          {
            while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v30 + 8))(v30, v31, v32[1]) ) /*0x6e9741*/
            {
              v32 = (_DWORD *)*v32; /*0x6e9747*/
              if ( !v32 ) /*0x6e974b*/
                goto LABEL_57; /*0x6e974b*/
            }
            v34 = v56; /*0x6e97d8*/
            *v56 = v32[2]; /*0x6e97dc*/
          }
          else
          {
LABEL_57:
            v33 = v56; /*0x6e974d*/
            *v56 = *v57; /*0x6e9757*/
            v34 = v33; /*0x6e9759*/
          }
          v35 = (*(int (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)v57[1] + 0x18))(v57[1], a2); /*0x6e976c*/
          v36 = v34[1]; /*0x6e976e*/
          v37 = v35; /*0x6e9771*/
          if ( v36 != v35 ) /*0x6e9775*/
          {
            if ( v36 ) /*0x6e9779*/
            {
              if ( !InterlockedDecrement((volatile LONG *)(v36 + 4)) ) /*0x6e977f*/
                (**(void (__thiscall ***)(int, int))v36)(v36, 1); /*0x6e9795*/
            }
            v34[1] = v37; /*0x6e9799*/
            if ( v37 ) /*0x6e979c*/
              InterlockedIncrement((volatile LONG *)(v37 + 4)); /*0x6e97a2*/
          }
          (*(void (__thiscall **)(unsigned int, _DWORD *))(*(_DWORD *)v57[1] + 0x38))(v57[1], a2); /*0x6e97b9*/
          v19 = (unsigned int)v58 + 1 < v59[2]; /*0x6e97c6*/
          v58 = (unsigned __int16 *)((char *)v58 + 1); /*0x6e97c9*/
        }
        while ( v19 ); /*0x6e97cd*/
      }
    }
    else
    {
      v38 = v55 + 0x54; /*0x6e97eb*/
      if ( i >= *(unsigned __int16 *)(v55 + 0x5C) ) /*0x6e97f0*/
        NiTArray_SetSize((unsigned __int16 *)(v55 + 0x54), i + *(unsigned __int16 *)(v55 + 0x62)); /*0x6e97fb*/
      if ( i < *(unsigned __int16 *)(v38 + 0xA) ) /*0x6e9806*/
      {
        if ( *(_DWORD *)(*(_DWORD *)(v38 + 4) + 4 * i) ) /*0x6e9814*/
          --*(_WORD *)(v38 + 0xC); /*0x6e981a*/
      }
      else
      {
        *(_WORD *)(v38 + 0xA) = i + 1; /*0x6e980b*/
      }
      *(_DWORD *)(*(_DWORD *)(v38 + 4) + 4 * i) = 0; /*0x6e9823*/
    }
  }
  v53 = 0; /*0x6e984d*/
  if ( *((_DWORD *)this + 0x1B) ) /*0x6e9849*/
  {
    v39 = (unsigned int *)(v55 + 0x64); /*0x6e985f*/
    do /*0x6e990d*/
    {
      v40 = (_DWORD *)*a2; /*0x6e986d*/
      v41 = *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v53); /*0x6e9873*/
      v42 = *(_DWORD **)(v40[2] + 4 * (*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)*a2 + 4))(*a2, v41)); /*0x6e9883*/
      if ( v42 ) /*0x6e9888*/
      {
        while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v40 + 8))(v40, v41, v42[1]) ) /*0x6e98a0*/
        {
          v42 = (_DWORD *)*v42; /*0x6e98a2*/
          if ( !v42 ) /*0x6e98a6*/
            goto LABEL_80; /*0x6e98a6*/
        }
        v45 = v39[1]; /*0x6e98b8*/
        v46 = v42[2]; /*0x6e98be*/
        if ( v39[2] == v45 ) /*0x6e98c1*/
        {
          if ( v45 ) /*0x6e98c5*/
            v47 = 2 * v45; /*0x6e98c7*/
          else
            v47 = 1; /*0x6e98cb*/
          sub_6E8CA0(v39, v47); /*0x6e98d3*/
        }
        *(_DWORD *)(*v39 + 4 * v39[2]) = v46; /*0x6e98dd*/
      }
      else
      {
LABEL_80:
        v43 = v39[1]; /*0x6e98a8*/
        if ( v39[2] == v43 ) /*0x6e98ae*/
        {
          if ( v43 ) /*0x6e98b2*/
            v44 = 2 * v43; /*0x6e98b4*/
          else
            v44 = 1; /*0x6e98e2*/
          sub_6E8CA0(v39, v44); /*0x6e98ea*/
        }
        *(_DWORD *)(*v39 + 4 * v39[2]) = v41; /*0x6e98f4*/
      }
      ++v39[2]; /*0x6e98ff*/
      ++v53; /*0x6e9909*/
    }
    while ( v53 < *((_DWORD *)this + 0x1B) ); /*0x6e990d*/
  }
  v48 = v55; /*0x6e9913*/
  v50 = *(_DWORD *)(v55 + 0x3C); /*0x6e991a*/
  *(_DWORD *)(v55 + 0x3C) = 0xFFFFFFFF; /*0x6e991b*/
  return sub_6E8DD0(v48, v50); /*0x6e9927*/
}
