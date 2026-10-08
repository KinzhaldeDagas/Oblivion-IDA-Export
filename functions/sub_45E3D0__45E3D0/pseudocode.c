//
// Verified: resets two NiTLargeArray fields at manager offsets +0x74/+0x78, reads counted 32-bit arrays, remaps load-order high bytes through manager +0x4C table, and records diagnostic strings Numeric ID Array / WorldSpace ID Array. Strong load path xrefs from 45E4CD/45E5BD. File argument callback layout is only partially typed; BSFile identification Candidate.
// Candidate: stream object inferred only from indirect read callback at stream+4; class identity and return semantics remain unresolved.
char __thiscall SaveLoad_LoadIDArrays(TESSaveLoadGame_SerializationView *self, void *stream)
{
  NiTLargeArrayUInt32 *irefTable; // eax
  unsigned int v4; // edi
  unsigned int i; // ecx
  NiTLargeArrayUInt32 *worldspaceIDArray; // eax
  unsigned int j; // ecx
  void (__cdecl *v8)(void *, unsigned int *, int, int *, int); // edx
  void (__cdecl *v9)(void *, int *, int, int *, int); // edx
  int v10; // edx
  unsigned __int8 v11; // dl
  int v12; // eax
  unsigned int *v13; // esi
  int (__cdecl *v14)(void *, unsigned int *, int, int *, int); // eax
  char result; // al
  unsigned int k; // edi
  void (__cdecl *v17)(void *, int *, int, int *, int); // eax
  int v18; // edx
  unsigned __int8 v19; // dl
  int v20; // eax
  unsigned int *v21; // esi
  int v22; // [esp+10h] [ebp-118h] BYREF
  int v23; // [esp+14h] [ebp-114h] BYREF
  unsigned int v24; // [esp+18h] [ebp-110h] BYREF
  unsigned int v25; // [esp+1Ch] [ebp-10Ch] BYREF
  char v26[260]; // [esp+20h] [ebp-108h] BYREF

  irefTable = self->irefTable; /*0x45e3f0*/
  v4 = 0; /*0x45e3f4*/
  for ( i = 0; i < irefTable->count; ++i ) /*0x45e3f8*/
    irefTable->data[i] = 0; /*0x45e403*/
  irefTable->count = 0; /*0x45e40e*/
  irefTable->nonzeroCount = 0; /*0x45e411*/
  worldspaceIDArray = self->worldspaceIDArray; /*0x45e414*/
  for ( j = 0; j < worldspaceIDArray->count; ++j ) /*0x45e419*/
    worldspaceIDArray->data[j] = 0; /*0x45e423*/
  worldspaceIDArray->count = 0; /*0x45e42e*/
  worldspaceIDArray->nonzeroCount = 0; /*0x45e431*/
  v8 = *((void (__cdecl **)(void *, unsigned int *, int, int *, int))stream + 1); /*0x45e434*/
  v22 = 1; /*0x45e446*/
  v8(stream, &v25, 4, &v22, 1); /*0x45e44e*/
  if ( v25 ) /*0x45e457*/
  {
    do /*0x45e51e*/
    {
      v9 = *((void (__cdecl **)(void *, int *, int, int *, int))stream + 1); /*0x45e460*/
      v23 = 1; /*0x45e472*/
      v9(stream, &v22, 4, &v23, 1); /*0x45e47a*/
      v10 = *(_DWORD *)&self->unknown48[4]; /*0x45e480*/
      if ( !v10 || HIBYTE(v22) == 0xFF ) /*0x45e491*/
      {
        v12 = v22; /*0x45e4b7*/
      }
      else if ( HIBYTE(v22) >= self->unknown48[0] || (v11 = *(_BYTE *)(HIBYTE(v22) + v10), v11 == 0xFF) ) /*0x45e4a1*/
      {
        v12 = 0; /*0x45e4b3*/
      }
      else
      {
        v12 = (v22 & 0xFFFFFF) + (v11 << 0x18); /*0x45e4af*/
      }
      v13 = (unsigned int *)self->irefTable; /*0x45e4b9*/
      v22 = v12; /*0x45e4bc*/
      if ( v4 >= v13[2] ) /*0x45e4c3*/
        NiTLargeArray_Resize32(v13, v4 + v13[5]); /*0x45e4cd*/
      if ( v4 < v13[3] ) /*0x45e4d5*/
      {
        if ( v22 ) /*0x45e4ef*/
        {
          if ( !*(_DWORD *)(v13[1] + 4 * v4) ) /*0x45e4f4*/
            ++v13[4]; /*0x45e4fa*/
        }
        else if ( *(_DWORD *)(v13[1] + 4 * v4) ) /*0x45e503*/
        {
          --v13[4]; /*0x45e509*/
        }
      }
      else
      {
        v13[3] = v4 + 1; /*0x45e4da*/
        if ( v22 ) /*0x45e4e2*/
          ++v13[4]; /*0x45e4e4*/
      }
      *(_DWORD *)(v13[1] + 4 * v4++) = v22; /*0x45e514*/
    }
    while ( v4 < v25 ); /*0x45e51e*/
  }
  v14 = *((int (__cdecl **)(void *, unsigned int *, int, int *, int))stream + 1); /*0x45e524*/
  v23 = 1; /*0x45e536*/
  result = v14(stream, &v24, 4, &v23, 1); /*0x45e53e*/
  for ( k = 0; k < v24; ++k ) /*0x45e549*/
  {
    v17 = *((void (__cdecl **)(void *, int *, int, int *, int))stream + 1); /*0x45e550*/
    v23 = 1; /*0x45e562*/
    v17(stream, &v22, 4, &v23, 1); /*0x45e56a*/
    v18 = *(_DWORD *)&self->unknown48[4]; /*0x45e570*/
    if ( !v18 || HIBYTE(v22) == 0xFF ) /*0x45e581*/
    {
      v20 = v22; /*0x45e5a7*/
    }
    else if ( HIBYTE(v22) >= self->unknown48[0] || (v19 = *(_BYTE *)(HIBYTE(v22) + v18), v19 == 0xFF) ) /*0x45e591*/
    {
      v20 = 0; /*0x45e5a3*/
    }
    else
    {
      v20 = (v22 & 0xFFFFFF) + (v19 << 0x18); /*0x45e59f*/
    }
    v21 = (unsigned int *)self->worldspaceIDArray; /*0x45e5a9*/
    v22 = v20; /*0x45e5ac*/
    if ( k >= v21[2] ) /*0x45e5b3*/
      NiTLargeArray_Resize32(v21, k + v21[5]); /*0x45e5bd*/
    if ( k < v21[3] ) /*0x45e5c5*/
    {
      if ( v22 ) /*0x45e5df*/
      {
        if ( !*(_DWORD *)(v21[1] + 4 * k) ) /*0x45e5e4*/
          ++v21[4]; /*0x45e5ea*/
      }
      else if ( *(_DWORD *)(v21[1] + 4 * k) ) /*0x45e5f3*/
      {
        --v21[4]; /*0x45e5f9*/
      }
    }
    else
    {
      v21[3] = k + 1; /*0x45e5ca*/
      if ( v22 ) /*0x45e5d2*/
        ++v21[4]; /*0x45e5d4*/
    }
    result = v22; /*0x45e600*/
    *(_DWORD *)(v21[1] + 4 * k) = v22; /*0x45e604*/
  }
  if ( *(_DWORD *)&self->unknown38[8] ) /*0x45e614*/
  {
    _sprintf(v26, "Numeric ID Array(%i)", v25); /*0x45e629*/
    sub_4531B0(*(_DWORD **)&self->unknown38[8], (char)self, 4 * v25 + 4, v26); /*0x45e645*/
    _sprintf(v26, "WorldSpace ID Array(%i)", v24); /*0x45e659*/
    return sub_4531B0(*(_DWORD **)&self->unknown38[8], (char)self, 4 * v24 + 4, v26); /*0x45e675*/
  }
  return result; /*0x45e67a*/
}
