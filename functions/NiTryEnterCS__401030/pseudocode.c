bool __thiscall NiTryEnterCS(LPCRITICAL_SECTION lpCriticalSection, int a2)
{
  return TryEnterCriticalSection(lpCriticalSection);
}
