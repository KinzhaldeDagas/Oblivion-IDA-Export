// Oblivion IdvNoPath helper: copies the input 28-byte SSO string, scans backward for '/' or '\', and constructs the returned basename string. RT4.1 IdvFilename.h corroborates the algorithm/name.
OB_stString28_010201A0 *__thiscall OB_IdvNoPath_010201A0(
        const OB_stString28_010201A0 *filename,
        OB_stString28_010201A0 *result)
{
  OB_stString28_010201A0 *v3; // edi
  OB_stStringStorage16_010201A0 *p_storage; // ecx
  char *v5; // edx
  char v6; // al
  unsigned int v7; // esi
  OB_stStringStorage16_010201A0 *v8; // ebp
  OB_stStringStorage16_010201A0 *v9; // eax
  OB_stStringStorage16_010201A0 *v10; // eax
  signed int v11; // esi
  int v12; // ebp
  char *v13; // edi
  OB_stStringStorage16_010201A0 *heapData; // eax
  signed int size; // [esp+14h] [ebp-434h]
  OB_stString28_010201A0 source; // [esp+1Ch] [ebp-42Ch] BYREF
  char Src[1024]; // [esp+38h] [ebp-410h] BYREF
  int v19; // [esp+444h] [ebp-4h]

  v3 = result; /*0x78946d*/
  if ( filename->capacity < 0x10 ) /*0x789482*/
    p_storage = &filename->storage; /*0x789489*/
  else
    p_storage = (OB_stStringStorage16_010201A0 *)filename->storage.heapData; /*0x789484*/
  v5 = Src; /*0x78948c*/
  do /*0x78949c*/
  {
    v6 = p_storage->inlineData[0]; /*0x789490*/
    *v5 = p_storage->inlineData[0]; /*0x789492*/
    p_storage = (OB_stStringStorage16_010201A0 *)((char *)p_storage + 1); /*0x789494*/
    ++v5; /*0x789497*/
  }
  while ( v6 ); /*0x78949c*/
  size = filename->size; /*0x7894a1*/
  v7 = size - 1; /*0x7894a5*/
  if ( size - 1 >= 0 )
  {
    while ( 1 )
    {
      if ( v7 > filename->size ) /*0x7894b3*/
        _invalid_parameter_noinfo((int)filename, (int)result, v7); /*0x7894b5*/
      v8 = &filename->storage; /*0x7894be*/
      v9 = filename->capacity < 0x10 ? &filename->storage : (OB_stStringStorage16_010201A0 *)v8->heapData;
      if ( v9->inlineData[v7] == 0x2F ) /*0x7894ce*/
        break; /*0x7894ce*/
      if ( v7 > filename->size ) /*0x7894d3*/
        _invalid_parameter_noinfo((int)filename, (int)result, v7); /*0x7894d5*/
      v10 = filename->capacity < 0x10 ? &filename->storage : (OB_stStringStorage16_010201A0 *)v8->heapData;
      if ( v10->inlineData[v7] == 0x5C ) /*0x7894eb*/
        break; /*0x7894eb*/
      if ( (int)--v7 < 0 ) /*0x7894f0*/
        goto LABEL_31; /*0x7894f0*/
    }
    v11 = v7 + 1; /*0x7894f4*/
    v12 = 0; /*0x7894f7*/
    if ( v11 < size ) /*0x7894fd*/
    {
      v13 = &Src[-v11]; /*0x789507*/
      v12 = size - v11; /*0x789509*/
      do /*0x789535*/
      {
        if ( v11 > filename->size ) /*0x789513*/
          _invalid_parameter_noinfo((int)filename, (int)v13, v11); /*0x789515*/
        if ( filename->capacity < 0x10 ) /*0x78951e*/
          heapData = &filename->storage; /*0x789525*/
        else
          heapData = (OB_stStringStorage16_010201A0 *)filename->storage.heapData; /*0x789520*/
        v13[v11] = heapData->inlineData[v11]; /*0x78952b*/
        ++v11; /*0x78952e*/
      }
      while ( v11 < size ); /*0x789535*/
      v3 = result; /*0x789537*/
    }
    Src[v12] = 0; /*0x78953b*/
  }
LABEL_31:
  source.capacity = 0xF; /*0x789542*/
  source.size = 0; /*0x78954f*/
  source.storage.inlineData[0] = 0; /*0x789553*/
  OB_stString28_AssignBytes_010201A0(&source, Src, strlen(Src)); /*0x789575*/
  v3->capacity = 0xF; /*0x789581*/
  v3->size = 0; /*0x789584*/
  v19 = 0; /*0x78958a*/
  v3->storage.inlineData[0] = 0; /*0x789591*/
  OB_stString28_AssignSubstring_010201A0(v3, &source, 0, 0xFFFFFFFF); /*0x789595*/
  if ( source.capacity >= 0x10 ) /*0x78959f*/
    FormHeapFree((unsigned int)source.storage.heapData); /*0x7895a6*/
  return v3; /*0x7895b0*/
}
