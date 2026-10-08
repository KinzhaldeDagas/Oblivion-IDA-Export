void *__usercall _alloca_probe@<eax>(unsigned int a1@<eax>)
{
  int v2; // [esp-4h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return _alloca_probe_::cs10(
           (unsigned int)&v2 & 0xFFFFF000,
           ~((unsigned int)((unsigned int)&retaddr - (unsigned __int64)a1) >> 0x20) & ((unsigned int)&retaddr - a1));
}
