void __thiscall sub_8A7880(LPCRITICAL_SECTION *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int i; // esi
  int v10; // ecx

  sub_8A7720(*(this + 5));
  for ( i = 0; i < (int)*(this + 3); ++i )
  {
    v10 = *((_DWORD *)&(*(this + 2))->DebugInfo + i);
    (*(void (__thiscall **)(int, int, int, int, int, int, int, int))(*(_DWORD *)v10 + 0x14))(
      v10,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8);
  }
  LeaveCriticalSection(*(this + 5));
}
