void __thiscall sub_8A78E0(LPCRITICAL_SECTION *this, int a2, int a3, int a4, int a5)
{
  int i; // esi
  int v7; // ecx

  sub_8A7720(*(this + 5)); /*0x8a78e7*/
  for ( i = 0; i < (int)*(this + 3); ++i ) /*0x8a78f3*/
  {
    v7 = *((_DWORD *)&(*(this + 2))->DebugInfo + i); /*0x8a7903*/
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v7 + 0x1C))(v7, a2, a3, a4, a5); /*0x8a7914*/
  }
  LeaveCriticalSection(*(this + 5)); /*0x8a7925*/
}
