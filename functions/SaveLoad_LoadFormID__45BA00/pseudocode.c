int __cdecl SaveLoad_LoadFormID(void *Dst, size_t Size, int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // ebp
  size_t v8; // [esp-4h] [ebp-14h]

  v6 = v5;
  LODWORD(v8) = Size;
  memcpy(Dst, *(const void **)(v5 + 0x14), v8);
  if ( !*(_BYTE *)(v6 + 0x7D) )
    return SaveLoad_LoadFormID_::AdvanceBuffer();
  if ( (unsigned int)Size >> 2 )
    return SaveLoad_LoadFormID_::IrefLoop_Top(
             (int)Dst,
             v6,
             0,
             (unsigned int)Size >> 2,
             Size,
             SHIDWORD(Size),
             a3,
             a4,
             a5);
  return SaveLoad_LoadFormID_::AdvanceBuffer_(0);
}
