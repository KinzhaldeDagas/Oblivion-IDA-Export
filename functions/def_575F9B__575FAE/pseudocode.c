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
  char *v8; // ebp
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

  v45 = 0x38 * v27; /*0x575fc9*/
  v6 = Double_To_SInt32(*(float *)(v45 + *(_DWORD *)(v39 + 0x38) + 0x158) + *(float *)(v45 /*0x575fda*/
                                                                                     + *(_DWORD *)(v39 + 0x38)
                                                                                     + 0x14C));
  v7 = v6 + a1; /*0x575fdf*/
  if ( v27 == 0x20 ) /*0x575fe6*/
  {
    v44 = v7 - v6; /*0x575fec*/
    v47 = v7; /*0x575ff0*/
    v28 = 0; /*0x575ff4*/
  }
  else
  {
    if ( v27 != 0x7E ) /*0x576000*/
      goto LABEL_6; /*0x576000*/
    v44 = v7; /*0x576002*/
    v47 = v7; /*0x576006*/
    v28 = 1; /*0x57600a*/
    v7 -= v6; /*0x57600f*/
  }
  v40 = a4; /*0x576011*/
LABEL_6:
  if ( v7 <= *(_DWORD *)(v32 + 8) ) /*0x57601c*/
    goto LABEL_24; /*0x57601c*/
  if ( !v40 ) /*0x576028*/
  {
    if ( v33 >= v38 ) /*0x576147*/
    {
      LODWORD(v26) = v31; /*0x57614d*/
      a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26); /*0x576159*/
      v38 = v31; /*0x57615b*/
    }
    v12 = *((_BYTE *)&a3->prev + a4); /*0x57615f*/
    *((_BYTE *)&a3->prev + a4 + 1) = *((_BYTE *)a3 + a4 - 1); /*0x57616e*/
    *((_BYTE *)&a3->prev + a4 + 2) = v12; /*0x576172*/
    *((_BYTE *)&a3->prev + a4) = 0xA; /*0x576176*/
    *((_BYTE *)a3 + a4 - 1) = 0x2D; /*0x57617a*/
    v13 = *(float **)(v39 + 0x38); /*0x57617f*/
    v30 = v29 + 2; /*0x576196*/
    a4 += 2; /*0x57619a*/
    v34 = Double_To_SInt32((double)v43 + *v13 + (double)v34); /*0x5761ad*/
    v14 = v7 - Double_To_SInt32(v13[0x2CC] + v13[0x2C9]); /*0x5761ba*/
    BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v14); /*0x5761c0*/
    if ( v35 <= v14 ) /*0x5761c9*/
      v35 = v14; /*0x5761cb*/
    next_high = *((char *)a3 + a4 - 1); /*0x5761cf*/
    goto LABEL_23; /*0x5761cf*/
  }
  if ( v28 ) /*0x576033*/
  {
    v38 += 4; /*0x57604c*/
    LODWORD(v26) = v38; /*0x576040*/
    a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26); /*0x576059*/
    v8 = (char *)a3 + v40; /*0x57605f*/
    unknown_libname_16((unsigned int)&a3->prev + v40 + 2, (unsigned int)a3 + v40, a4 - v40); /*0x576068*/
    v8[1] = 0xA; /*0x576075*/
    *v8 = 0x2D; /*0x576079*/
    v9 = *(float **)(v39 + 0x38); /*0x57607d*/
    v30 = v29 + 2; /*0x576094*/
    a4 += 2; /*0x57609b*/
    v34 = Double_To_SInt32((double)v43 + *v9 + (double)v34); /*0x5760ae*/
    v10 = v7 - Double_To_SInt32(v9[0x2CC] + v9[0x2C9]); /*0x5760bb*/
    BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v10); /*0x5760c1*/
    if ( v35 <= v10 ) /*0x5760ca*/
      v35 = v10; /*0x5760cc*/
    next_high = SHIBYTE(a3[0xFFFFFFFF].next); /*0x5760d0*/
LABEL_23:
    v15 = *(_DWORD *)(v39 + 0x38); /*0x5761d4*/
    ++v36; /*0x5761db*/
    v16 = Double_To_SInt32(*(float *)(v15 + 0x38 * next_high + 0x158) + *(float *)(v15 + 0x38 * next_high + 0x14C)); /*0x576207*/
    v17 = Double_To_SInt32(*(float *)(v45 + v15 + 0x158) + *(float *)(v45 + v15 + 0x14C)); /*0x57621b*/
    a2 = v30; /*0x576220*/
    v7 = v17 + v16; /*0x576224*/
    goto LABEL_24; /*0x576224*/
  }
  if ( v40 == a4 ) /*0x5760db*/
    v27 = v37; /*0x5760e1*/
  else
    *((_BYTE *)&a3->prev + v40) = v37; /*0x5760eb*/
  v34 = Double_To_SInt32(**(float **)(v39 + 0x38) + (double)v43 + (double)v34); /*0x576110*/
  BSSimpleList_PushBack((_DWORD *)(v32 + 0x20), v44); /*0x576114*/
  if ( v35 <= v44 ) /*0x576121*/
    v35 = v44; /*0x576125*/
  ++v36; /*0x576129*/
  v7 -= v47; /*0x57612e*/
LABEL_24:
  if ( v27 != 0x7E ) /*0x57622c*/
  {
    *((_BYTE *)&a3->prev + a4++) = v27; /*0x57622e*/
    ++a2; /*0x576240*/
  }
  if ( a4 >= v38 ) /*0x57624a*/
  {
    LODWORD(v26) = a2; /*0x57624c*/
    a3 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, a3, v26); /*0x576258*/
  }
  if ( v48 > 0 && v36 > v48 && a4 ) /*0x576271*/
  {
    for ( ; *((_BYTE *)&a3->prev + a4) != *(_BYTE *)(v32 + 0x1C); --a4 ) /*0x576294*/
      ; /*0x5762a0*/
    *((_BYTE *)&a3->prev + a4) = 0; /*0x5762b0*/
    v34 = Double_To_SInt32((double)v34 - (**(float **)(v39 + 0x38) + (double)v43)); /*0x5762c4*/
  }
  else if ( v42 + 1 < v41 ) /*0x576282*/
  {
    JUMPOUT(0x575ED0); /*0x575ed0*/
  }
  if ( !LOBYTE(a3->prev) ) /*0x5762c8*/
    goto LABEL_48; /*0x5762c8*/
  if ( *(_DWORD *)(v32 + 0x10) ) /*0x5762d1*/
  {
    v18 = 0; /*0x5762d7*/
    v19 = 0; /*0x5762d9*/
    v20 = 0; /*0x5762db*/
    if ( a4 ) /*0x5762df*/
    {
      v21 = v32; /*0x5762e1*/
      do /*0x57630a*/
      {
        if ( v19 >= *(_DWORD *)(v21 + 0x10) && v19 < *(_DWORD *)(v21 + 0x14) ) /*0x5762ed*/
        {
          *((_BYTE *)&a3->prev + v18) = *((_BYTE *)&a3->prev + v20); /*0x5762f2*/
          v21 = v32; /*0x5762f5*/
          ++v18; /*0x5762f9*/
        }
        if ( *((_BYTE *)&a3->prev + v20) == 0xA ) /*0x576300*/
          ++v19; /*0x576302*/
        ++v20; /*0x576305*/
      }
      while ( v20 < a4 ); /*0x57630a*/
    }
    *((_BYTE *)&a3->prev + v18) = 0; /*0x57630c*/
    a4 = v18; /*0x576310*/
  }
  if ( !LOBYTE(a3->prev) ) /*0x576312*/
  {
LABEL_48:
    LOBYTE(a3->prev) = 0x20; /*0x57631b*/
    BYTE1(a3->prev) = 0; /*0x57631e*/
    v22 = *(_DWORD *)(v39 + 0x38); /*0x576322*/
    a4 = 1; /*0x57632b*/
    v36 = 1; /*0x576330*/
    v34 = Double_To_SInt32(*(float *)(v22 + 0x850)); /*0x57633f*/
    v7 = Double_To_SInt32(*(float *)(v22 + 0x84C)); /*0x576348*/
  }
  if ( v7 ) /*0x57634c*/
  {
    v23 = (int *)(v32 + 0x20); /*0x576352*/
    if ( *(_DWORD *)(v32 + 0x24) ) /*0x576355*/
    {
      do /*0x576363*/
        v23 = (int *)v23[1]; /*0x576360*/
      while ( v23[1] ); /*0x576363*/
    }
    if ( *v23 ) /*0x576369*/
    {
      v24 = (int *)FormHeapAlloc(8u); /*0x576371*/
      if ( v24 ) /*0x57637b*/
      {
        *v24 = v7; /*0x57637d*/
        v24[1] = 0; /*0x57637f*/
        v23[1] = (int)v24; /*0x576386*/
      }
      else
      {
        v23[1] = 0; /*0x57638d*/
      }
    }
    else
    {
      *v23 = v7; /*0x576392*/
    }
  }
  if ( v35 <= v7 ) /*0x576399*/
    v35 = v7; /*0x57639b*/
  *((_BYTE *)&a3->prev + a4) = 0; /*0x5763a8*/
  BSStringT_Set((BSStringT *)v32, (const char *)a3, 0); /*0x5763ac*/
  *(_DWORD *)(v32 + 8) = v35; /*0x5763bd*/
  *(_DWORD *)(v32 + 0xC) = v34; /*0x5763ca*/
  *(_DWORD *)(v32 + 0x10) = 0; /*0x5763cd*/
  *(_DWORD *)(v32 + 0x14) = v36; /*0x5763d4*/
  *(_DWORD *)(v32 + 0x18) = a4; /*0x5763d7*/
  MemoryHeap_Free_checked(v46); /*0x5763da*/
  return MemoryHeap_Free_checked(a3); /*0x576402*/
}
