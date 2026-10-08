// Save NiTriShapeData triangle indices and serialize each shared-normal entry as a UInt16 count followed by that entry's UInt16 vertex indices.
void __thiscall NiTriShapeData_Save(NiTriShapeData *self, NiStream *stream)
{
  NiStream *v2; // ebx
  void (__cdecl *v4)(int, UInt32 *, int, int *, int); // edx
  void (__cdecl *v5)(int, NiStream **, int, int *, int); // eax
  void (__cdecl *v6)(int, UInt16 *, UInt32, int *, int); // edx
  void (__cdecl *v7)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 entryIndex; // bp
  int v9; // esi
  int v10; // eax
  void (__cdecl *v11)(int, int *, int, int *, int); // edx
  void (__cdecl *v12)(int, unsigned __int16 *, int, int *, int); // edx
  int v13; // [esp-28h] [ebp-40h]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp-14h] [ebp-2Ch]
  int v17; // [esp-14h] [ebp-2Ch]
  UInt16 *m_pusTriList; // [esp-10h] [ebp-28h]
  unsigned __int16 *indices; // [esp-10h] [ebp-28h]
  UInt32 v20; // [esp-Ch] [ebp-24h]
  int count; // [esp+10h] [ebp-8h] BYREF
  int v22; // [esp+14h] [ebp-4h] BYREF

  v2 = stream; /*0x7201b4*/
  sub_732EB0((NiTriBasedGeomData *)self, (int)stream); /*0x7201be*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(*((_DWORD *)v2 + 0x88) + 8); /*0x7201c9*/
  v14 = *((_DWORD *)v2 + 0x88); /*0x7201d9*/
  count = 4; /*0x7201da*/
  v4(v14, &self->member.m_uiTriListLength, 4, &count, 1); /*0x7201e2*/
  LOBYTE(stream) = self->member.m_pusTriList != 0; /*0x7201f2*/
  v13 = *((_DWORD *)v2 + 0x88); /*0x720203*/
  v5 = *(void (__cdecl **)(int, NiStream **, int, int *, int))(v13 + 8); /*0x720204*/
  count = 1; /*0x720207*/
  v5(v13, &stream, 1, &count, 1); /*0x72020f*/
  if ( (_BYTE)stream ) /*0x720219*/
  {
    v20 = 2 * self->member.m_uiTriListLength; /*0x72022f*/
    v6 = *(void (__cdecl **)(int, UInt16 *, UInt32, int *, int))(*((_DWORD *)v2 + 0x88) + 8); /*0x720230*/
    m_pusTriList = self->member.m_pusTriList; /*0x720233*/
    v15 = *((_DWORD *)v2 + 0x88); /*0x720234*/
    count = 2; /*0x720235*/
    v6(v15, m_pusTriList, v20, &count, 1); /*0x72023d*/
  }
  v7 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*((_DWORD *)v2 + 0x88) + 8); /*0x720248*/
  v16 = *((_DWORD *)v2 + 0x88); /*0x720258*/
  count = 2; /*0x720259*/
  v7(v16, &self->member.m_usSharedNormalsArraySize, 2, &count, 1);// Write the 16-bit shared-normal entry-array length. /*0x720261*/
  for ( entryIndex = 0; entryIndex < self->member.m_usSharedNormalsArraySize; ++entryIndex ) /*0x720268*/
  {
    v9 = entryIndex; /*0x72027a*/
    v10 = *((_DWORD *)v2 + 0x88); /*0x720280*/
    count = self->member.m_pkSharedNormals[v9].count;// Write each entry's UInt16 count followed by its pooled vertex-index list. /*0x72028d*/
    v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 8); /*0x720291*/
    v22 = 2; /*0x72029c*/
    v11(v10, &count, 2, &v22, 1); /*0x7202a4*/
    if ( (_WORD)count ) /*0x7202b0*/
    {
      v12 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*((_DWORD *)v2 + 0x88) + 8); /*0x7202cc*/
      indices = self->member.m_pkSharedNormals[v9].indices; /*0x7202cf*/
      v17 = *((_DWORD *)v2 + 0x88); /*0x7202d0*/
      v22 = 2; /*0x7202d1*/
      v12(v17, indices, 2 * (unsigned __int16)count, &v22, 1); /*0x7202d9*/
    }
  }
}
