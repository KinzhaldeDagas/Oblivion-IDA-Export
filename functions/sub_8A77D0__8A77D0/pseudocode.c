void __thiscall sub_8A77D0(LPCRITICAL_SECTION *this, int a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ecx
  _RTL_CRITICAL_SECTION_0 *v6; // ecx

  sub_8A7720(*(this + 5)); /*0x8a77d6*/
  v3 = (int)*(this + 3); /*0x8a77db*/
  v4 = 0; /*0x8a77de*/
  if ( v3 > 0 ) /*0x8a77e2*/
  {
    v5 = *(this + 2); /*0x8a77e4*/
    while ( *v5 != a2 ) /*0x8a77f2*/
    {
      ++v4; /*0x8a77f4*/
      ++v5; /*0x8a77f5*/
      if ( v4 >= v3 ) /*0x8a77fa*/
        goto LABEL_8; /*0x8a77fa*/
    }
    if ( v4 >= 0 ) /*0x8a7800*/
    {
      v6 = (LPCRITICAL_SECTION)((char *)*(this + 3) + 0xFFFFFFFF); /*0x8a7805*/
      *(this + 3) = v6; /*0x8a7806*/
      *((_DWORD *)&(*(this + 2))->DebugInfo + v4) = *((_DWORD *)&(*(this + 2))->DebugInfo + (_DWORD)v6); /*0x8a7811*/
    }
  }
LABEL_8:
  LeaveCriticalSection(*(this + 5)); /*0x8a7815*/
}
