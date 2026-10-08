// Load NiTriShapeData triangle indices and its serialized shared-normal table. The table is an array of 8-byte {UInt16 count, UInt16* indices} entries backed by linked index-pool blocks.
void __thiscall NiTriShapeData_Load(NiTriShapeData *self, NiStream *stream)
{
  NiStream *v3; // ebx
  void (__cdecl *v4)(int, UInt32 *, int, int *, int); // edx
  UInt32 *p_m_uiTriListLength; // esi
  void (__cdecl *v6)(int, NiStream **, int, int *, int); // eax
  UInt16 *v7; // eax
  int v8; // edx
  void (__cdecl *v9)(int, UInt16 *, int, int *, int); // eax
  void (__cdecl *v10)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 m_usSharedNormalsArraySize; // ax
  int v12; // edi
  NiSharedNormalArrayEntry *v13; // eax
  NiSharedNormalArrayEntry *v14; // esi
  NiSharedNormalIndexPoolBlock *v15; // eax
  NiSharedNormalIndexPoolBlock *v16; // eax
  bool v17; // zf
  void (__cdecl *v18)(int, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 *cursor; // esi
  unsigned __int16 v20; // cx
  NiSharedNormalIndexPoolBlock *m_pkSharedNormalIndexPool; // eax
  int *v22; // esi
  unsigned int v23; // edi
  int v24; // eax
  void (__cdecl *v25)(int, unsigned __int16 *, int, int *, int); // eax
  int v26; // edx
  NiSharedNormalArrayEntry *v27; // eax
  int v28; // edx
  bool v29; // cf
  int v30; // [esp-18h] [ebp-48h]
  int v31; // [esp-14h] [ebp-44h]
  int v32; // [esp-14h] [ebp-44h]
  UInt16 *v33; // [esp-14h] [ebp-44h]
  int v34; // [esp-14h] [ebp-44h]
  int v35; // [esp-14h] [ebp-44h]
  int v36; // [esp-14h] [ebp-44h]
  unsigned __int16 sharedIndexCount; // [esp+14h] [ebp-1Ch] BYREF
  int entryIndex; // [esp+18h] [ebp-18h] BYREF
  int v39; // [esp+1Ch] [ebp-14h] BYREF
  int v40; // [esp+20h] [ebp-10h] BYREF
  int v41; // [esp+2Ch] [ebp-4h]

  v3 = stream; /*0x71fee9*/
  sub_732E70((NiTriBasedGeomData *)self, (signed int)stream); /*0x71feee*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4); /*0x71fef9*/
  p_m_uiTriListLength = &self->member.m_uiTriListLength; /*0x71ff05*/
  v31 = *((_DWORD *)v3 + 0x87); /*0x71ff09*/
  entryIndex = 4; /*0x71ff0a*/
  v4(v31, &self->member.m_uiTriListLength, 4, &entryIndex, 1); /*0x71ff12*/
  if ( *((_DWORD *)v3 + 0x36) < 0xA000111u ) /*0x71ff22*/
  {
    LOBYTE(stream) = 1; /*0x720008*/
  }
  else
  {
    v32 = *((_DWORD *)v3 + 0x87); /*0x71ff3c*/
    v6 = *(void (__cdecl **)(int, NiStream **, int, int *, int))(v32 + 4); /*0x71ff3d*/
    entryIndex = 1; /*0x71ff40*/
    v6(v32, &stream, 1, &entryIndex, 1); /*0x71ff48*/
    if ( !(_BYTE)stream ) /*0x71ff52*/
      goto LABEL_5; /*0x71ff52*/
  }
  if ( *p_m_uiTriListLength )
  {
    v7 = (UInt16 *)FormHeapAlloc((unsigned __int64)*p_m_uiTriListLength >> 0x1F != 0 ? 0xFFFFFFFF : 2 * *p_m_uiTriListLength);
    v8 = 2 * *p_m_uiTriListLength; /*0x71ff72*/
    self->member.m_pusTriList = v7; /*0x71ff7d*/
    v33 = v7; /*0x71ff86*/
    v9 = *(void (__cdecl **)(int, UInt16 *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4); /*0x71ff87*/
    v30 = *((_DWORD *)v3 + 0x87); /*0x71ff8a*/
    entryIndex = 2; /*0x71ff8b*/
    v9(v30, v33, v8, &entryIndex, 1); /*0x71ff93*/
  }
LABEL_5:
  v10 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4); /*0x71ff98*/
  v34 = *((_DWORD *)v3 + 0x87); /*0x71ffae*/
  entryIndex = 2; /*0x71ffaf*/
  v10(v34, &self->member.m_usSharedNormalsArraySize, 2, &entryIndex, 1);// Read the 16-bit shared-normal entry-array length. /*0x71ffb7*/
  m_usSharedNormalsArraySize = self->member.m_usSharedNormalsArraySize; /*0x71ffb9*/
  if ( m_usSharedNormalsArraySize )
  {
    v12 = m_usSharedNormalsArraySize; /*0x71ffc8*/
    v13 = (NiSharedNormalArrayEntry *)FormHeapAlloc(
                                        (unsigned __int64)m_usSharedNormalsArraySize >> 0x1D != 0
                                      ? 0xFFFFFFFF
                                      : 8 * m_usSharedNormalsArraySize);
    v14 = v13;                                  // Allocate one 8-byte NiSharedNormalArrayEntry per serialized entry. /*0x71ffe3*/
    v40 = (int)v13; /*0x71ffe8*/
    v41 = 0; /*0x71ffee*/
    if ( v13 ) /*0x71fff6*/
      sub_401080(v13, 8, v12, (void *(__thiscall *)(void *))NiSharedNormalArrayEntry_Construct);// Initialize every shared-normal entry to {count=0, indices=null}. /*0x720001*/
    else
      v14 = 0; /*0x720012*/
    v41 = 0xFFFFFFFF; /*0x720019*/
    self->member.m_pkSharedNormals = v14; /*0x72001d*/
    v15 = (NiSharedNormalIndexPoolBlock *)FormHeapAlloc(0x14u);// Create the first linked index-pool block with capacity equal to the entry-array length. /*0x720020*/
    v40 = (int)v15; /*0x720028*/
    v41 = 1; /*0x72002e*/
    v16 = v15 ? NiSharedNormalIndexPoolBlock_Construct(v15, self->member.m_usSharedNormalsArraySize) : 0;
    v17 = self->member.m_usSharedNormalsArraySize == 0; /*0x720048*/
    v41 = 0xFFFFFFFF; /*0x72004d*/
    self->member.m_pkSharedNormalIndexPool = v16; /*0x720051*/
    entryIndex = 0; /*0x720054*/
    if ( !v17 )
    {
      do
      {
        v18 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(*((_DWORD *)v3 + 0x87) + 4); /*0x72006f*/
        v35 = *((_DWORD *)v3 + 0x87); /*0x72007d*/
        cursor = 0; /*0x72007e*/
        v39 = 2; /*0x720080*/
        v18(v35, &sharedIndexCount, 2, &v39, 1);// Read this entry's 16-bit shared-normal index count. /*0x720084*/
        v20 = sharedIndexCount; /*0x720086*/
        if ( sharedIndexCount )
        {
          m_pkSharedNormalIndexPool = self->member.m_pkSharedNormalIndexPool; /*0x720097*/
          if ( m_pkSharedNormalIndexPool )
          {
            while ( sharedIndexCount > m_pkSharedNormalIndexPool->remaining ) /*0x7200a4*/
            {
              m_pkSharedNormalIndexPool = m_pkSharedNormalIndexPool->next; /*0x7200a6*/
              if ( !m_pkSharedNormalIndexPool ) /*0x7200ab*/
                goto LABEL_18; /*0x7200ab*/
            }
          }
          else
          {
LABEL_18:
            v22 = (int *)FormHeapAlloc(0x14u); /*0x7200ad*/
            v40 = (int)v22; /*0x7200b9*/
            v41 = 2; /*0x7200bf*/
            if ( v22 )
            {
              v23 = 2 * self->member.m_pkSharedNormalIndexPool->capacity; /*0x7200cb*/
              v24 = FormHeapAlloc(
                      (unsigned __int64)v23 >> 0x1F != 0
                    ? 0xFFFFFFFF
                    : 4 * self->member.m_pkSharedNormalIndexPool->capacity);
              *v22 = v24; /*0x7200e5*/
              v22[1] = v24; /*0x7200e7*/
              v22[2] = v23; /*0x7200ea*/
              v22[3] = v23; /*0x7200ed*/
              v22[4] = 0; /*0x7200f3*/
              m_pkSharedNormalIndexPool = (NiSharedNormalIndexPoolBlock *)v22; /*0x7200fa*/
            }
            else
            {
              m_pkSharedNormalIndexPool = 0; /*0x720103*/
            }
            m_pkSharedNormalIndexPool->next = self->member.m_pkSharedNormalIndexPool; /*0x720108*/
            v20 = sharedIndexCount; /*0x72010b*/
            v41 = 0xFFFFFFFF; /*0x720110*/
            self->member.m_pkSharedNormalIndexPool = m_pkSharedNormalIndexPool; /*0x720118*/
          }
          cursor = m_pkSharedNormalIndexPool->cursor; /*0x72011b*/
          m_pkSharedNormalIndexPool->remaining -= v20; /*0x720121*/
          m_pkSharedNormalIndexPool->cursor = &cursor[sharedIndexCount];// Reserve count UInt16 indices from a pool block, growing through linked blocks when necessary. /*0x72012c*/
          v36 = *((_DWORD *)v3 + 0x87); /*0x720145*/
          v25 = *(void (__cdecl **)(int, unsigned __int16 *, int, int *, int))(v36 + 4); /*0x720146*/
          v40 = 2; /*0x720149*/
          v25(v36, cursor, 2 * sharedIndexCount, &v40, 1);// Read the shared vertex indices directly into the pooled slice. /*0x72014d*/
          v20 = sharedIndexCount; /*0x72014f*/
        }
        v26 = entryIndex; /*0x72015a*/
        v27 = &self->member.m_pkSharedNormals[(unsigned __int16)entryIndex];// Store {count, pooledIndices} in this 8-byte shared-normal entry. /*0x720164*/
        if ( v20 && cursor ) /*0x72016b*/
        {
          v27->count = v20; /*0x72016d*/
          v27->indices = cursor; /*0x720170*/
        }
        else
        {
          v27->count = 0; /*0x720175*/
          v27->indices = 0; /*0x72017a*/
        }
        v28 = v26 + 1; /*0x720181*/
        v29 = (unsigned __int16)v28 < self->member.m_usSharedNormalsArraySize; /*0x720184*/
        entryIndex = v28; /*0x720188*/
      }
      while ( v29 );
    }
  }
}
