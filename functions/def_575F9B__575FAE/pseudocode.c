// positive sp value has been detected, the output may be wrong!
int __userpurge def_575F9B@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        FreeEntry *a3@<edi>,
        unsigned int a4@<esi>,
        int a5,
        int a6)
{
  int v6; // eax
  int v7; // ebx
  _BYTE *v8; // ebp
  float *v9; // ebp
  int v10; // ebx
  int next_high; // eax
  char v12; // dl
  float *v13; // ebp
  int v14; // ebx
  int v15; // ebp
  int v16; // ebx
  int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // edx
  int v22; // ebx
  int *v23; // ebp
  int *v24; // eax
  size_t v26; // [esp-4E8h] [ebp-4E8h]
  unsigned __int8 v27; // [esp-4D2h] [ebp-4D2h]
  char v28; // [esp-4D1h] [ebp-4D1h]
  int v29; // [esp-4D0h] [ebp-4D0h]
  int v30; // [esp-4D0h] [ebp-4D0h]
  unsigned int v31; // [esp-4CCh] [ebp-4CCh]
  int v32; // [esp-4C8h] [ebp-4C8h]
  unsigned int v33; // [esp-4C4h] [ebp-4C4h]
  int v34; // [esp-4C0h] [ebp-4C0h]
  int v35; // [esp-4BCh] [ebp-4BCh]
  int v36; // [esp-4B8h] [ebp-4B8h]
  unsigned __int8 v37; // [esp-4B1h] [ebp-4B1h]
  unsigned int v38; // [esp-4B0h] [ebp-4B0h]
  int v39; // [esp-4ACh] [ebp-4ACh]
  unsigned int v40; // [esp-4A8h] [ebp-4A8h]
  unsigned int v41; // [esp-4A4h] [ebp-4A4h]
  int v42; // [esp-4A0h] [ebp-4A0h]
  int v43; // [esp-49Ch] [ebp-49Ch]
  int v44; // [esp-498h] [ebp-498h]
  int v45; // [esp-494h] [ebp-494h]
  void *v46; // [esp-490h] [ebp-490h]
  int v47; // [esp-48Ch] [ebp-48Ch]
  int v48; // [esp-488h] [ebp-488h]

  v45 = 0x38 * v27;
  v6 = Double_To_SInt32(*(float *)(v45 + *(_DWORD *)(v39 + 0x38) + 0x158) + *(float *)(v45
                                                                                     + *(_DWORD *)(v39 + 0x38)
                                                                                     + 0x14C));
  v7 = v6 + a1;
  if ( v27 == 0x20 )
  {
    v44 = v7 - v6;
    v47 = v7;
    v28 = 0;
  }
  else
  {
    if ( v27 != 0x7E )
      goto LABEL_6;
    v44 = v7;
    v47 = v7;
    v28 = 1;
    v7 -= v6;
  }
  v40 = a4;
LABEL_6:
  if ( v7 <= *(_DWORD *)(v32 + 8) )
    goto LABEL_24;
  if ( !v40 )
  {
    if ( v33 >= v38 )
    {
      LODWORD(v26) = v31;
      a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26);
      v38 = v31;
    }
    v12 = *((_BYTE *)&a3->prev + a4);
    *((_BYTE *)&a3->prev + a4 + 1) = *((_BYTE *)a3 + a4 - 1);
    *((_BYTE *)&a3->prev + a4 + 2) = v12;
    *((_BYTE *)&a3->prev + a4) = 0xA;
    *((_BYTE *)a3 + a4 - 1) = 0x2D;
    v13 = *(float **)(v39 + 0x38);
    v30 = v29 + 2;
    a4 += 2;
    v34 = Double_To_SInt32((double)v43 + *v13 + (double)v34);
    v14 = v7 - Double_To_SInt32(v13[0x2CC] + v13[0x2C9]);
    BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v14);
    if ( v35 <= v14 )
      v35 = v14;
    next_high = *((char *)a3 + a4 - 1);
    goto LABEL_23;
  }
  if ( v28 )
  {
    v38 += 4;
    LODWORD(v26) = v38;
    a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26);
    v8 = (char *)a3 + v40;
    unknown_libname_16((char *)&a3->prev + v40 + 2, (char *)a3 + v40, a4 - v40);
    v8[1] = 0xA;
    *v8 = 0x2D;
    v9 = *(float **)(v39 + 0x38);
    v30 = v29 + 2;
    a4 += 2;
    v34 = Double_To_SInt32((double)v43 + *v9 + (double)v34);
    v10 = v7 - Double_To_SInt32(v9[0x2CC] + v9[0x2C9]);
    BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v10);
    if ( v35 <= v10 )
      v35 = v10;
    next_high = SHIBYTE(a3[0xFFFFFFFF].next);
LABEL_23:
    v15 = *(_DWORD *)(v39 + 0x38);
    ++v36;
    v16 = Double_To_SInt32(*(float *)(v15 + 0x38 * next_high + 0x158) + *(float *)(v15 + 0x38 * next_high + 0x14C));
    v17 = Double_To_SInt32(*(float *)(v45 + v15 + 0x158) + *(float *)(v45 + v15 + 0x14C));
    a2 = v30;
    v7 = v17 + v16;
    goto LABEL_24;
  }
  if ( v40 == a4 )
    v27 = v37;
  else
    *((_BYTE *)&a3->prev + v40) = v37;
  v34 = Double_To_SInt32(**(float **)(v39 + 0x38) + (double)v43 + (double)v34);
  BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v44);
  if ( v35 <= v44 )
    v35 = v44;
  ++v36;
  v7 -= v47;
LABEL_24:
  if ( v27 != 0x7E )
  {
    *((_BYTE *)&a3->prev + a4++) = v27;
    ++a2;
  }
  if ( a4 >= v38 )
  {
    LODWORD(v26) = a2;
    a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26);
  }
  if ( v48 > 0 && v36 > v48 && a4 )
  {
    for ( ; *((_BYTE *)&a3->prev + a4) != *(_BYTE *)(v32 + 0x1C); --a4 )
      ;
    *((_BYTE *)&a3->prev + a4) = 0;
    v34 = Double_To_SInt32((double)v34 - (**(float **)(v39 + 0x38) + (double)v43));
  }
  else if ( v42 + 1 < v41 )
  {
    JUMPOUT(0x575ED0);
  }
  if ( !LOBYTE(a3->prev) )
    goto LABEL_48;
  if ( *(_DWORD *)(v32 + 0x10) )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( a4 )
    {
      v21 = v32;
      do
      {
        if ( v19 >= *(_DWORD *)(v21 + 0x10) && v19 < *(_DWORD *)(v21 + 0x14) )
        {
          *((_BYTE *)&a3->prev + v18) = *((_BYTE *)&a3->prev + v20);
          v21 = v32;
          ++v18;
        }
        if ( *((_BYTE *)&a3->prev + v20) == 0xA )
          ++v19;
        ++v20;
      }
      while ( v20 < a4 );
    }
    *((_BYTE *)&a3->prev + v18) = 0;
    a4 = v18;
  }
  if ( !LOBYTE(a3->prev) )
  {
LABEL_48:
    LOBYTE(a3->prev) = 0x20;
    BYTE1(a3->prev) = 0;
    v22 = *(_DWORD *)(v39 + 0x38);
    a4 = 1;
    v36 = 1;
    v34 = Double_To_SInt32(*(float *)(v22 + 0x850));
    v7 = Double_To_SInt32(*(float *)(v22 + 0x84C));
  }
  if ( v7 )
  {
    v23 = (int *)(v32 + 0x20);
    if ( *(_DWORD *)(v32 + 0x24) )
    {
      do
        v23 = (int *)v23[1];
      while ( v23[1] );
    }
    if ( *v23 )
    {
      v24 = (int *)FormHeapAlloc(8u);
      if ( v24 )
      {
        *v24 = v7;
        v24[1] = 0;
        v23[1] = (int)v24;
      }
      else
      {
        v23[1] = 0;
      }
    }
    else
    {
      *v23 = v7;
    }
  }
  if ( v35 <= v7 )
    v35 = v7;
  *((_BYTE *)&a3->prev + a4) = 0;
  BSStringT_Set((BSStringT *)v32, (const char *)a3, 0);
  *(_DWORD *)(v32 + 8) = v35;
  *(_DWORD *)(v32 + 0xC) = v34;
  *(_DWORD *)(v32 + 0x10) = 0;
  *(_DWORD *)(v32 + 0x14) = v36;
  *(_DWORD *)(v32 + 0x18) = a4;
  MemoryHeap_Free_checked(v46);
  return MemoryHeap_Free_checked(a3);
}
