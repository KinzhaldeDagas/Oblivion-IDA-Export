int __userpurge sub_575B40@<eax>(int a1@<ecx>, int a2@<edi>, _DWORD *a3, int a4)
{
  double v4; // st7
  unsigned __int16 v5; // ax
  FreeEntry *v6; // edi
  char v7; // dl
  int v8; // eax
  char v9; // cl
  int v10; // eax
  unsigned int v11; // kr00_4
  int v12; // ebp
  _DWORD *v13; // esi
  signed int i; // esi
  bool v15; // cc
  _DWORD *v16; // eax
  const unsigned __int8 *v17; // eax
  unsigned int v18; // kr04_4
  unsigned int v19; // eax
  unsigned int v20; // ebp
  char v21; // al
  char v22; // cl
  size_t v24; // [esp-16h] [ebp-4F4h]
  size_t v25; // [esp-Eh] [ebp-4ECh]
  int v26; // [esp-6h] [ebp-4E4h]
  unsigned int v27; // [esp+2h] [ebp-4DCh]
  unsigned int v28; // [esp+6h] [ebp-4D8h]
  int v29; // [esp+Ah] [ebp-4D4h]
  char *Src; // [esp+Eh] [ebp-4D0h]
  char *v31; // [esp+1Ah] [ebp-4C4h]
  unsigned int v32; // [esp+22h] [ebp-4BCh]
  unsigned int v33; // [esp+2Eh] [ebp-4B0h]
  unsigned int v35; // [esp+3Ah] [ebp-4A4h]
  int v36; // [esp+42h] [ebp-49Ch]
  unsigned __int8 v37[4]; // [esp+4Eh] [ebp-490h] BYREF
  int v38; // [esp+52h] [ebp-48Ch]
  int v39; // [esp+56h] [ebp-488h] BYREF
  char v40[116]; // [esp+5Ah] [ebp-484h] BYREF
  char v41[12]; // [esp+CEh] [ebp-410h] BYREF
  char v42; // [esp+DAh] [ebp-404h]

  if ( !*a3 ) /*0x575b71*/
    JUMPOUT(0x5763EC); /*0x5763ec*/
  if ( *(int *)(a4 + 8) <= 0 ) /*0x575b7f*/
    *(_DWORD *)(a4 + 8) = 0x7FFFFFFF; /*0x575b81*/
  if ( *(int *)(a4 + 0xC) <= 0 ) /*0x575b87*/
    *(_DWORD *)(a4 + 0xC) = 0x7FFFFFFF; /*0x575b89*/
  if ( *(int *)(a4 + 0x14) <= 0 ) /*0x575b8f*/
    *(_DWORD *)(a4 + 0x14) = 0x7FFFFFFF; /*0x575b91*/
  v36 = 0; /*0x575b98*/
  if ( *(_DWORD *)(a1 + 8) == 3 ) /*0x575b9c*/
    v36 = 6; /*0x575b9e*/
  v4 = *(float *)(*(_DWORD *)(a1 + 0x38) + 0x850); /*0x575ba9*/
  v38 = 0; /*0x575bb7*/
  v32 = 0; /*0x575bbb*/
  Double_To_SInt32(v4); /*0x575bbf*/
  v5 = *((_WORD *)a3 + 2); /*0x575bc8*/
  if ( v5 == 0xFFFF ) /*0x575bd8*/
    v35 = strlen((const char *)*a3); /*0x575beb*/
  else
    v35 = v5; /*0x575bf4*/
  HIDWORD(v25) = 1; /*0x575c05*/
  LODWORD(v25) = v35 + 4; /*0x575c0a*/
  v39 = *(_DWORD *)(a4 + 0x14); /*0x575c10*/
  v31 = (char *)j_MemoryHeap_Alloc(&FormHeap, (char)a3, v25, a2); /*0x575c1f*/
  _memset((int)v31, 0, v35 + 4); /*0x575c23*/
  *(_DWORD *)v37 = v31; /*0x575c33*/
  v6 = j_MemoryHeap_Alloc(&FormHeap, (char)a3, (v35 + 4) | 0x100000000LL, v26); /*0x575c3d*/
  _memset((int)v6, 0, v35 + 4); /*0x575c42*/
  _sprintf(v31, "%s", (const char *)*a3); /*0x575c55*/
  v7 = 0; /*0x575c5f*/
  Src = 0; /*0x575c65*/
  v33 = v35 + 4; /*0x575c69*/
  HIBYTE(v29) = 0; /*0x575c6d*/
  v42 = 0; /*0x575c71*/
  if ( v35 )
  {
    do
    {
      if ( *v31 == 0x26 )
      {
        v8 = 0; /*0x575c9c*/
        if ( !v31[1] ) /*0x575c9e*/
          goto LABEL_23; /*0x575c9e*/
        do /*0x575cca*/
        {
          if ( v8 >= 0x7F ) /*0x575cab*/
            break; /*0x575cab*/
          v9 = v31[v8]; /*0x575cad*/
          if ( v9 == 0x3B ) /*0x575cb3*/
            break; /*0x575cb3*/
          if ( v9 == 0xA ) /*0x575cb8*/
            break; /*0x575cb8*/
          if ( v9 == *(_BYTE *)(a4 + 0x1C) ) /*0x575cbd*/
            break; /*0x575cbd*/
          v40[v8] = v31[v8 + 1]; /*0x575cc3*/
          ++v8; /*0x575cc7*/
        }
        while ( v31[v8 + 1] ); /*0x575cca*/
        if ( v8 ) /*0x575cd2*/
          v10 = v8 - 1; /*0x575cd4*/
        else
LABEL_23:
          v10 = 0; /*0x575cd9*/
        v40[v10] = 0; /*0x575cdb*/
        v11 = strlen(v40); /*0x575cdf*/
        v12 = 0; /*0x575d0a*/
        v13 = *(_DWORD **)(MEMORY[0xB3557C] /*0x575d14*/
                         + 4
                         * (*(int (__thiscall **)(int *, char *))(g_GameSettingsByName + 4))(&g_GameSettingsByName, v40));
        if ( v13 ) /*0x575d19*/
        {
          while ( 1 ) /*0x575d2e*/
          {
            HIDWORD(v24) = &v39; /*0x575d2e*/
            if ( (*(unsigned __int8 (__thiscall **)(int *))(g_GameSettingsByName + 8))(&g_GameSettingsByName) ) /*0x575d37*/
              break; /*0x575d37*/
            v13 = (_DWORD *)*v13; /*0x575d3d*/
            if ( !v13 ) /*0x575d41*/
              goto LABEL_29; /*0x575d41*/
          }
          v12 = v13[2]; /*0x575d45*/
        }
LABEL_29:
        for ( i = 0; i < 0x1D; ++i ) /*0x575d48*/
        {
          if ( *(_DWORD *)(4 * i + 0xB399D0) == v12 ) /*0x575d57*/
            break; /*0x575d57*/
        }
        v15 = i < 0x1D; /*0x575d61*/
        if ( i == 0x1D )
        {
          i = 0; /*0x575d66*/
          while ( 1 )
          {
            v16 = *(_DWORD **)(4 * i + 0xB399D0); /*0x575d70*/
            v17 = v16 ? (const unsigned __int8 *)*v16 : 0;
            if ( !_mbscmp(v17, v37) ) /*0x575d87*/
              break; /*0x575d87*/
            if ( ++i >= 0x1D ) /*0x575d99*/
              goto LABEL_39; /*0x575d99*/
          }
          v15 = i < 0x1D; /*0x575db6*/
        }
        if ( v15 ) /*0x575db9*/
        {
          sub_57C240(i, v41); /*0x575dc4*/
          v18 = strlen(v41); /*0x575dc9*/
          if ( v18 != a1 ) /*0x575de3*/
          {
            v32 += v18 - a1; /*0x575df0*/
            LODWORD(v24) = v32; /*0x575def*/
            v6 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v6, v24); /*0x575dff*/
          }
          v19 = 0; /*0x575e01*/
          if ( v18 ) /*0x575e05*/
          {
            v20 = v27; /*0x575e07*/
            do /*0x575e22*/
              *((_BYTE *)&v6->prev + v20++) = v41[v19++]; /*0x575e17*/
            while ( v19 < v18 ); /*0x575e22*/
            v27 = v20; /*0x575e24*/
          }
          v28 = v28 + a1 - 1; /*0x575e34*/
          v7 = 1; /*0x575e38*/
        }
        else
        {
LABEL_39:
          *((_BYTE *)&v6->prev + v27++) = *(_BYTE *)(v11 + 2); /*0x575d9b*/
          v7 = 1; /*0x575daf*/
        }
      }
      else
      {
        *((_BYTE *)&v6->prev + (_DWORD)Src++) = *v31; /*0x575e40*/
      }
      ++v28; /*0x575e55*/
    }
    while ( v28 < v33 );
  }
  *((_BYTE *)&v6->prev + v27) = 0; /*0x575e65*/
  if ( v7 ) /*0x575e68*/
  {
    v33 = v27; /*0x575e6e*/
    LODWORD(v24) = v27 + 4; /*0x575e75*/
    v36 = (int)MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, Src, v24); /*0x575e83*/
    strcpy((char *)v36, (const char *)v6); /*0x575e87*/
  }
  LOBYTE(v6->prev) = 0; /*0x575ea2*/
  if ( !v33 || (v21 = *(_BYTE *)v36) == 0 ) /*0x575ed8*/
    JUMPOUT(0x5762C8); /*0x5762c8*/
  if ( v21 == 0xB ) /*0x575ee5*/
    goto LABEL_69; /*0x575ee5*/
  v22 = *(_BYTE *)(v29 + 0x1C); /*0x575eef*/
  if ( v21 == v22 ) /*0x575ef8*/
  {
    LOBYTE(v6->prev) = v22; /*0x575f07*/
    if ( v32 <= 1 ) /*0x575f16*/
    {
      LODWORD(v24) = 5; /*0x575f18*/
      MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, v6, v24); /*0x575f1f*/
    }
    Double_To_SInt32(**(float **)0x39 + (double)0 + (double)0); /*0x575f3b*/
    BSSimpleList_PushBack((_DWORD *)(v29 + 0x20), 0); /*0x575f4c*/
    JUMPOUT(0x57625E); /*0x57625e*/
  }
  if ( v21 == 9 ) /*0x575f6d*/
LABEL_69:
    JUMPOUT(0x576273); /*0x576273*/
  switch ( v21 ) /*0x575f9b*/
  {
    case 0x91: /*0x575f9b*/
    case 0x92: /*0x575f9b*/
    case 0x93: /*0x575f9b*/
    case 0x94: /*0x575f9b*/
      return def_575F9B(0, 4, v6, 0, (int)a3, a4);
    default:
      JUMPOUT(0x575FAE); /*0x575fae*/
  }
}
