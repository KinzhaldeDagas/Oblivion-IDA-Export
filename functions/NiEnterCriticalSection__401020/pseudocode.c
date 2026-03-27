void __thiscall NiEnterCriticalSection(struct _RTL_CRITICAL_SECTION *this, int a2)
{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
}
