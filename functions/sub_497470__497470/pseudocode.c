// XRGD singleton loader: count=(size/28)&0xFF, then size % count is tested instead of %28. count==0 faults (including 0..27 and canonical 256-bone size); nonzero remainder cleanly fails and the caller removes the singleton; remainder zero with size!=count*28 is accepted, allocates count*28, then reads size and overflows. Safe success is 1..255 complete 28-byte bones. Successful repeats replace count/buffer and leak the prior buffer.
char __thiscall sub_497470(_DWORD *this, Data *a1)
{
  UInt32 length; // esi
  char *v4; // eax

  if ( TESFile_GetChunkType(a1) != 0x44475258 ) /*0x497487*/
    return 0; /*0x4974ef*/
  length = a1->currentChunk.length; /*0x49748a*/
  *(_BYTE *)this = length / 0x1C; /*0x4974a5*/
  if ( length % (unsigned __int8)(length / 0x1C) )
  {
    *(_BYTE *)this = 0; /*0x4974e2*/
    return 0; /*0x4974e7*/
  }
  else
  {
    v4 = (char *)FormHeapAlloc(
                   (0x1C * (unsigned __int64)(unsigned __int8)(length / 0x1C)) >> 0x20 != 0
                 ? 0xFFFFFFFF
                 : 0x1C * (unsigned __int8)(length / 0x1C));
    *(this + 1) = v4; /*0x4974d0*/
    TESFile_GetChunkData(a1, v4, length); /*0x4974d3*/
    return 1; /*0x4974db*/
  }
}
