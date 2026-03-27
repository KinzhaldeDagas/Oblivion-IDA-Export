char __stdcall sub_782530(void *Src, size_t Size, _DWORD *a3, size_t *a4, _DWORD *a5, _DWORD *a6)
{
  void *v6; // eax
  size_t v8; // [esp-8h] [ebp-18h]

  *(_DWORD *)HIDWORD(Size) = 0;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  *a5 = 0;
  if ( Src && (_DWORD)Size )
  {
    v6 = (void *)FormHeapAlloc(Size);
    LODWORD(v8) = Size;
    *(_DWORD *)HIDWORD(Size) = v6;
    memcpy(v6, Src, v8);
    *a3 = Size;
    return 1;
  }
  else
  {
    sub_738460(1, 0, "Invalid shader buffer\n");
    return 0;
  }
}
