_DWORD *__cdecl _CreateFrameInfo(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[1] = *(_DWORD *)(_getptd() + 0x98);
  *(_DWORD *)(_getptd() + 0x98) = a1;
  return a1;
}
