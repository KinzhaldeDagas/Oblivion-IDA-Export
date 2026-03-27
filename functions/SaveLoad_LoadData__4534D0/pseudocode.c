void *__userpurge SaveLoad_LoadData@<eax>(int a1@<ecx>, void *Dst, size_t Size)
{
  void *result; // eax
  size_t v5; // [esp-4h] [ebp-Ch]

  LODWORD(v5) = Size;
  result = memcpy(Dst, *(const void **)(a1 + 0x14), v5);
  *(_DWORD *)(a1 + 0x14) += Size;
  return result;
}
