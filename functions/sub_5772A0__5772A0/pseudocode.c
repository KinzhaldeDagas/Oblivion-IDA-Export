_DWORD *__thiscall sub_5772A0(_DWORD *this, int a2, float *a3)
{
  _DWORD *v4; // edi
  int v5; // ecx
  _DWORD *v6; // ebp
  int v7; // eax
  float *v8; // eax
  _DWORD *v9; // ebx
  float *v10; // eax
  int i; // edi
  int v12; // eax
  _DWORD *v13; // ecx
  _DWORD *result; // eax
  float *v15; // eax
  int j; // ebp
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // edi
  float *v20; // ecx
  float *v21; // eax
  int v22; // eax
  char v23; // dl
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // edi
  int v32; // eax
  bool v33; // zf
  int v34; // ecx
  int v35; // eax
  int v36; // esi

  v4 = (_DWORD *)a2; /*0x5772c9*/
  v5 = *(this + 4); /*0x5772cd*/
  v6 = 0; /*0x5772d5*/
  if ( v5 + *(_DWORD *)(a2 + 0x24) <= *(this + 0xA) ) /*0x5772da*/
  {
    if ( *(_DWORD *)(a2 + 0x1C) && **(_BYTE **)(a2 + 0x1C) ) /*0x57755e*/
    {
      if ( (_BYTE)a3 ) /*0x5775fb*/
      {
        *(_DWORD *)(a2 + 0x34) = 0; /*0x5775fd*/
        v28 = (_DWORD *)*(this + 1); /*0x577600*/
        for ( *(this + 4) = v4[9]; v28; *(this + 4) += v29[9] ) /*0x57760b*/
        {
          v29 = (_DWORD *)v28[2]; /*0x577613*/
          v28 = (_DWORD *)*v28; /*0x57761b*/
          v29[0xD] = *(this + 4) + v29[0xC]; /*0x57761d*/
        }
      }
      else
      {
        *(_DWORD *)(a2 + 0x34) = v5; /*0x57762c*/
        *(this + 4) += v4[9]; /*0x577632*/
      }
    }
    else
    {
      v22 = *(this + 3); /*0x577567*/
      v23 = 0; /*0x57756a*/
      if ( !v22 ) /*0x57756e*/
        *(this + 6) = *(_DWORD *)(4 * *(_DWORD *)a2 + 0xB12E08); /*0x577579*/
      if ( (_BYTE)a3 ) /*0x577581*/
      {
        if ( v22 ) /*0x577585*/
        {
          v24 = *(_DWORD **)(*(this + 1) + 8); /*0x57758a*/
          if ( v24 ) /*0x57758f*/
          {
            if ( *v4 != *v24 ) /*0x577595*/
              v23 = 1; /*0x577597*/
          }
        }
        v4[0xD] = v4[0xC]; /*0x57759c*/
        v25 = (_DWORD *)*(this + 1); /*0x57759f*/
        for ( *(this + 4) = v4[9]; v25; *(this + 4) += v26[9] ) /*0x5775aa*/
        {
          v26 = (_DWORD *)v25[2]; /*0x5775b3*/
          v25 = (_DWORD *)*v25; /*0x5775bb*/
          v26[0xD] = *(this + 4) + v26[0xC]; /*0x5775bd*/
        }
      }
      else
      {
        if ( v22 ) /*0x5775ce*/
        {
          v27 = *(_DWORD **)(*(this + 2) + 8); /*0x5775d3*/
          if ( v27 ) /*0x5775d8*/
          {
            if ( *v4 != *v27 ) /*0x5775de*/
              v23 = 1; /*0x5775e0*/
          }
        }
        v4[0xD] = v5 + v4[0xC]; /*0x5775e7*/
        *(this + 4) += v4[9]; /*0x5775ed*/
      }
      if ( !v23 ) /*0x5775f2*/
        goto LABEL_60; /*0x5775f2*/
    }
    v30 = *(this + 6); /*0x577638*/
    if ( v30 <= v4[0xA] ) /*0x57763d*/
      v30 = v4[0xA]; /*0x57763f*/
    *(this + 6) = v30; /*0x577641*/
LABEL_60:
    v31 = v4[0xB]; /*0x577644*/
    v32 = *(this + 7); /*0x577647*/
    if ( v32 <= v31 ) /*0x57764c*/
      v32 = v31; /*0x57764e*/
    v33 = (_BYTE)a3 == 0; /*0x577650*/
    *(this + 7) = v32; /*0x577655*/
    if ( v33 ) /*0x577658*/
      NiTPointerList__AddTail((BSTextureManager *)this, (void **)&a2); /*0x57766f*/
    else
      NiTList_AddHead(this, &a2); /*0x577661*/
    v34 = *(this + 0xC); /*0x577674*/
    v35 = *(_DWORD *)(v34 + 0x10); /*0x577677*/
    v36 = *(this + 4); /*0x57767a*/
    if ( v35 <= v36 ) /*0x57767f*/
      v35 = v36; /*0x577681*/
    *(_DWORD *)(v34 + 0x10) = v35; /*0x577683*/
    return 0; /*0x577686*/
  }
  if ( *(_BYTE *)(a2 + 4) == 0x20 ) /*0x5772e4*/
  {
    sub_577120((int *)a2, 0); /*0x577502*/
    v21 = (float *)FormHeapAlloc(0x34u); /*0x577509*/
    a3 = v21; /*0x577511*/
    if ( v21 ) /*0x57751f*/
    {
      result = sub_577710(v21, *(this + 0xC), (int)v4, 0, *(this + 0xA)); /*0x57752d*/
      result[6] = *(_DWORD *)(4 * *v4 + 0xB12E08); /*0x57753b*/
    }
    else
    {
      *(_DWORD *)0x18 = *(_DWORD *)(4 * *v4 + 0xB12E08); /*0x57754e*/
      return 0; /*0x57754c*/
    }
  }
  else
  {
    v7 = *(this + 2); /*0x5772ea*/
    if ( v7 ) /*0x5772ef*/
    {
      while ( *(_BYTE *)(*(_DWORD *)(v7 + 8) + 4) != 0x20 ) /*0x5772f8*/
      {
        v7 = *(_DWORD *)(v7 + 4); /*0x5772fa*/
        if ( !v7 ) /*0x5772ff*/
          goto LABEL_6; /*0x5772ff*/
      }
      v10 = (float *)FormHeapAlloc(0x34u); /*0x577339*/
      a3 = v10; /*0x577341*/
      if ( v10 ) /*0x57734b*/
        v6 = sub_577710(v10, *(this + 0xC), (int)v4, 0, *(this + 0xA)); /*0x57735e*/
      v6[6] = *(_DWORD *)(4 * *v4 + 0xB12E08); /*0x577373*/
      for ( i = sub_5889B0(this); *(this + 3); *(this + 4) -= *(_DWORD *)(i + 0x24) ) /*0x57737d*/
      {
        if ( *(_BYTE *)(i + 4) == 0x20 ) /*0x577388*/
          break; /*0x577388*/
        sub_5772A0(v6, i, (float *)1); /*0x57738f*/
        v12 = *(this + 2); /*0x577394*/
        v13 = *(_DWORD **)(v12 + 4); /*0x577397*/
        *(this + 2) = v13; /*0x57739c*/
        if ( v13 ) /*0x57739f*/
          *v13 = 0; /*0x5773a1*/
        else
          *(this + 1) = 0; /*0x5773a5*/
        i = *(_DWORD *)(v12 + 8); /*0x5773aa*/
        (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v12); /*0x5773b3*/
        --*(this + 3); /*0x5773b5*/
      }
      if ( i ) /*0x5773c6*/
      {
        FormHeapFree(*(_DWORD *)(i + 0x1C)); /*0x5773cc*/
        *(_DWORD *)(i + 0x1C) = 0; /*0x5773d2*/
        *(_WORD *)(i + 0x22) = 0; /*0x5773d5*/
        *(_WORD *)(i + 0x20) = 0; /*0x5773d9*/
        FormHeapFree(i); /*0x5773dd*/
      }
      return v6; /*0x5773e5*/
    }
    else
    {
LABEL_6:
      v8 = (float *)FormHeapAlloc(0x34u); /*0x577301*/
      a3 = v8; /*0x57730b*/
      if ( v8 ) /*0x577319*/
        v9 = sub_577710(v8, *(this + 0xC), (int)v4, 0, *(this + 0xA)); /*0x577330*/
      else
        v9 = 0; /*0x5773fd*/
      v9[6] = *(_DWORD *)(4 * *v4 + 0xB12E08); /*0x577411*/
      v15 = (float *)FormHeapAlloc(0x38u); /*0x577414*/
      a3 = v15; /*0x57741c*/
      if ( v15 ) /*0x57742a*/
        a3 = sub_576F30( /*0x57747d*/
               v15,
               0,
               0x2D,
               SLODWORD(flt_A68A90),
               SLODWORD(flt_A68A8C),
               SLODWORD(flt_A68A88),
               COERCE_INT(1.0),
               1);
      else
        a3 = 0; /*0x577483*/
      for ( j = 0; *(this + 3); j += *(_DWORD *)(v19 + 0x24) ) /*0x577491*/
      {
        if ( *(this + 4) + *((_DWORD *)a3 + 9) - j <= *(this + 0xA) ) /*0x5774a5*/
          break; /*0x5774a5*/
        v17 = *(this + 2); /*0x5774a7*/
        v18 = *(_DWORD **)(v17 + 4); /*0x5774aa*/
        *(this + 2) = v18; /*0x5774af*/
        if ( v18 ) /*0x5774b2*/
          *v18 = 0; /*0x5774b4*/
        else
          *(this + 1) = 0; /*0x5774bc*/
        v19 = *(_DWORD *)(v17 + 8); /*0x5774c5*/
        (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v17); /*0x5774ce*/
        --*(this + 3); /*0x5774d0*/
        sub_5772A0(v9, v19, (float *)1); /*0x5774d9*/
      }
      v20 = a3; /*0x5774e7*/
      *(this + 4) -= j; /*0x5774eb*/
      sub_5772A0(this, (int)v20, 0); /*0x5774f3*/
      return v9; /*0x5774f8*/
    }
  }
  return result; /*0x5773e7*/
}
