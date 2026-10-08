char Cmd_OutputLocalMapPictures_Execute()
{
  unsigned int v0; // ebp
  int *v1; // eax
  void (__thiscall ***v2)(_DWORD, int); // esi
  unsigned int v3; // eax
  unsigned int i; // edi
  unsigned int j; // ebp
  GridEntry *GridEntry; // eax
  TESForm **v7; // esi
  int v8; // ecx
  char v9; // bl
  TESForm *v10; // ecx
  int v11; // eax
  bool v12; // zf
  void (__thiscall ***v13)(_DWORD, int); // esi
  int *v14; // eax
  unsigned int v15; // ecx
  int v16; // edi
  int v17; // esi
  unsigned int v18; // edx
  int v19; // edi
  int v20; // esi
  char v21; // bl
  TES *v22; // eax
  BSRenderedTexture *v23; // edx
  TESForm *currentInteriorCell; // ecx
  BSRenderedTexture *v25; // eax
  BSRenderedTexture *v26; // esi
  int v27; // esi
  BSRenderedTexture *v29; // [esp-4h] [ebp-4Ch]
  char v30; // [esp+17h] [ebp-31h]
  BSRenderedTexture *v31; // [esp+18h] [ebp-30h] BYREF
  int v32; // [esp+1Ch] [ebp-2Ch] BYREF
  int v33; // [esp+20h] [ebp-28h]
  int v34[3]; // [esp+24h] [ebp-24h] BYREF
  int v35[3]; // [esp+30h] [ebp-18h] BYREF
  int v36; // [esp+44h] [ebp-4h]

  v0 = 0; /*0x50e6c7*/
  v30 = 0; /*0x50e6cf*/
  if ( !unk_B42D44 ) /*0x50e6c9*/
  {
    v1 = NiSourceTexture_LoadChecked(&v32, "Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds", 1, 0); /*0x50e6e3*/
    v36 = 0; /*0x50e6f1*/
    OB_NiSmartPointer_Assign_010201A0(&unk_B42D44, v1); /*0x50e6f5*/
    v36 = 0xFFFFFFFF; /*0x50e700*/
    if ( v32 ) /*0x50e708*/
    {
      v2 = (void (__thiscall ***)(_DWORD, int))v32; /*0x50e70a*/
      if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) ) /*0x50e710*/
        (**v2)(v2, 1); /*0x50e726*/
    }
    v30 = 1; /*0x50e728*/
  }
  if ( MEMORY[0xB333A0]->currentInteriorCell ) /*0x50e733*/
  {
    v14 = (int *)reference->vtbl->super.super.super.GetPos(reference); /*0x50e7f6*/
    v34[0] = *v14; /*0x50e7fa*/
    v34[1] = v14[1]; /*0x50e801*/
    v34[2] = v14[2]; /*0x50e808*/
    while ( 1 ) /*0x50e810*/
    {
      v15 = uGridsToLoad; /*0x50e810*/
      if ( v0 >= v15 * v15 ) /*0x50e81d*/
        break; /*0x50e81d*/
      v16 = v0 / v15; /*0x50e82b*/
      v17 = v0 % v15; /*0x50e835*/
      sub_4CCE20((ExtraDataList *)MEMORY[0xB333A0]->currentInteriorCell, (float *)v34, v35, COERCE_FLOAT(1)); /*0x50e841*/
      v32 = (int)*(float *)v35; /*0x50e84a*/
      v33 = (int)*(float *)&v35[1]; /*0x50e85e*/
      v18 = (unsigned int)uGridsToLoad >> 1; /*0x50e875*/
      v19 = v16 + ((v33 - 0x800) >> 0xC) - v18; /*0x50e87d*/
      v20 = v17 + ((v32 - 0x800) >> 0xC) - v18; /*0x50e88b*/
      sub_4D0C20(MEMORY[0xB333A0]->currentInteriorCell, &v31, v20, v19); /*0x50e893*/
      v21 = unk_B3F958; /*0x50e898*/
      v22 = MEMORY[0xB333A0]; /*0x50e89e*/
      v23 = v31; /*0x50e8a3*/
      unk_B3F958 = 0; /*0x50e8a9*/
      currentInteriorCell = (TESForm *)v22->currentInteriorCell; /*0x50e8b0*/
      v36 = 2; /*0x50e8b4*/
      sub_4D1230(currentInteriorCell, v23, v20, v19); /*0x50e8bc*/
      v25 = v31; /*0x50e8c1*/
      v12 = v31 == 0; /*0x50e8c5*/
      unk_B3F958 = v21; /*0x50e8c7*/
      v36 = 0xFFFFFFFF; /*0x50e8cd*/
      if ( !v12 ) /*0x50e8d5*/
      {
        v26 = v25; /*0x50e8d7*/
        if ( !InterlockedDecrement((volatile LONG *)&v25->members) ) /*0x50e8dd*/
        {
          if ( v26 ) /*0x50e8e9*/
            ((void (__thiscall *)(BSRenderedTexture *, int))*v26->vtbl)(v26, 1); /*0x50e8f3*/
        }
      }
      ++v0; /*0x50e8f5*/
    }
  }
  else
  {
    v3 = uGridsToLoad; /*0x50e73c*/
    for ( i = 0; i < v3; ++i ) /*0x50e741*/
    {
      for ( j = 0; j < v3; ++j ) /*0x50e74b*/
      {
        GridEntry = GetGridEntry(MEMORY[0xB333A0]->gridCellArray, i, j); /*0x50e763*/
        v7 = (TESForm **)GridEntry; /*0x50e768*/
        if ( GridEntry ) /*0x50e76c*/
        {
          if ( GridEntry->cell ) /*0x50e76e*/
          {
            sub_4D06C0(GridEntry->cell, &v32); /*0x50e779*/
            v8 = v32; /*0x50e77e*/
            v9 = unk_B3F958; /*0x50e782*/
            unk_B3F958 = 0; /*0x50e788*/
            v29 = (BSRenderedTexture *)v8; /*0x50e78f*/
            v10 = *v7; /*0x50e790*/
            v36 = 1; /*0x50e792*/
            sub_4D1130(v10, v29); /*0x50e79a*/
            v11 = v32; /*0x50e79f*/
            v12 = v32 == 0; /*0x50e7a3*/
            unk_B3F958 = v9; /*0x50e7a5*/
            v36 = 0xFFFFFFFF; /*0x50e7ab*/
            if ( !v12 ) /*0x50e7b3*/
            {
              v13 = (void (__thiscall ***)(_DWORD, int))v11; /*0x50e7b5*/
              if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x50e7bb*/
              {
                if ( v13 ) /*0x50e7c7*/
                  (**v13)(v13, 1); /*0x50e7d1*/
              }
            }
          }
        }
        v3 = uGridsToLoad; /*0x50e7d3*/
      }
    }
  }
  if ( v30 ) /*0x50e902*/
  {
    v27 = unk_B42D44; /*0x50e904*/
    if ( unk_B42D44 ) /*0x50e904*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) ) /*0x50e912*/
      {
        if ( v27 ) /*0x50e91e*/
          (**(void (__thiscall ***)(int, int))v27)(v27, 1); /*0x50e928*/
      }
      unk_B42D44 = 0; /*0x50e92a*/
    }
  }
  return 1; /*0x50e936*/
}
