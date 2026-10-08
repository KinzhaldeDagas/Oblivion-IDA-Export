int __thiscall sub_7401C0(unsigned __int16 *this, int a2)
{
  unsigned __int16 v2; // bp
  unsigned __int16 i; // bx
  void (__thiscall ***v5)(_DWORD, int); // edi
  int result; // eax

  v2 = a2; /*0x7401c2*/
  for ( i = a2; i < *(this + 0x24); ++i ) /*0x7401d1*/
  {
    (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**((_DWORD **)this + 0x17) + 0x8C))( /*0x7401e8*/
      *((_DWORD *)this + 0x17),
      &a2,
      i);
    if ( a2 ) /*0x7401f0*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))a2; /*0x7401f2*/
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x7401f8*/
        (**v5)(v5, 1); /*0x74020e*/
    }
  }
  result = *(this + 4); /*0x74021a*/
  if ( v2 > (unsigned __int16)result ) /*0x740221*/
    *(this + 0x24) = result; /*0x74022d*/
  else
    *(this + 0x24) = v2; /*0x740223*/
  return result; /*0x740227*/
}
