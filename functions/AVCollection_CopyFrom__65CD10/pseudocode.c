void __thiscall AVCollection_CopyFrom(unsigned int **this, int *a2)
{
  int *v3; // esi
  int v4; // eax
  double v5; // st7
  int v6; // eax
  double v7; // st7
  _DWORD *v8; // eax
  float *v9; // eax
  int v10; // ecx
  float *v11; // eax
  int v12; // ecx
  float *v13; // eax
  int v14; // ecx
  float *v15; // eax
  int v16; // ecx
  float *v17; // eax
  int v18; // ecx
  float *v19; // eax
  int v20; // ecx
  float *v21; // eax
  int v22; // ecx
  float *v23; // eax
  int v24; // ecx
  float *v25; // eax
  int v26; // ecx
  float *v27; // eax
  int v28; // ecx
  float *v29; // eax
  int v30; // ecx
  float *v31; // eax
  int v32; // ecx
  float *v33; // eax
  int v34; // ecx
  float *v35; // eax
  int v36; // ecx
  float *v37; // eax
  int v38; // ecx
  float *v39; // eax
  int v40; // ecx
  float *v41; // eax
  int v42; // ecx
  float *v43; // eax
  int v44; // ecx
  int v45; // edi
  float *v46; // eax
  float v47; // [esp+10h] [ebp+4h]
  float v48; // [esp+10h] [ebp+4h]

  AVCollection_ClearArrayAndList(this);
  v3 = a2;
  if ( a2 )
  {
    v4 = a2[3];
    if ( v4 )
      v5 = *(float *)(v4 + 4);
    else
      v5 = 0.0;
    v47 = v5;
    AVCollection_ModAV(this, 0xA, v47);
    v6 = v3[2];
    if ( v6 )
      v7 = *(float *)(v6 + 4);
    else
      v7 = 0.0;
    v48 = v7;
    AVCollection_ModAV(this, 9, v48);
    v8 = (_DWORD *)v3[4];
    if ( v8 )
    {
      if ( *v8 )
      {
        v9 = (float *)FormHeapAlloc(8u);
        if ( v9 )
        {
          v10 = *(_DWORD *)v3[4];
          *(_BYTE *)v9 = *(_BYTE *)v10;
          v9[1] = *(float *)(v10 + 4);
        }
        else
        {
          v9 = 0;
        }
        AVCollection_Add(this, v9);
      }
      if ( *(_DWORD *)(v3[4] + 4) )
      {
        v11 = (float *)FormHeapAlloc(8u);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v3[4] + 4);
          *(_BYTE *)v11 = *(_BYTE *)v12;
          v11[1] = *(float *)(v12 + 4);
        }
        else
        {
          v11 = 0;
        }
        AVCollection_Add(this, v11);
      }
      if ( *(_DWORD *)(v3[4] + 8) )
      {
        v13 = (float *)FormHeapAlloc(8u);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v3[4] + 8);
          *(_BYTE *)v13 = *(_BYTE *)v14;
          v13[1] = *(float *)(v14 + 4);
        }
        else
        {
          v13 = 0;
        }
        AVCollection_Add(this, v13);
      }
      if ( *(_DWORD *)(v3[4] + 0xC) )
      {
        v15 = (float *)FormHeapAlloc(8u);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v3[4] + 0xC);
          *(_BYTE *)v15 = *(_BYTE *)v16;
          v15[1] = *(float *)(v16 + 4);
        }
        else
        {
          v15 = 0;
        }
        AVCollection_Add(this, v15);
      }
      if ( *(_DWORD *)(v3[4] + 0x10) )
      {
        v17 = (float *)FormHeapAlloc(8u);
        if ( v17 )
        {
          v18 = *(_DWORD *)(v3[4] + 0x10);
          *(_BYTE *)v17 = *(_BYTE *)v18;
          v17[1] = *(float *)(v18 + 4);
        }
        else
        {
          v17 = 0;
        }
        AVCollection_Add(this, v17);
      }
      if ( *(_DWORD *)(v3[4] + 0x14) )
      {
        v19 = (float *)FormHeapAlloc(8u);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v3[4] + 0x14);
          *(_BYTE *)v19 = *(_BYTE *)v20;
          v19[1] = *(float *)(v20 + 4);
        }
        else
        {
          v19 = 0;
        }
        AVCollection_Add(this, v19);
      }
      if ( *(_DWORD *)(v3[4] + 0x18) )
      {
        v21 = (float *)FormHeapAlloc(8u);
        if ( v21 )
        {
          v22 = *(_DWORD *)(v3[4] + 0x18);
          *(_BYTE *)v21 = *(_BYTE *)v22;
          v21[1] = *(float *)(v22 + 4);
        }
        else
        {
          v21 = 0;
        }
        AVCollection_Add(this, v21);
      }
      if ( *(_DWORD *)(v3[4] + 0x1C) )
      {
        v23 = (float *)FormHeapAlloc(8u);
        if ( v23 )
        {
          v24 = *(_DWORD *)(v3[4] + 0x1C);
          *(_BYTE *)v23 = *(_BYTE *)v24;
          v23[1] = *(float *)(v24 + 4);
        }
        else
        {
          v23 = 0;
        }
        AVCollection_Add(this, v23);
      }
      if ( *(_DWORD *)(v3[4] + 0x20) )
      {
        v25 = (float *)FormHeapAlloc(8u);
        if ( v25 )
        {
          v26 = *(_DWORD *)(v3[4] + 0x20);
          *(_BYTE *)v25 = *(_BYTE *)v26;
          v25[1] = *(float *)(v26 + 4);
        }
        else
        {
          v25 = 0;
        }
        AVCollection_Add(this, v25);
      }
      if ( *(_DWORD *)(v3[4] + 0x24) )
      {
        v27 = (float *)FormHeapAlloc(8u);
        if ( v27 )
        {
          v28 = *(_DWORD *)(v3[4] + 0x24);
          *(_BYTE *)v27 = *(_BYTE *)v28;
          v27[1] = *(float *)(v28 + 4);
        }
        else
        {
          v27 = 0;
        }
        AVCollection_Add(this, v27);
      }
      if ( *(_DWORD *)(v3[4] + 0x28) )
      {
        v29 = (float *)FormHeapAlloc(8u);
        if ( v29 )
        {
          v30 = *(_DWORD *)(v3[4] + 0x28);
          *(_BYTE *)v29 = *(_BYTE *)v30;
          v29[1] = *(float *)(v30 + 4);
        }
        else
        {
          v29 = 0;
        }
        AVCollection_Add(this, v29);
      }
      if ( *(_DWORD *)(v3[4] + 0x2C) )
      {
        v31 = (float *)FormHeapAlloc(8u);
        if ( v31 )
        {
          v32 = *(_DWORD *)(v3[4] + 0x2C);
          *(_BYTE *)v31 = *(_BYTE *)v32;
          v31[1] = *(float *)(v32 + 4);
        }
        else
        {
          v31 = 0;
        }
        AVCollection_Add(this, v31);
      }
      if ( *(_DWORD *)(v3[4] + 0x30) )
      {
        v33 = (float *)FormHeapAlloc(8u);
        if ( v33 )
        {
          v34 = *(_DWORD *)(v3[4] + 0x30);
          *(_BYTE *)v33 = *(_BYTE *)v34;
          v33[1] = *(float *)(v34 + 4);
        }
        else
        {
          v33 = 0;
        }
        AVCollection_Add(this, v33);
      }
      if ( *(_DWORD *)(v3[4] + 0x34) )
      {
        v35 = (float *)FormHeapAlloc(8u);
        if ( v35 )
        {
          v36 = *(_DWORD *)(v3[4] + 0x34);
          *(_BYTE *)v35 = *(_BYTE *)v36;
          v35[1] = *(float *)(v36 + 4);
        }
        else
        {
          v35 = 0;
        }
        AVCollection_Add(this, v35);
      }
      if ( *(_DWORD *)(v3[4] + 0x38) )
      {
        v37 = (float *)FormHeapAlloc(8u);
        if ( v37 )
        {
          v38 = *(_DWORD *)(v3[4] + 0x38);
          *(_BYTE *)v37 = *(_BYTE *)v38;
          v37[1] = *(float *)(v38 + 4);
        }
        else
        {
          v37 = 0;
        }
        AVCollection_Add(this, v37);
      }
      if ( *(_DWORD *)(v3[4] + 0x3C) )
      {
        v39 = (float *)FormHeapAlloc(8u);
        if ( v39 )
        {
          v40 = *(_DWORD *)(v3[4] + 0x3C);
          *(_BYTE *)v39 = *(_BYTE *)v40;
          v39[1] = *(float *)(v40 + 4);
        }
        else
        {
          v39 = 0;
        }
        AVCollection_Add(this, v39);
      }
      if ( *(_DWORD *)(v3[4] + 0x40) )
      {
        v41 = (float *)FormHeapAlloc(8u);
        if ( v41 )
        {
          v42 = *(_DWORD *)(v3[4] + 0x40);
          *(_BYTE *)v41 = *(_BYTE *)v42;
          v41[1] = *(float *)(v42 + 4);
        }
        else
        {
          v41 = 0;
        }
        AVCollection_Add(this, v41);
      }
      if ( *(_DWORD *)(v3[4] + 0x44) )
      {
        v43 = (float *)FormHeapAlloc(8u);
        if ( v43 )
        {
          v44 = *(_DWORD *)(v3[4] + 0x44);
          *(_BYTE *)v43 = *(_BYTE *)v44;
          v43[1] = *(float *)(v44 + 4);
        }
        else
        {
          v43 = 0;
        }
        AVCollection_Add(this, v43);
      }
    }
    do
    {
      v45 = *v3;
      if ( !*v3 )
        break;
      v46 = (float *)FormHeapAlloc(8u);
      if ( v46 )
      {
        *(_BYTE *)v46 = *(_BYTE *)v45;
        v46[1] = *(float *)(v45 + 4);
      }
      else
      {
        v46 = 0;
      }
      AVCollection_Add(this, v46);
      v3 = (int *)v3[1];
    }
    while ( v3 );
  }
}
