_DWORD *__userpurge sub_58E3B0@<eax>(
        Tile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v11; // ebp
  int v12; // eax
  Tile *v13; // esi
  _DWORD *v14; // ebx
  _DWORD *v15; // esi
  _DWORD *v16; // eax
  int v17; // edx
  unsigned __int16 v18; // cx
  _DWORD *v19; // eax
  unsigned __int16 v20; // cx
  int v21; // eax
  signed int v22; // ebp
  int v23; // eax
  Tile *v24; // esi
  _DWORD *v25; // ebx
  _DWORD *v26; // esi
  _DWORD *v27; // eax
  int v28; // edx
  unsigned __int16 v29; // cx
  _DWORD *v30; // eax
  unsigned __int16 v31; // cx
  int v32; // eax
  _DWORD *v33; // ebx
  int v34; // ebp
  _DWORD *v35; // edi
  int v36; // eax
  _DWORD *v37; // esi
  InterfaceManager *Singleton; // eax
  _DWORD *v39; // ebx
  signed int v40; // ebp
  _DWORD *v41; // edi
  int v42; // eax
  _DWORD *v43; // ecx
  _DWORD *i; // eax
  _DWORD *v45; // [esp-4h] [ebp-24h]
  Tile *v46; // [esp+10h] [ebp-10h]
  _DWORD *v47; // [esp+14h] [ebp-Ch]
  int v48; // [esp+18h] [ebp-8h]
  int v49; // [esp+1Ch] [ebp-4h]

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = *((_DWORD **)a1 + 6);
        if ( v7 )
          break;
LABEL_5:
        a1 = *((Tile **)a1 + 4);
        if ( !a1 )
          return 0;
      }
      while ( 1 )
      {
        v8 = v7[2];
        v9 = *(unsigned __int16 *)(v8 + 0x18);
        v7 = (_DWORD *)*v7;
        if ( (_DWORD *)v9 == a5 )
          break;
        if ( v9 > (int)a5 || !v7 )
          goto LABEL_5;
      }
      if ( *(float *)(v8 + 4) != dbl_A6AE78 )
        break;
      v47 = 0;
      v11 = 0x7FFFFFFF;
      Tile_GetFloat(a1, 0xFAA);
      v12 = Double_To_SInt32(st7_0);
      v13 = *((Tile **)a1 + 4);
      v14 = *((_DWORD **)v13 + 0xD);
      v49 = v12;
      v46 = v13;
      if ( v14 )
      {
        do
        {
          v15 = (_DWORD *)v14[2];
          v14 = (_DWORD *)*v14;
          v16 = (_DWORD *)v15[6];
          if ( !v16 )
            goto LABEL_15;
          while ( 1 )
          {
            v17 = v16[2];
            v18 = *(_WORD *)(v17 + 0x18);
            v16 = (_DWORD *)*v16;
            if ( v18 == 0xFA1 )
              break;
            if ( v18 > 0xFA1u || !v16 )
              goto LABEL_15;
          }
          if ( 1.0 != *(float *)(v17 + 4) )
          {
LABEL_15:
            v19 = (_DWORD *)v15[6];
            if ( v19 )
            {
              while ( 1 )
              {
                v20 = *(_WORD *)(v19[2] + 0x18);
                v19 = (_DWORD *)*v19;
                if ( v20 == 0xFF0 )
                  break;
                if ( v20 > 0xFF0u || !v19 )
                  goto LABEL_23;
              }
              Tile_GetFloat(v15, 0xFAA);
              v21 = Double_To_SInt32(st7_0);
              if ( v21 > v49 && v21 < v11 )
              {
                v47 = v15;
                v11 = v21;
              }
            }
          }
LABEL_23:
          ;
        }
        while ( v14 );
        if ( v47 )
          goto LABEL_45;
      }
LABEL_25:
      a1 = v46;
    }
    if ( *(float *)(v8 + 4) != dbl_A6AE70 )
      break;
    v47 = 0;
    v22 = 0x80000000;
    Tile_GetFloat(a1, 0xFAA);
    v23 = Double_To_SInt32(st7_0);
    v24 = *((Tile **)a1 + 4);
    v25 = *((_DWORD **)v24 + 0xD);
    v48 = v23;
    v46 = v24;
    if ( !v25 )
      goto LABEL_25;
    do
    {
      v26 = (_DWORD *)v25[2];
      v25 = (_DWORD *)*v25;
      v27 = (_DWORD *)v26[6];
      if ( !v27 )
        goto LABEL_34;
      while ( 1 )
      {
        v28 = v27[2];
        v29 = *(_WORD *)(v28 + 0x18);
        v27 = (_DWORD *)*v27;
        if ( v29 == 0xFA1 )
          break;
        if ( v29 > 0xFA1u || !v27 )
          goto LABEL_34;
      }
      if ( 1.0 != *(float *)(v28 + 4) )
      {
LABEL_34:
        v30 = (_DWORD *)v26[6];
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = *(_WORD *)(v30[2] + 0x18);
            v30 = (_DWORD *)*v30;
            if ( v31 == 0xFF0 )
              break;
            if ( v31 > 0xFF0u || !v30 )
              goto LABEL_42;
          }
          Tile_GetFloat(v26, 0xFAA);
          v32 = Double_To_SInt32(st7_0);
          if ( v32 < v48 && v32 > v22 )
          {
            v47 = v26;
            v22 = v32;
          }
        }
      }
LABEL_42:
      ;
    }
    while ( v25 );
    if ( v47 )
    {
LABEL_45:
      sub_58E7D0(v47, a2, a3, st7_0);
      return v47;
    }
    a1 = v46;
  }
  if ( *(float *)(v8 + 4) == dbl_A6AE68 )
  {
    v33 = *((_DWORD **)a1 + 0xD);
    a5 = 0;
    v34 = 0x7FFFFFFF;
    if ( v33 )
    {
      do
      {
        v35 = (_DWORD *)v33[2];
        v33 = (_DWORD *)*v33;
        if ( Tile_GetFloat(v35, 0xFA1) != fConstant_1 )
        {
          if ( sub_588B50(v35, 0xFF0) )
          {
            Tile_GetFloat(v35, 0xFAA);
            v36 = Double_To_SInt32(st7_0);
            if ( v36 < v34 )
            {
              a5 = v35;
              v34 = v36;
            }
          }
        }
      }
      while ( v33 );
      if ( a5 )
        goto LABEL_54;
    }
    if ( sub_588B50(a1, 0xFF0) )
      sub_578ED0(a1, (Tile *)0xFF0, 0);
LABEL_57:
    a5 = (_DWORD *)0x80000000;
    v45 = sub_589390(a1);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    return sub_57DA90(Singleton, a2, a3, st7_0, (int *)&a5, v45);
  }
  else if ( *(float *)(v8 + 4) == dbl_A6AE60 )
  {
    v39 = *((_DWORD **)a1 + 0xD);
    a5 = 0;
    v40 = 0x80000000;
    if ( !v39 )
      goto LABEL_78;
    do
    {
      v41 = (_DWORD *)v39[2];
      v39 = (_DWORD *)*v39;
      if ( Tile_GetFloat(v41, 0xFA1) != fConstant_1 )
      {
        if ( sub_588B50(v41, 0xFF0) )
        {
          Tile_GetFloat(v41, 0xFAA);
          v42 = Double_To_SInt32(st7_0);
          if ( v42 > v40 )
          {
            a5 = v41;
            v40 = v42;
          }
        }
      }
    }
    while ( v39 );
    if ( !a5 )
    {
LABEL_78:
      if ( sub_588B50(a1, 0xFF0) )
        sub_578ED0(a1, (Tile *)0xFF0, 0);
      goto LABEL_57;
    }
LABEL_54:
    v37 = a5;
    sub_58E7D0(a5, a2, a3, st7_0);
    return v37;
  }
  else
  {
    v43 = *(_DWORD **)(v8 + 0x10);
    if ( !v43 )
      return 0;
    while ( v43[3] != 0x7EB )
    {
      v43 = (_DWORD *)v43[1];
      if ( !v43 )
        return 0;
    }
    for ( i = (_DWORD *)v43[4]; i; i = (_DWORD *)i[4] )
      v43 = i;
    *a6 = *(unsigned __int16 *)(v43[2] + 0x18);
    return *(_DWORD **)v43[2];
  }
}
