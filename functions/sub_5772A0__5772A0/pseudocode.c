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

  v4 = (_DWORD *)a2;
  v5 = *(this + 4);
  v6 = 0;
  if ( v5 + *(_DWORD *)(a2 + 0x24) <= *(this + 0xA) )
  {
    if ( *(_DWORD *)(a2 + 0x1C) && **(_BYTE **)(a2 + 0x1C) )
    {
      if ( (_BYTE)a3 )
      {
        *(_DWORD *)(a2 + 0x34) = 0;
        v28 = (_DWORD *)*(this + 1);
        for ( *(this + 4) = v4[9]; v28; *(this + 4) += v29[9] )
        {
          v29 = (_DWORD *)v28[2];
          v28 = (_DWORD *)*v28;
          v29[0xD] = *(this + 4) + v29[0xC];
        }
      }
      else
      {
        *(_DWORD *)(a2 + 0x34) = v5;
        *(this + 4) += v4[9];
      }
    }
    else
    {
      v22 = *(this + 3);
      v23 = 0;
      if ( !v22 )
        *(this + 6) = *(_DWORD *)(4 * *(_DWORD *)a2 + 0xB12E08);
      if ( (_BYTE)a3 )
      {
        if ( v22 )
        {
          v24 = *(_DWORD **)(*(this + 1) + 8);
          if ( v24 )
          {
            if ( *v4 != *v24 )
              v23 = 1;
          }
        }
        v4[0xD] = v4[0xC];
        v25 = (_DWORD *)*(this + 1);
        for ( *(this + 4) = v4[9]; v25; *(this + 4) += v26[9] )
        {
          v26 = (_DWORD *)v25[2];
          v25 = (_DWORD *)*v25;
          v26[0xD] = *(this + 4) + v26[0xC];
        }
      }
      else
      {
        if ( v22 )
        {
          v27 = *(_DWORD **)(*(this + 2) + 8);
          if ( v27 )
          {
            if ( *v4 != *v27 )
              v23 = 1;
          }
        }
        v4[0xD] = v5 + v4[0xC];
        *(this + 4) += v4[9];
      }
      if ( !v23 )
        goto LABEL_60;
    }
    v30 = *(this + 6);
    if ( v30 <= v4[0xA] )
      v30 = v4[0xA];
    *(this + 6) = v30;
LABEL_60:
    v31 = v4[0xB];
    v32 = *(this + 7);
    if ( v32 <= v31 )
      v32 = v31;
    v33 = (_BYTE)a3 == 0;
    *(this + 7) = v32;
    if ( v33 )
      sub_5B1E20((BSTextureManager *)this, (void **)&a2);
    else
      sub_6AA320(this, &a2);
    v34 = *(this + 0xC);
    v35 = *(_DWORD *)(v34 + 0x10);
    v36 = *(this + 4);
    if ( v35 <= v36 )
      v35 = v36;
    *(_DWORD *)(v34 + 0x10) = v35;
    return 0;
  }
  if ( *(_BYTE *)(a2 + 4) == 0x20 )
  {
    sub_577120((int *)a2, 0);
    v21 = (float *)FormHeapAlloc(0x34u);
    a3 = v21;
    if ( v21 )
    {
      result = sub_577710(v21, *(this + 0xC), (int)v4, 0, *(this + 0xA));
      result[6] = *(_DWORD *)(4 * *v4 + 0xB12E08);
    }
    else
    {
      *(_DWORD *)0x18 = *(_DWORD *)(4 * *v4 + 0xB12E08);
      return 0;
    }
  }
  else
  {
    v7 = *(this + 2);
    if ( v7 )
    {
      while ( *(_BYTE *)(*(_DWORD *)(v7 + 8) + 4) != 0x20 )
      {
        v7 = *(_DWORD *)(v7 + 4);
        if ( !v7 )
          goto LABEL_6;
      }
      v10 = (float *)FormHeapAlloc(0x34u);
      a3 = v10;
      if ( v10 )
        v6 = sub_577710(v10, *(this + 0xC), (int)v4, 0, *(this + 0xA));
      v6[6] = *(_DWORD *)(4 * *v4 + 0xB12E08);
      for ( i = sub_5889B0(this); *(this + 3); *(this + 4) -= *(_DWORD *)(i + 0x24) )
      {
        if ( *(_BYTE *)(i + 4) == 0x20 )
          break;
        sub_5772A0(v6, i, (float *)1);
        v12 = *(this + 2);
        v13 = *(_DWORD **)(v12 + 4);
        *(this + 2) = v13;
        if ( v13 )
          *v13 = 0;
        else
          *(this + 1) = 0;
        i = *(_DWORD *)(v12 + 8);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v12);
        --*(this + 3);
      }
      if ( i )
      {
        FormHeapFree(*(_DWORD *)(i + 0x1C));
        *(_DWORD *)(i + 0x1C) = 0;
        *(_WORD *)(i + 0x22) = 0;
        *(_WORD *)(i + 0x20) = 0;
        FormHeapFree(i);
      }
      return v6;
    }
    else
    {
LABEL_6:
      v8 = (float *)FormHeapAlloc(0x34u);
      a3 = v8;
      if ( v8 )
        v9 = sub_577710(v8, *(this + 0xC), (int)v4, 0, *(this + 0xA));
      else
        v9 = 0;
      v9[6] = *(_DWORD *)(4 * *v4 + 0xB12E08);
      v15 = (float *)FormHeapAlloc(0x38u);
      a3 = v15;
      if ( v15 )
        a3 = sub_576F30(
               v15,
               0,
               0x2D,
               SLODWORD(flt_A68A90),
               SLODWORD(flt_A68A8C),
               SLODWORD(flt_A68A88),
               COERCE_INT(1.0),
               1);
      else
        a3 = 0;
      for ( j = 0; *(this + 3); j += *(_DWORD *)(v19 + 0x24) )
      {
        if ( *(this + 4) + *((_DWORD *)a3 + 9) - j <= *(this + 0xA) )
          break;
        v17 = *(this + 2);
        v18 = *(_DWORD **)(v17 + 4);
        *(this + 2) = v18;
        if ( v18 )
          *v18 = 0;
        else
          *(this + 1) = 0;
        v19 = *(_DWORD *)(v17 + 8);
        (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v17);
        --*(this + 3);
        sub_5772A0(v9, v19, (float *)1);
      }
      v20 = a3;
      *(this + 4) -= j;
      sub_5772A0(this, (int)v20, 0);
      return v9;
    }
  }
  return result;
}
