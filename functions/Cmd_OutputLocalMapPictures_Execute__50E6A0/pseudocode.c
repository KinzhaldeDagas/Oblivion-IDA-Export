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

  v0 = 0;
  v30 = 0;
  if ( !dword_B42D44 )
  {
    v1 = sub_7B8200(&v32, "Data\\Textures\\Menus\\Map\\local\\MapPaper01.dds", 1, 0);
    v36 = 0;
    sub_55E2A0(&dword_B42D44, v1);
    v36 = 0xFFFFFFFF;
    if ( v32 )
    {
      v2 = (void (__thiscall ***)(_DWORD, int))v32;
      if ( !InterlockedDecrement((volatile LONG *)(v32 + 4)) )
        (**v2)(v2, 1);
    }
    v30 = 1;
  }
  if ( TES->currentInteriorCell )
  {
    v14 = (int *)TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    v34[0] = *v14;
    v34[1] = v14[1];
    v34[2] = v14[2];
    while ( 1 )
    {
      v15 = uGridsToLoad;
      if ( v0 >= v15 * v15 )
        break;
      v16 = v0 / v15;
      v17 = v0 % v15;
      sub_4CCE20((ExtraDataList *)TES->currentInteriorCell, (float *)v34, v35, COERCE_FLOAT(1));
      v32 = (int)*(float *)v35;
      v33 = (int)*(float *)&v35[1];
      v18 = (unsigned int)uGridsToLoad >> 1;
      v19 = v16 + ((v33 - 0x800) >> 0xC) - v18;
      v20 = v17 + ((v32 - 0x800) >> 0xC) - v18;
      sub_4D0C20(TES->currentInteriorCell, &v31, v20, v19);
      v21 = byte_B3F958;
      v22 = TES;
      v23 = v31;
      byte_B3F958 = 0;
      currentInteriorCell = (TESForm *)v22->currentInteriorCell;
      v36 = 2;
      sub_4D1230(currentInteriorCell, v23, v20, v19);
      v25 = v31;
      v12 = v31 == 0;
      byte_B3F958 = v21;
      v36 = 0xFFFFFFFF;
      if ( !v12 )
      {
        v26 = v25;
        if ( !InterlockedDecrement((volatile LONG *)&v25->members) )
        {
          if ( v26 )
            ((void (__thiscall *)(BSRenderedTexture *, int))*v26->vtbl)(v26, 1);
        }
      }
      ++v0;
    }
  }
  else
  {
    v3 = uGridsToLoad;
    for ( i = 0; i < v3; ++i )
    {
      for ( j = 0; j < v3; ++j )
      {
        GridEntry = GetGridEntry(TES->gridCellArray, i, j);
        v7 = (TESForm **)GridEntry;
        if ( GridEntry )
        {
          if ( GridEntry->cell )
          {
            sub_4D06C0(GridEntry->cell, &v32);
            v8 = v32;
            v9 = byte_B3F958;
            byte_B3F958 = 0;
            v29 = (BSRenderedTexture *)v8;
            v10 = *v7;
            v36 = 1;
            sub_4D1130(v10, v29);
            v11 = v32;
            v12 = v32 == 0;
            byte_B3F958 = v9;
            v36 = 0xFFFFFFFF;
            if ( !v12 )
            {
              v13 = (void (__thiscall ***)(_DWORD, int))v11;
              if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
              {
                if ( v13 )
                  (**v13)(v13, 1);
              }
            }
          }
        }
        v3 = uGridsToLoad;
      }
    }
  }
  if ( v30 )
  {
    v27 = dword_B42D44;
    if ( dword_B42D44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v27 + 4)) )
      {
        if ( v27 )
          (**(void (__thiscall ***)(int, int))v27)(v27, 1);
      }
      dword_B42D44 = 0;
    }
  }
  return 1;
}
