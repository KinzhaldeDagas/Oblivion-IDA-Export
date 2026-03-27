void __thiscall sub_8A77D0(LPCRITICAL_SECTION *this, int a2)
{
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // ecx
  _RTL_CRITICAL_SECTION_0 *v6; // ecx

  sub_8A7720(*(this + 5));
  v3 = (int)*(this + 3);
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = *(this + 2);
    while ( *v5 != a2 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v3 )
        goto LABEL_8;
    }
    if ( v4 >= 0 )
    {
      v6 = (LPCRITICAL_SECTION)((char *)*(this + 3) + 0xFFFFFFFF);
      *(this + 3) = v6;
      *((_DWORD *)&(*(this + 2))->DebugInfo + v4) = *((_DWORD *)&(*(this + 2))->DebugInfo + (_DWORD)v6);
    }
  }
LABEL_8:
  LeaveCriticalSection(*(this + 5));
}
