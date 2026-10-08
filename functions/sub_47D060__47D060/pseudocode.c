void __thiscall sub_47D060(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // ecx
  _RTL_CRITICAL_SECTION_0 *v3; // ecx
  unsigned int v4; // edi

  if ( *(this + 2) ) /*0x47d066*/
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)*(this + 1); /*0x47d06c*/
    *((_BYTE *)this + 0x18) = 0; /*0x47d074*/
    NiEnterCriticalSection(v2, (int)"Exiting Thread"); /*0x47d077*/
    CloseHandle((HANDLE)*(this + 2)); /*0x47d080*/
    v3 = (_RTL_CRITICAL_SECTION_0 *)*(this + 1); /*0x47d086*/
    *(this + 2) = 0; /*0x47d089*/
    NiLeaveCriticalSection_0(v3); /*0x47d08c*/
  }
  v4 = *(this + 1); /*0x47d091*/
  if ( v4 ) /*0x47d096*/
  {
    NiDeleteCriticalSection((LPCRITICAL_SECTION)*(this + 1)); /*0x47d09a*/
    FormHeapFree(v4); /*0x47d0a0*/
  }
  *(this + 1) = 0; /*0x47d0a9*/
}
