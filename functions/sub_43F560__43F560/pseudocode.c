char __thiscall sub_43F560(_DWORD *this)
{
  float *v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  _DWORD *v7; // eax
  double v8; // st7
  unsigned int v9; // eax
  unsigned int i; // edi
  GridEntry *GridEntry; // esi
  int v12; // eax
  CellInfo *v13; // eax
  NiAVObject *v14; // eax
  float v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+0h] [ebp-2Ch]

  v2 = (float *)FormHeapAlloc(0x4Cu);
  v3 = 0;
  if ( v2 )
    sub_49CD10(v2);
  else
    v4 = 0;
  v5 = *(this + 0x16) == 0;
  *(this + 0x15) = v4;
  if ( v5 )
  {
    v6 = FormHeapAlloc(0x38u);
    if ( v6 )
      v7 = (_DWORD *)sub_49D140(v6);
    else
      v7 = 0;
    *(this + 0x16) = v7;
    v8 = (double)(uGridsToLoad << 0xB);
    if ( (uGridsToLoad & 0x100000) != 0 )
      v8 = v8 + flt_A2FC78;
    v16 = v8;
    sub_49E610(v7, v16, (int)"Interior Water Node");
    sub_499FF0((_DWORD *)*(this + 0x16));
  }
  v9 = uGridsToLoad;
  while ( v3 < v9 )
  {
    for ( i = 0; i < v9; ++i )
    {
      GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v3, i);
      if ( !GridEntry->info )
      {
        v12 = FormHeapAlloc(0x38u);
        if ( v12 )
          v13 = (CellInfo *)sub_49D140(v12);
        else
          v13 = 0;
        v17 = flt_A2FF44;
        GridEntry->info = v13;
        sub_49E610(v13, v17, (int)"Water Node");
        sub_499FF0(&GridEntry->info->unk00);
      }
      v9 = uGridsToLoad;
    }
    ++v3;
  }
  if ( byte_B07050 )
  {
    if ( ImageSpaceEffectEnabled )
    {
      if ( ShaderPackage >= 2 )
      {
        v14 = (NiAVObject *)sub_49A140();
        LOBYTE(v9) = sub_7B8940(v14, 0x11, 0, 1);
      }
    }
  }
  return v9;
}
