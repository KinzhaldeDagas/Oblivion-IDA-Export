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

  v3 = this;
  v37 = 0;
  v4 = sub_700010(a2, (int)dword_B3CD7C);
  v5 = 0;
  if ( v4 )
  {
    InterlockedIncrement(v4 + 1);
  }
  else
  {
    if ( !v3[3] )
      return 0;
    v6 = (_WORD *)v3[6];
    v7 = v3[3];
    do
    {
      v8 = v6[4];
      if ( v8 != 0xFFFF )
      {
        if ( v8 + *(_DWORD *)(*(_DWORD *)v6 + 8) )
        {
          v9 = v8 + *(_DWORD *)(*(_DWORD *)v6 + 8);
          if ( v9 )
          {
            if ( *(_BYTE *)(v9 + 2) == 0x54 && *(_BYTE *)(v9 + 7) == 0x66 )
              ++v5;
          }
        }
      }
      v6 += 8;
      --v7;
    }
    while ( v7 );
    if ( !v5 )
      return 0;
    v11 = v5 + 0xA;
    v12 = (NiTimeController *)FormHeapAlloc(0x48u);
    if ( v12 )
      v13 = sub_6C5EE0(v12, v11);
    else
      v13 = 0;
    if ( v13 )
    {
      v4 = (volatile LONG *)v13;
      InterlockedIncrement((volatile LONG *)&v13->members);
    }
    (*(void (__thiscall **)(volatile LONG *, Ni2DBuffer **))(*v4 + 0x58))(v4, a2);
    *((_WORD *)v4 + 4) |= 0x20u;
    v3 = this;
    v37 = 1;
    if ( a2 == *(Ni2DBuffer ***)(*(this + 0x10) + 0x30) )
    {
      sub_6FFE90(a2, (Ni2DBuffer *)v4);
      v14 = *(_DWORD *)(*(this + 0x10) + 0x34);
      v15 = *((_DWORD *)v4 + 0xD);
      if ( v15 != v14 )
      {
        if ( v15 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
            (**(void (__thiscall ***)(int, int))v15)(v15, 1);
        }
        *((_DWORD *)v4 + 0xD) = v14;
        if ( v14 )
          InterlockedIncrement((volatile LONG *)(v14 + 4));
      }
      v16 = *(this + 0x10);
      v17 = *(volatile LONG **)(v16 + 0x34);
      if ( v17 != v4 )
      {
        if ( v17 )
        {
          if ( !InterlockedDecrement(v17 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v17)(v17, 1);
        }
        *(_DWORD *)(v16 + 0x34) = v4;
        InterlockedIncrement(v4 + 1);
      }
    }
  }
  v18 = 0;
  v41 = 0;
  if ( v3[3] )
  {
    v39 = 0;
    while ( 1 )
    {
      v40 = v18 + v3[5];
      v19 = v3[6];
      v20 = *(_WORD *)(v19 + v18 + 8);
      v21 = (_WORD *)(v18 + v19);
      if ( v20 == 0xFFFF )
        goto LABEL_62;
      if ( !(v20 + *(_DWORD *)(*(_DWORD *)v21 + 8)) )
        goto LABEL_62;
      v22 = *(_DWORD *)(*(_DWORD *)v21 + 8);
      v23 = v22 + v20;
      if ( !v23 )
        goto LABEL_62;
      if ( *(_BYTE *)(v23 + 2) != 0x54 )
        goto LABEL_62;
      if ( *(_BYTE *)(v23 + 7) != 0x66 )
        goto LABEL_62;
      v24 = v21[2];
      v25 = v24 == 0xFFFF ? 0 : v22 + v24;
      v26 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x4C))(a3, v25);
      v27 = (int)v26;
      if ( !v26 || (_DWORD *)v3[0x18] == v26 && *(_BYTE *)(v3[0x10] + 0x6C) )
        goto LABEL_62;
      v28 = (Ni2DBuffer *)sub_700010(v26, (int)dword_B3CA58);
      v29 = *((_WORD *)v4 + 0x22);
      v30 = v28;
      v31 = 0;
      if ( v29 )
      {
        v32 = *((_DWORD *)v4 + 0x10);
        while ( *(_DWORD *)(v32 + 4 * v31) != v27 )
        {
          if ( ++v31 >= v29 )
            goto LABEL_50;
        }
        v33 = v31;
        if ( v31 != word_A7A160 )
          break;
      }
LABEL_50:
      v33 = sub_6C5F80((int)v4, v27);
      if ( v33 != word_A7A160 )
        goto LABEL_53;
LABEL_61:
      v3 = this;
LABEL_62:
      v18 = v39 + 0x10;
      v36 = (unsigned int)++v41 < v3[3];
      v39 += 0x10;
      if ( !v36 )
        goto LABEL_63;
    }
    *(_DWORD *)(v32 + 4 * v31) = v27;
LABEL_53:
    if ( _strcmp(*(char **)(v27 + 8), "Bip01") )
      sub_6FFE90((Ni2DBuffer **)v27, v30);
    v34 = *(volatile LONG **)(v40 + 4);
    if ( v34 != v4 )
    {
      if ( v34 )
      {
        if ( !InterlockedDecrement(v34 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v34)(v34, 1);
      }
      *(_DWORD *)(v40 + 4) = v4;
      InterlockedIncrement(v4 + 1);
    }
    v35 = 0x30 * v33 + *((_DWORD *)v4 + 0xF);
    *(_DWORD *)(v40 + 8) = v35;
    *(_BYTE *)(v35 + 0xC) |= 1u;
    goto LABEL_61;
  }
LABEL_63:
  if ( v4 )
  {
    if ( !InterlockedDecrement(v4 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v4)(v4, 1);
  }
  return v37;
}
