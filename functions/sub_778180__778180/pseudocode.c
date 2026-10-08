// Verified 2026-10-02 from direct disassembly, RET14h and native diagnostic string: ECX=self, device at+8; five stack arguments length/usage/format/pool/optional description. Calls device CreateIndexBuffer at7781AD (vtable+6C) with NULL shared handle. On failure returns NULL after diagnostic; on success optionally invokes GetDesc+34 and returns buffer without testing GetDesc HRESULT. This is a shared allocation wrapper; PackBuffer7781F0, line index generation778500 and other consumers must route through the same owned buffer factory semantics.
//
// Host API evidence 2026-10-02, distinct from Oblivion binary facts: isolated native D3D9 probes on Parallels WDDM/prl_umdd.dll version001400120A8CE504 recorded468 VB/IB creation cases. INDEX16 permits3-byte allocation and reports Size3 (minimum one2-byte index, no multiple-of-width requirement); INDEX32 requires at least4 bytes. Native Reset rejected live DEFAULT VB and IB with8876086C, then succeeded after final release; a locked MANAGED VB survived Reset and its later Unlock succeeded. An isolated malformed nonzero FVF1 request terminated the probe withC0000094 rather than an HRESULT; this is not evidence of an Oblivion function bug. These host-provider observations constrain the replacement COM/frontend API but must not be mistaken for inferred engine semantics or universally identical driver behavior. Project evidence: analysis/dx11_completion/stage-buffer-factory-contract.
IDirect3DIndexBuffer9 *__thiscall NiDX9IndexBufferManager_CreateIndexBuffer(
        NiDX9IndexBufferManager *self,
        unsigned int byteLength,
        unsigned int usage,
        D3DFORMAT format,
        D3DPOOL pool,
        D3DINDEXBUFFER_DESC *description)
{
  int v6; // eax
  void *v7; // ecx
  IDirect3DIndexBuffer9 *result; // eax
  NiDX9IndexBufferManager *v9; // [esp+24h] [ebp-4h] BYREF

  v9 = self; /*0x778180*/
  v6 = *((_DWORD *)self + 2); /*0x778181*/
  v9 = 0; /*0x77819e*/
  if ( (*(int (__stdcall **)(int, unsigned int, unsigned int, D3DFORMAT, D3DPOOL, NiDX9IndexBufferManager **, _DWORD))(*(_DWORD *)v6 + 0x6C))( /*0x7781b1*/
         v6,
         byteLength,
         usage,
         format,
         pool,
         &v9,
         0) < 0 )
  {
    Shared_NoOpVirtual_60D0A0(v7); /*0x7781d3*/
    return 0; /*0x7781db*/
  }
  else
  {
    result = (IDirect3DIndexBuffer9 *)v9; /*0x7781b9*/
    if ( description ) /*0x7781bc*/
    {
      (*(void (__stdcall **)(NiDX9IndexBufferManager *, D3DINDEXBUFFER_DESC *))(*(_DWORD *)v9 + 0x34))(v9, description); /*0x7781c5*/
      return (IDirect3DIndexBuffer9 *)v9; /*0x7781c7*/
    }
  }
  return result; /*0x7781cb*/
}
