int __userpurge sub_575B40@<eax>(int a1@<ecx>, int a2@<edi>, _DWORD *a3, int a4)
{
  double v5; // st7
  unsigned __int16 v6; // ax
  FreeEntry *v7; // edi
  char v8; // dl
  int v9; // eax
  char v10; // cl
  int v11; // eax
  unsigned int v12; // kr00_4
  int v13; // ebp
  _DWORD *v14; // esi
  signed int i; // esi
  bool v16; // cc
  _DWORD *v17; // eax
  const unsigned __int8 *v18; // eax
  unsigned int v19; // kr04_4
  unsigned int v20; // eax
  unsigned int v21; // ebp
  char v22; // al
  char v23; // cl
  size_t v25; // [esp-16h] [ebp-4F4h]
  size_t v26; // [esp-Eh] [ebp-4ECh]
  int v27; // [esp-6h] [ebp-4E4h]
  unsigned int v28; // [esp+2h] [ebp-4DCh]
  unsigned int v29; // [esp+6h] [ebp-4D8h]
  int v30; // [esp+Ah] [ebp-4D4h]
  char *Src; // [esp+Eh] [ebp-4D0h]
  char *v32; // [esp+1Ah] [ebp-4C4h]
  unsigned int v33; // [esp+22h] [ebp-4BCh]
  unsigned int v34; // [esp+2Eh] [ebp-4B0h]
  unsigned int v36; // [esp+3Ah] [ebp-4A4h]
  int v37; // [esp+42h] [ebp-49Ch]
  unsigned __int8 v38[4]; // [esp+4Eh] [ebp-490h] BYREF
  int v39; // [esp+52h] [ebp-48Ch]
  int v40; // [esp+56h] [ebp-488h] BYREF
  char v41[116]; // [esp+5Ah] [ebp-484h] BYREF
  char v42[12]; // [esp+CEh] [ebp-410h] BYREF
  char v43; // [esp+DAh] [ebp-404h]

  if ( !*a3 )
    JUMPOUT(0x5763EC);
  if ( *(int *)(a4 + 8) <= 0 )
    *(_DWORD *)(a4 + 8) = 0x7FFFFFFF;
  if ( *(int *)(a4 + 0xC) <= 0 )
    *(_DWORD *)(a4 + 0xC) = 0x7FFFFFFF;
  if ( *(int *)(a4 + 0x14) <= 0 )
    *(_DWORD *)(a4 + 0x14) = 0x7FFFFFFF;
  v37 = 0;
  if ( *(_DWORD *)(a1 + 8) == 3 )
    v37 = 6;
  v5 = *(float *)(*(_DWORD *)(a1 + 0x38) + 0x850);
  v39 = 0;
  v33 = 0;
  Double_To_SInt32(v5);
  v6 = *((_WORD *)a3 + 2);
  if ( v6 == 0xFFFF )
    v36 = strlen((const char *)*a3);
  else
    v36 = v6;
  HIDWORD(v26) = 1;
  LODWORD(v26) = v36 + 4;
  v40 = *(_DWORD *)(a4 + 0x14);
  v32 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)a3, v26, a2);
  _memset(v32, 0, v36 + 4);
  *(_DWORD *)v38 = v32;
  v7 = j_MemoryHeap_Alloc(&FormHeap, (char)a3, (v36 + 4) | 0x100000000LL, v27);
  _memset(v7, 0, v36 + 4);
  _sprintf(v32, "%s", (const char *)*a3);
  v8 = 0;
  Src = 0;
  v34 = v36 + 4;
  HIBYTE(v30) = 0;
  v43 = 0;
  if ( v36 )
  {
    do
    {
      if ( *v32 == 0x26 )
      {
        v9 = 0;
        if ( !v32[1] )
          goto LABEL_23;
        do
        {
          if ( v9 >= 0x7F )
            break;
          v10 = v32[v9];
          if ( v10 == 0x3B )
            break;
          if ( v10 == 0xA )
            break;
          if ( v10 == *(_BYTE *)(a4 + 0x1C) )
            break;
          v41[v9] = v32[v9 + 1];
          ++v9;
        }
        while ( v32[v9 + 1] );
        if ( v9 )
          v11 = v9 - 1;
        else
LABEL_23:
          v11 = 0;
        v41[v11] = 0;
        v12 = strlen(v41);
        v13 = 0;
        v14 = *(_DWORD **)(dword_B3557C
                         + 4 * (*(int (__thiscall **)(int *, char *))(dword_B35574 + 4))(&dword_B35574, v41));
        if ( v14 )
        {
          while ( 1 )
          {
            HIDWORD(v25) = &v40;
            if ( (*(unsigned __int8 (__thiscall **)(int *))(dword_B35574 + 8))(&dword_B35574) )
              break;
            v14 = (_DWORD *)*v14;
            if ( !v14 )
              goto LABEL_29;
          }
          v13 = v14[2];
        }
LABEL_29:
        for ( i = 0; i < 0x1D; ++i )
        {
          if ( *(_DWORD *)(4 * i + 0xB399D0) == v13 )
            break;
        }
        v16 = i < 0x1D;
        if ( i == 0x1D )
        {
          i = 0;
          while ( 1 )
          {
            v17 = *(_DWORD **)(4 * i + 0xB399D0);
            v18 = v17 ? (const unsigned __int8 *)*v17 : 0;
            if ( !_mbscmp(v18, v38) )
              break;
            if ( ++i >= 0x1D )
              goto LABEL_39;
          }
          v16 = i < 0x1D;
        }
        if ( v16 )
        {
          sub_57C240(i, v42);
          v19 = strlen(v42);
          if ( v19 != a1 )
          {
            v33 += v19 - a1;
            LODWORD(v25) = v33;
            v7 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v7, v25);
          }
          v20 = 0;
          if ( v19 )
          {
            v21 = v28;
            do
              *((_BYTE *)&v7->prev + v21++) = v42[v20++];
            while ( v20 < v19 );
            v28 = v21;
          }
          v29 = v29 + a1 - 1;
          v8 = 1;
        }
        else
        {
LABEL_39:
          *((_BYTE *)&v7->prev + v28++) = *(_BYTE *)(v12 + 2);
          v8 = 1;
        }
      }
      else
      {
        *((_BYTE *)&v7->prev + (_DWORD)Src++) = *v32;
      }
      ++v29;
    }
    while ( v29 < v34 );
  }
  *((_BYTE *)&v7->prev + v28) = 0;
  if ( v8 )
  {
    v34 = v28;
    LODWORD(v25) = v28 + 4;
    v37 = (int)MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, Src, v25);
    strcpy((char *)v37, (const char *)v7);
  }
  LOBYTE(v7->prev) = 0;
  if ( !v34 || (v22 = *(_BYTE *)v37) == 0 )
    JUMPOUT(0x5762C8);
  if ( v22 == 0xB )
    goto LABEL_69;
  v23 = *(_BYTE *)(v30 + 0x1C);
  if ( v22 == v23 )
  {
    LOBYTE(v7->prev) = v23;
    if ( v33 <= 1 )
    {
      LODWORD(v25) = 5;
      MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v7, v25);
    }
    Double_To_SInt32(**(float **)0x39 + (double)0 + (double)0);
    BSSimpleList_PushBack((_DWORD *)(v30 + 0x20), 0);
    JUMPOUT(0x57625E);
  }
  if ( v22 == 9 )
LABEL_69:
    JUMPOUT(0x576273);
  switch ( v22 )
  {
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
      return def_575F9B(a3, a4);
    default:
      JUMPOUT(0x575FAE);
  }
}
