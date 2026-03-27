void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection((LPCRITICAL_SECTION)(dword_BAAAC0[a1 >> 5] + 0x28 * (a1 & 0x1F) + 0xC));
}
