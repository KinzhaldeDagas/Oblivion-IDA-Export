void __thiscall sub_8A7830(LPCRITICAL_SECTION *this, int a2, int a3, int a4)
{
  int i; // esi
  int v6; // ecx

  sub_8A7720(*(this + 5));
  for ( i = 0; i < (int)*(this + 3); ++i )
  {
    v6 = *((_DWORD *)&(*(this + 2))->DebugInfo + i);
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 8))(v6, a2, a3, a4);
  }
  LeaveCriticalSection(*(this + 5));
}
