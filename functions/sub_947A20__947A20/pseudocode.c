int __thiscall sub_947A20(LPCRITICAL_SECTION *this, int a2)
{
  int v3; // edi

  sub_8A7720(*(this + 6));
  v3 = *((_DWORD *)&(*(this + 3))->DebugInfo + 3 * a2);
  LeaveCriticalSection(*(this + 6));
  return v3;
}
