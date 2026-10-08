// Pass226: Index-buffer rebuild/upload helper used when NiScreenTexture mask bit 0x08 is active.
// Verified OblivionNew 2026-09-27 for DX11 buffer ownership: NiDX9IndexBufferManager::PackBuffer error string and retail instructions identify this index buffer packing helper. Existing GetDesc is checked for INDEX16 (0x65), INDEXBUFFER type7, requested usage/pool and sufficient byte capacity; otherwise device vtable+0x6C creates the index buffer. At0x7782F5 calls buffer+0x2C Lock with offset0, EBX byte length (2*source index count), output pointer and flags0. Copies exactly EBX bytes at0x778306 and Unlocks via+0x30 at0x778314. Failure branch still attempts Unlock0x778335 then Release0x77833D. Decompiler userpurge/prototype/extra argument is misleading; native Lock has the standard five stack args including this. This establishes an actual stock ordinary write-lock path, not only a diagnostic/compatibility API.
// ABI correction 2026-10-01: verified ECX manager and seven stack arguments, RET1Ch. Arguments are indices pointer, index count, capacity in indices, existing IB, output buffer byte-size pointer, pool, usage. EDI=2*capacityIndices and EBX=2*indexCount; neither EDI nor ESI is an incoming parameter. Corrected call-site types/SP changes: Lock pops20 bytes (not24); each Unlock pops4 (not0). Standard COM GetDesc/Release signatures were applied. Capacity output is written only when creating a new buffer; reuse leaves it unchanged. Compared Fallout NiXenonIndexBufferManager::PackBuffer827C1BF8: matching seven-argument family and INDEX16/capacity/upload structure, but Oblivion additionally checks Pool and HRESULT failures. Do not transplant PPC calls or failure behavior.
// Follow-up SP/type correction: stale failure-block SP point at778322 was changed from-36 to-40, restoring zero SP at all RET1Ch exits. The spurious HIDWORD(size)/incoming EDI value came from the IDB size_t(8) memcpy signature, not the game ABI. Verified9812C0 memcpy now has explicit32-bit byteCount. Engine code bytes were not changed.
IDirect3DIndexBuffer9 *__thiscall NiDX9IndexBufferManager_PackBuffer(
        NiDX9IndexBufferManager *this,
        const unsigned __int16 *indices,
        unsigned int indexCount,
        unsigned int capacityIndices,
        IDirect3DIndexBuffer9 *existing,
        unsigned int *bufferBytes,
        unsigned int pool,
        unsigned int usage)
{
  unsigned int v9; // ebp
  IDirect3DIndexBuffer9 *v10; // esi
  UINT v11; // edi
  unsigned int v12; // ebx
  int v13; // eax
  void *v14; // ecx
  HRESULT (__stdcall *Lock)(IDirect3DIndexBuffer9 *, UINT, UINT, void **, DWORD); // eax
  void *v16; // ecx
  D3DINDEXBUFFER_DESC description; // [esp+20h] [ebp-14h] BYREF

  if ( !*((_DWORD *)this + 2) || !indices ) /*0x778209*/
    return 0; /*0x778201*/
  v9 = usage; /*0x778211*/
  v10 = existing; /*0x778216*/
  v11 = 2 * capacityIndices; /*0x77821f*/
  v12 = 2 * indexCount; /*0x778221*/
  if ( !existing /*0x778270*/
    || (memset(&description, 0, sizeof(description)), (int)existing->lpVtbl->GetDesc(existing, &description) < 0)
    || description.Format != D3DFMT_INDEX16
    || description.Type != D3DRTYPE_INDEXBUFFER
    || description.Usage != v9
    || description.Pool != pool
    || description.Size < v11 )
  {
    v13 = *((_DWORD *)this + 2); /*0x778276*/
    capacityIndices = 0; /*0x778288*/
    if ( (*(int (__stdcall **)(int, UINT, unsigned int, int, unsigned int, unsigned int *, _DWORD))(*(_DWORD *)v13 + 0x6C))( /*0x77829b*/
           v13,
           v11,
           v9,
           0x65,
           pool,
           &capacityIndices,
           0) >= 0 )
    {
      v10 = (IDirect3DIndexBuffer9 *)capacityIndices; /*0x7782b2*/
    }
    else
    {
      Shared_NoOpVirtual_60D0A0(v14); /*0x7782a2*/
      v10 = 0; /*0x7782aa*/
      capacityIndices = 0; /*0x7782ac*/
    }
    if ( !v10 ) /*0x7782b8*/
    {
      Shared_NoOpVirtual_60D0A0(v14); /*0x7782bf*/
      return 0; /*0x7782d0*/
    }
    *bufferBytes = v11; /*0x7782d7*/
  }
  if ( v12 ) /*0x7782db*/
  {
    Lock = v10->lpVtbl->Lock; /*0x7782df*/
    pool = 0; /*0x7782ed*/
    if ( (int)Lock(v10, 0, v12, (void **)&pool, 0) >= 0 ) /*0x7782f9*/
    {
      memcpy((void *)pool, indices, v12); /*0x778306*/
      v10->lpVtbl->Unlock(v10); /*0x778314*/
      return v10; /*0x77831f*/
    }
    Shared_NoOpVirtual_60D0A0(v16); /*0x778327*/
    v10->lpVtbl->Unlock(v10); /*0x778335*/
    v10->lpVtbl->Release(v10); /*0x77833d*/
  }
  return v10; /*0x7781fe*/
}
