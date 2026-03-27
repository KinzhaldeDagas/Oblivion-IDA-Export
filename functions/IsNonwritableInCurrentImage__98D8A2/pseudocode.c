BOOL __cdecl _IsNonwritableInCurrentImage(int a1)
{
  int v1; // edx
  int PESection; // eax

  return _ValidateImageBase(0x400000)
      && (PESection = _FindPESection(v1, a1 - v1)) != 0
      && *(int *)(PESection + 0x24) >= 0;
}
