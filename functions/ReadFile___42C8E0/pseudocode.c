unsigned int __thiscall Archive_ReadBytes(void *self, void *destination, unsigned int byteCount)
{
  unsigned int (__cdecl *v3)(void *, void *, unsigned int, int *, int); // ecx
  int v6; // [esp+0h] [ebp-4h] BYREF

  v6 = (int)self; /*0x42c8e0*/
  v3 = *((unsigned int (__cdecl **)(void *, void *, unsigned int, int *, int))self + 1); /*0x42c8f3*/
  v6 = 1; /*0x42c8f6*/
  return v3(self, destination, byteCount, &v6, 1); /*0x42c903*/
}
