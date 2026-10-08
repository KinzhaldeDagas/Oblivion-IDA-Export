_DWORD *__thiscall sub_47CEA0(_DWORD *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // eax

  *this = &BSThread::`vftable'; /*0x47cecc*/
  *(this + 1) = 0; /*0x47ced2*/
  *(this + 2) = 0; /*0x47ced5*/
  *(this + 3) = 0; /*0x47ced8*/
  *(this + 4) = 0; /*0x47cedb*/
  *(this + 5) = 0; /*0x47cede*/
  *((_BYTE *)this + 0x18) = 0; /*0x47cee1*/
  v2 = (_RTL_CRITICAL_SECTION_0 *)FormHeapAlloc(0x80u); /*0x47cee4*/
  if ( v2 ) /*0x47cef6*/
    *(this + 1) = NiInitalizeCriticalSection(v2); /*0x47ceff*/
  else
    *(this + 1) = 0; /*0x47cf16*/
  return this; /*0x47cf04*/
}
