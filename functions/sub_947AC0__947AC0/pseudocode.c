int __thiscall sub_947AC0(LPCRITICAL_SECTION *this, int a2, int a3)
{
  _RTL_CRITICAL_SECTION_0 *v4; // edi
  int v5; // esi

  v4 = *(this + 6); /*0x947ac4*/
  sub_8A7720(v4); /*0x947ac9*/
  v5 = (*((int (__cdecl **)(int))&(*(this + 3))->LockCount + 3 * a2))(a3); /*0x947ae5*/
  LeaveCriticalSection(v4); /*0x947ae7*/
  return v5; /*0x947aed*/
}
