int __thiscall sub_7D8160(int **this, const char *a2, char a3, const char *a4)
{
  int *v5; // eax
  int *v6; // ecx
  void (__thiscall ***v7)(_DWORD, int); // ebp
  int *v8; // eax
  int *v9; // ecx
  LONG (__stdcall *v10)(volatile LONG *); // ebx
  void (__thiscall ***v11)(_DWORD, int); // ebp
  void (__thiscall *v12)(int **, _DWORD, int); // edx
  void (__thiscall ***v13)(_DWORD, int); // ebp
  void (__thiscall *v14)(int **, int, int); // edx
  void (__thiscall ***v15)(_DWORD, int); // edi
  int v16; // edi
  char v17; // bl
  int v18; // eax
  int v19; // eax
  bool v20; // al
  int v21; // ecx
  int v22; // edi
  int v23; // eax
  int v24; // eax
  char v25; // al
  int v26; // ebx
  bool v27; // zf
  int v28; // edi
  int v29; // eax
  int v30; // eax
  bool v31; // al
  int result; // eax
  int v33; // edi
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // [esp+14h] [ebp-120h] BYREF
  const char *v38; // [esp+18h] [ebp-11Ch]
  int v39; // [esp+1Ch] [ebp-118h] BYREF
  char Src[260]; // [esp+20h] [ebp-114h] BYREF
  int v41; // [esp+130h] [ebp-4h]

  v38 = a2; /*0x7d81af*/
  BuildTextureVariantPath(Src, a2, (int)"_n"); /*0x7d81ba*/
  if ( Src[0] ) /*0x7d81ce*/
  {
    v5 = NiSourceTexture_LoadChecked(&v37, Src, a3, 1); /*0x7d81dd*/
    v6 = *(this + 0x30); /*0x7d81e5*/
    v41 = 0; /*0x7d81ec*/
    OB_NiSmartPointer_Assign_010201A0(v6, v5); /*0x7d81f7*/
    v41 = 0xFFFFFFFF; /*0x7d8202*/
    if ( v37 ) /*0x7d820d*/
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v37; /*0x7d820f*/
      if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) ) /*0x7d8215*/
        (**v7)(v7, 1); /*0x7d822c*/
    }
  }
  if ( a4 /*0x7d828c*/
    && (BuildTextureVariantPath(Src, a4, (int)"_n"), Src[0])
    && (v8 = NiSourceTexture_LoadChecked(&v37, Src, a3, 1),
        v9 = *(this + 0x30) + 1,
        v41 = 1,
        OB_NiSmartPointer_Assign_010201A0(v9, v8),
        v41 = 0xFFFFFFFF,
        v37) )
  {
    v10 = InterlockedDecrement; /*0x7d828e*/
    v11 = (void (__thiscall ***)(_DWORD, int))v37; /*0x7d8294*/
    if ( !InterlockedDecrement((volatile LONG *)(v37 + 4)) ) /*0x7d829a*/
      (**v11)(v11, 1); /*0x7d82ad*/
  }
  else
  {
    v10 = InterlockedDecrement; /*0x7d82b1*/
  }
  BuildTextureVariantPath(Src, v38, (int)"_g"); /*0x7d82c6*/
  if ( Src[0] ) /*0x7d82d3*/
  {
    NiSourceTexture_LoadChecked(&v37, Src, a3, 1); /*0x7d82e2*/
    v12 = (void (__thiscall *)(int **, _DWORD, int))(*this)[0x25]; /*0x7d82f0*/
    v41 = 2; /*0x7d82fb*/
    v12(this, 0, v37); /*0x7d8306*/
    v41 = 0xFFFFFFFF; /*0x7d830e*/
    if ( v37 ) /*0x7d8319*/
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v37; /*0x7d831b*/
      if ( !v10((volatile LONG *)(v37 + 4)) ) /*0x7d8321*/
        (**v13)(v13, 1); /*0x7d8334*/
    }
  }
  if ( ((unsigned int)*(this + 7) & 0x40000) != 0 ) /*0x7d833d*/
  {
    BuildTextureVariantPath(Src, v38, (int)&suffix); /*0x7d8352*/
    if ( Src[0] ) /*0x7d835f*/
    {
      NiSourceTexture_LoadChecked(&v39, Src, a3, 1); /*0x7d836e*/
      v14 = (void (__thiscall *)(int **, int, int))(*this)[0x20]; /*0x7d837c*/
      v41 = 3; /*0x7d8387*/
      v14(this, 1, v39); /*0x7d8392*/
      v41 = 0xFFFFFFFF; /*0x7d839c*/
      if ( v39 ) /*0x7d83a7*/
      {
        v15 = (void (__thiscall ***)(_DWORD, int))v39; /*0x7d83a9*/
        if ( !v10((volatile LONG *)(v39 + 4)) ) /*0x7d83af*/
          (**v15)(v15, 1); /*0x7d83c1*/
      }
    }
  }
  if ( ((unsigned int)*(this + 7) & 0x20000) == 0 )
  {
    v16 = **(this + 0x30); /*0x7d83e0*/
    v17 = ((unsigned int)*(this + 7) & 0x80) != 0; /*0x7d83e2*/
    if ( v16 ) /*0x7d83e7*/
    {
      if ( *(_DWORD *)(v16 + 0x24) ) /*0x7d83e9*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 0x24) + 0xC))(*(_DWORD *)(v16 + 0x24)) ) /*0x7d83f6*/
        {
          if ( *(_DWORD *)(v16 + 0x24) ) /*0x7d83fc*/
            v18 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 0x24) + 0xC))(*(_DWORD *)(v16 + 0x24)); /*0x7d8409*/
          else
            v18 = 0; /*0x7d840d*/
          v19 = *(_DWORD *)(v18 + 4); /*0x7d840f*/
          v20 = v19 == 5 || v19 == 6 || v19 == 1; /*0x7d8425*/
          v17 |= v20; /*0x7d842a*/
        }
      }
    }
    if ( v17 ) /*0x7d842e*/
      *(this + 7) = (int *)((unsigned int)*(this + 7) | 1); /*0x7d8430*/
    else
      *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFFE); /*0x7d8436*/
    v21 = (int)*(this + 0x30); /*0x7d843a*/
    *(this + 9) = 0; /*0x7d8440*/
    v22 = *(_DWORD *)(v21 + 4); /*0x7d8443*/
    if ( v22
      && *(_DWORD *)(v22 + 0x24)
      && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x24) + 0xC))(*(_DWORD *)(v22 + 0x24))
      && (!*(_DWORD *)(v22 + 0x24)
        ? (v23 = 0)
        : (v23 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x24) + 0xC))(*(_DWORD *)(v22 + 0x24))),
          (v24 = *(_DWORD *)(v23 + 4), v24 == 5) || v24 == 6 || v24 == 1 ? (v25 = 1) : (v25 = 0),
          v25) )
    {
      *(this + 7) = (int *)((unsigned int)*(this + 7) | 0x10); /*0x7d848f*/
    }
    else
    {
      *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFEF); /*0x7d8495*/
    }
    v26 = 0; /*0x7d8499*/
    v27 = *((_WORD *)this + 0x5C) == 0; /*0x7d849b*/
    *(this + 9) = 0; /*0x7d84a2*/
    if ( !v27 ) /*0x7d84a5*/
    {
      do /*0x7d8513*/
      {
        v28 = (*(this + 0x30))[v26]; /*0x7d84b6*/
        if ( v28 ) /*0x7d84bb*/
        {
          if ( *(_DWORD *)(v28 + 0x24) ) /*0x7d84bd*/
          {
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x24) + 0xC))(*(_DWORD *)(v28 + 0x24)) ) /*0x7d84ca*/
            {
              if ( *(_DWORD *)(v28 + 0x24) ) /*0x7d84d0*/
                v29 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v28 + 0x24) + 0xC))(*(_DWORD *)(v28 + 0x24)); /*0x7d84dd*/
              else
                v29 = 0; /*0x7d84e1*/
              v30 = *(_DWORD *)(v29 + 4); /*0x7d84e3*/
              v31 = v30 == 5 || v30 == 6 || v30 == 1; /*0x7d84f9*/
              *((_BYTE *)*(this + 0x34) + v26) = v31; /*0x7d8504*/
            }
          }
        }
        ++v26; /*0x7d850e*/
      }
      while ( v26 < *((unsigned __int16 *)this + 0x5C) ); /*0x7d8513*/
    }
  }
  result = (int)*(this + 0x2F); /*0x7d8515*/
  v33 = *(_DWORD *)result; /*0x7d851b*/
  if ( *(_DWORD *)result
    && *(_DWORD *)(v33 + 0x24)
    && (result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v33 + 0x24) + 0xC))(*(_DWORD *)(v33 + 0x24))) != 0
    && (!*(_DWORD *)(v33 + 0x24)
      ? (v34 = 0)
      : (v34 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v33 + 0x24) + 0xC))(*(_DWORD *)(v33 + 0x24))),
        (v35 = *(_DWORD *)(v34 + 4), v35 == 5) || v35 == 6 || v35 == 1 ? (result = 1) : (result = 0),
        (_BYTE)result && (result = (int)*(this + 7), (result & 0x800) == 0)) )
  {
    result |= 0x100u; /*0x7d8570*/
    *(this + 7) = (int *)result; /*0x7d8575*/
  }
  else
  {
    *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFEFF); /*0x7d857a*/
  }
  v36 = (int)*(this + 0x2F); /*0x7d8581*/
  *(this + 9) = 0; /*0x7d8587*/
  v27 = *(_DWORD *)(v36 + 4) == 0; /*0x7d858a*/
  *(this + 9) = 0; /*0x7d858d*/
  if ( v27 ) /*0x7d8590*/
    *(this + 7) = (int *)((unsigned int)*(this + 7) & 0xFFFFFFF7); /*0x7d8598*/
  else
    *(this + 7) = (int *)((unsigned int)*(this + 7) | 8); /*0x7d8592*/
  return result; /*0x7d859c*/
}
