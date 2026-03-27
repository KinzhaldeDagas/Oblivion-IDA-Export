void __thiscall sub_47D060(_DWORD *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // ecx
  _RTL_CRITICAL_SECTION_0 *v3; // ecx
  unsigned int v4; // edi

  if ( *(this + 2) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)*(this + 1);
    *((_BYTE *)this + 0x18) = 0;
    NiEnterCriticalSection(v2, (int)"Exiting Thread");
    CloseHandle((HANDLE)*(this + 2));
    v3 = (_RTL_CRITICAL_SECTION_0 *)*(this + 1);
    *(this + 2) = 0;
    NiLeaveCriticalSection_0(v3);
  }
  v4 = *(this + 1);
  if ( v4 )
  {
    NiDeleteCriticalSection((LPCRITICAL_SECTION)*(this + 1));
    FormHeapFree(v4);
  }
  *(this + 1) = 0;
}
