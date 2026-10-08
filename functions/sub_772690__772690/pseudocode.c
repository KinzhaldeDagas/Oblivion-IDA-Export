//
// Verified constructor 2026-10-01: initializes all four DWORDs of a16-byte render-state entry to0.
_DWORD *__thiscall NiD3DRSEntry_InitializeEmpty(_DWORD *this)
{
  *this = 0; /*0x772694*/
  *(this + 1) = 0; /*0x772696*/
  *(this + 2) = 0; /*0x772699*/
  *(this + 3) = 0; /*0x77269c*/
  return this; /*0x77269f*/
}
