int __thiscall sub_683490(LONG *this)
{
  void (__thiscall *v2)(LONG *); // edx
  int *v3; // edi

  sub_49F470(&unk_B3C000); /*0x683498*/
  if ( *(this + 0x10) ) /*0x68349d*/
  {
    while ( sub_42FC20(this, 0) ) /*0x6834a7*/
      sub_498EE0(1u, 1); /*0x6834b4*/
    v2 = *(void (__thiscall **)(LONG *))(*this + 8); /*0x6834cb*/
    v3 = (int *)*(this + 0x10); /*0x6834cf*/
    *(this + 0x10) = 0; /*0x6834d4*/
    v2(this); /*0x6834db*/
    *(this + 2) = 0; /*0x6834e0*/
    sub_682950(this, v3); /*0x6834e7*/
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&unk_B3C000); /*0x6834f2*/
}
