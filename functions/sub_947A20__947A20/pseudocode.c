int __thiscall sub_947A20(LPCRITICAL_SECTION *this, int a2)
{
  int v3; // edi

  sub_8A7720(*(this + 6)); /*0x947a27*/
  v3 = *((_DWORD *)&(*(this + 3))->DebugInfo + 3 * a2); /*0x947a39*/
  LeaveCriticalSection(*(this + 6)); /*0x947a3d*/
  return v3; /*0x947a45*/
}
