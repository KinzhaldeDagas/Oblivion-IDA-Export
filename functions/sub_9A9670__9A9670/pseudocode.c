// Verified companion to SortByEnabled: array this is map+0C, base pointer this+4, end this+0A and live count this+0C. SetAt updates occupancy/end as needed and assigns the pointer with NiPointer decrement/destructor/increment behavior. The caller retains its current entry while exchanging two positions; model array order without executing native refcounts under metadata gates.
// DX11 lifecycle obligation 2026-10-01: SetAt lazily tests DWORD BAAA94 bit0, sets it, initializes BAAA90 to null and registers A27C10 with atexit. A27C10 decrements/releases that sentinel if nonnull. A bulk permutation must not fake this side effect by setting the flag alone. Current commit planning requires bit0 initialized and sentinel null whenever the projected native sequence performs a swap; a no-swap sequence does not require SetAt initialization.
LONG __thiscall NiTArray_ConstantMapEntry_SetAt(
        void *this,
        unsigned int index,
        NiD3DShaderConstantMapEntry *const *value)
{
  LONG result; // eax
  int v5; // edx
  int v6; // ecx
  NiD3DShaderConstantMapEntry *v7; // esi
  NiD3DShaderConstantMapEntry **v8; // edi
  bool v9; // zf

  if ( (g_ConstantMapArrayStaticInitFlags & 1) == 0 ) /*0x9a9681*/
  {
    g_ConstantMapArrayStaticInitFlags |= 1u; /*0x9a9683*/
    g_ConstantMapArrayEmptyEntry = 0; /*0x9a968e*/
    atexit(NiTArray_ConstantMapEntry_ReleaseEmptySentinel); /*0x9a9698*/
  }
  result = index; /*0x9a96a4*/
  if ( index < *((unsigned __int16 *)this + 5) ) /*0x9a96ae*/
  {
    v5 = *((_DWORD *)this + 1); /*0x9a96d1*/
    if ( *value == (NiD3DShaderConstantMapEntry *const)g_ConstantMapArrayEmptyEntry ) /*0x9a96d4*/
    {
      if ( *(_DWORD *)(v5 + 4 * index) != g_ConstantMapArrayEmptyEntry ) /*0x9a96e4*/
        --*((_WORD *)this + 6); /*0x9a96e6*/
    }
    else if ( *(_DWORD *)(v5 + 4 * index) == g_ConstantMapArrayEmptyEntry ) /*0x9a96d9*/
    {
      ++*((_WORD *)this + 6); /*0x9a96db*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = index + 1; /*0x9a96b3*/
    if ( *value != (NiD3DShaderConstantMapEntry *const)g_ConstantMapArrayEmptyEntry ) /*0x9a96c0*/
      ++*((_WORD *)this + 6); /*0x9a96c2*/
  }
  v6 = *((_DWORD *)this + 1); /*0x9a96ec*/
  v7 = *(NiD3DShaderConstantMapEntry **)(v6 + 4 * index); /*0x9a96ef*/
  v8 = (NiD3DShaderConstantMapEntry **)(v6 + 4 * index); /*0x9a96f5*/
  if ( v7 != *value ) /*0x9a96f8*/
  {
    if ( v7 ) /*0x9a96fc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->RefCount) ) /*0x9a9702*/
        (*(void (__thiscall **)(NiD3DShaderConstantMapEntry *, int))v7->_vtbl)(v7, 1); /*0x9a9717*/
    }
    result = (LONG)*value; /*0x9a9719*/
    v9 = *value == 0; /*0x9a971c*/
    *v8 = *value; /*0x9a971e*/
    if ( !v9 ) /*0x9a9720*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x9a9726*/
  }
  return result; /*0x9a972c*/
}
