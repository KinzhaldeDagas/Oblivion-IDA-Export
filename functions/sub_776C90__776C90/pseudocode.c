// Verified 2026-10-02 buffer frontend audit: x86 ECX=this plus exactly four DWORD stack arguments (VB, offsetBytes, byteCount, flags), RET 10h. Corrected prototype removes the erroneous 64-bit size_t/high-word flags split. The native VB Lock occurs before entering manager critical section at BYTE offset +80h; lock owner/count writes are +F8h/+FCh. Staging fields are +40h pointer, +44h capacity, +48h original mapping, +4Ch byte count. The existing decompiler critical-section pointer arithmetic uses database type sizing; byte offsets in disassembly are authoritative. Fallout 827BBC20 LockVB is a direct Xenon API wrapper with no corresponding staging or manager lock sequence, so its algorithm must not replace this Oblivion path.
void *__thiscall NiDX9VertexBufferManager_LockToStaging(
        NiDX9VertexBufferManager *self,
        IDirect3DVertexBuffer9 *buffer,
        unsigned int offsetBytes,
        unsigned int byteCount,
        unsigned int flags)
{
  HRESULT (__stdcall *Lock)(IDirect3DVertexBuffer9 *, UINT, UINT, void **, DWORD); // eax
  DWORD CurrentThreadId; // eax
  void *v9; // ecx
  bool v10; // cf
  void *Src; // [esp+14h] [ebp-4h] BYREF

  Lock = buffer->lpVtbl->Lock; /*0x776cb1*/
  Src = 0; /*0x776cb4*/
  if ( (int)Lock(buffer, offsetBytes, byteCount, &Src, flags) < 0 ) /*0x776cc0*/
    return 0; /*0x776cc4*/
  EnterCriticalSection((LPCRITICAL_SECTION)self + 4); /*0x776cd3*/
  CurrentThreadId = GetCurrentThreadId(); /*0x776cd9*/
  ++*((_DWORD *)self + 0x3F); /*0x776cdf*/
  v9 = Src; /*0x776ce3*/
  *((_DWORD *)self + 0x3E) = CurrentThreadId; /*0x776ce7*/
  v10 = *((_DWORD *)self + 0x11) < byteCount; /*0x776cea*/
  *((_DWORD *)self + 0x12) = v9; /*0x776ced*/
  *((_DWORD *)self + 0x13) = byteCount; /*0x776cf0*/
  if ( v10 ) /*0x776cf4*/
  {
    FormHeapFree(*((_DWORD *)self + 0x10)); /*0x776cfa*/
    *((_DWORD *)self + 0x10) = FormHeapAlloc(byteCount); /*0x776d08*/
    *((_DWORD *)self + 0x11) = byteCount; /*0x776d0b*/
  }
  if ( (flags & 0x3000) == 0 ) /*0x776d14*/
    memcpy(*((void **)self + 0x10), Src, byteCount); /*0x776d20*/
  return *((void **)self + 0x10); /*0x776cc2*/
}
