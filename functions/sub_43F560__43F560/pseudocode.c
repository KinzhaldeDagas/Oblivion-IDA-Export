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

  v2 = (float *)FormHeapAlloc(0x4Cu); /*0x43f589*/
  v3 = 0; /*0x43f595*/
  if ( v2 ) /*0x43f59d*/
    sub_49CD10(v2); /*0x43f5a1*/
  else
    v4 = 0; /*0x43f5a8*/
  v5 = *(this + 0x16) == 0; /*0x43f5ad*/
  *(this + 0x15) = v4; /*0x43f5b4*/
  if ( v5 ) /*0x43f5b7*/
  {
    v6 = FormHeapAlloc(0x38u); /*0x43f5bb*/
    if ( v6 ) /*0x43f5d1*/
      v7 = (_DWORD *)sub_49D140(v6); /*0x43f5d5*/
    else
      v7 = 0; /*0x43f5dc*/
    *(this + 0x16) = v7; /*0x43f5de*/
    v8 = (double)(uGridsToLoad << 0xB); /*0x43f5f0*/
    if ( (uGridsToLoad & 0x100000) != 0 ) /*0x43f5fd*/
      v8 = v8 + flt_A2FC78; /*0x43f5ff*/
    v16 = v8; /*0x43f608*/
    sub_49E610(v7, v16, "Interior Water Node"); /*0x43f60b*/
    sub_499FF0((_DWORD *)*(this + 0x16)); /*0x43f613*/
  }
  v9 = uGridsToLoad; /*0x43f618*/
  while ( v3 < v9 ) /*0x43f622*/
  {
    for ( i = 0; i < v9; ++i ) /*0x43f624*/
    {
      GridEntry = GetGridEntry((GridCellArray *)*(this + 2), v3, i); /*0x43f634*/
      if ( !GridEntry->info ) /*0x43f636*/
      {
        v12 = FormHeapAlloc(0x38u); /*0x43f63e*/
        if ( v12 ) /*0x43f654*/
          v13 = (CellInfo *)sub_49D140(v12); /*0x43f658*/
        else
          v13 = 0; /*0x43f65f*/
        v17 = flt_A2FF44; /*0x43f66f*/
        GridEntry->info = v13; /*0x43f67a*/
        sub_49E610(v13, v17, "Water Node"); /*0x43f67d*/
        sub_499FF0(&GridEntry->info->unk00); /*0x43f685*/
      }
      v9 = uGridsToLoad; /*0x43f68a*/
    }
    ++v3; /*0x43f694*/
  }
  if ( byte_B07050 ) /*0x43f699*/
  {
    if ( OB_RendererGlobalState_010201A0[0xA5] ) /*0x43f6a2*/
    {
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x43f6b2*/
      {
        v14 = (NiAVObject *)sub_49A140(); /*0x43f6ba*/
        LOBYTE(v9) = BSShaderManager_AssignShadersRecursive(v14, 0x11u, 0, 1); /*0x43f6c0*/
      }
    }
  }
  return v9; /*0x43f6c8*/
}
