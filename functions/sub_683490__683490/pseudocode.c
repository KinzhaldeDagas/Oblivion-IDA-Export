int __thiscall sub_683490(LONG *this)
{
  void (__thiscall *v2)(LONG *); // edx
  int *v3; // edi

  sub_49F470(&stru_B3C000);
  if ( *(this + 0x10) )
  {
    while ( sub_42FC20(this, 0) )
      sub_498EE0(1u, 1);
    v2 = *(void (__thiscall **)(LONG *))(*this + 8);
    v3 = (int *)*(this + 0x10);
    *(this + 0x10) = 0;
    v2(this);
    *(this + 2) = 0;
    sub_682950(this, v3);
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
}
