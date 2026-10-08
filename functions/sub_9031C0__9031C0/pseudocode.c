int __thiscall sub_9031C0(int (__thiscall ***this)(void *, signed int))
{
  int i; // esi
  int (__thiscall *v3)(void *, signed int); // ecx

  for ( i = 0; i < (int)*(this + 4); ++i ) /*0x9031cb*/
  {
    v3 = (*(this + 3))[i]; /*0x9031d3*/
    (*(void (__thiscall **)(int (__thiscall *)(void *, signed int)))(*(_DWORD *)v3 + 0x18))(v3); /*0x9031d8*/
  }
  return (**this)(this, 1); /*0x9031eb*/
}
