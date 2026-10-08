//
// [2026-10-03 clone rollback verification] NiCloningProcess constructor: +0 raw pointer map(A3CCB0) with257 buckets, +4 processed-bool map(A3CCD0) with37 buckets, copy type+8, append character+C. Each map16bytes: vptr0, bucketCount4, buckets8, entryCountC. Fallout821F6780 corroborates two-map roles but takes caller-provided hash size for both; Oblivion here has no stack argument.
void *__thiscall OB_NiCloningProcess_ctor(void *this)
{
  NiTPointerMap<NiObject *,NiObject *> *v2; // eax
  NiTPointerMap<NiObject *,NiObject *> *v3; // eax
  NiTPointerMap<NiObject *,bool> *v4; // eax
  NiTPointerMap<NiObject *,bool> *v5; // eax

  v2 = (NiTPointerMap<NiObject *,NiObject *> *)FormHeapAlloc(0x10u); /*0x478bb6*/
  if ( v2 ) /*0x478bcc*/
    v3 = NiTPointerMap<NiObject *,NiObject *>::NiTPointerMap<NiObject *,NiObject *>(v2, 0x101u); /*0x478bd5*/
  else
    v3 = 0; /*0x478bdc*/
  *(_DWORD *)this = v3; /*0x478be8*/
  v4 = (NiTPointerMap<NiObject *,bool> *)FormHeapAlloc(0x10u); /*0x478bea*/
  if ( v4 ) /*0x478c00*/
    v5 = NiTPointerMap<NiObject *,bool>::NiTPointerMap<NiObject *,bool>(v4, 0x25u); /*0x478c06*/
  else
    v5 = 0; /*0x478c0d*/
  *((_DWORD *)this + 1) = v5; /*0x478c0f*/
  *((_DWORD *)this + 2) = unk_B3F580; /*0x478c17*/
  *((_BYTE *)this + 0xC) = byte_B25648; /*0x478c20*/
  return this; /*0x478c25*/
}
