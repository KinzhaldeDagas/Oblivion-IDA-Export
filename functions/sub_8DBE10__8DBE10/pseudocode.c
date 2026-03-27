int __thiscall sub_8DBE10(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 0x13);
  *this = &off_A9A430;
  if ( v2 )
    sub_8CB4E0(*(this + 2), (int)(this + 0x1D), 1);
  *(this + 0x21) = 0;
  *(this + 0x22) = 0;
  *(this + 0x20) = 0;
  sub_8D98E0((int (__thiscall ****)(int (__stdcall ***)(signed int), int))this + 0x1D);
  result = sub_8DBCE0(this + 4);
  *this = &hkBaseObject::`vftable';
  return result;
}
