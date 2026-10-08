int __thiscall sub_75D6C0(unsigned __int16 *this, int a2)
{
  unsigned __int16 v2; // bp
  unsigned __int16 i; // bx
  void (__thiscall ***v5)(_DWORD, int); // edi
  int result; // eax

  v2 = a2; /*0x75d6c2*/
  for ( i = a2; i < *(this + 0x24); ++i ) /*0x75d6d1*/
  {
    (*(void (__thiscall **)(_DWORD, int *, _DWORD))(**((_DWORD **)this + 0x1A) + 0x8C))( /*0x75d6e8*/
      *((_DWORD *)this + 0x1A),
      &a2,
      i);
    if ( a2 ) /*0x75d6f0*/
    {
      v5 = (void (__thiscall ***)(_DWORD, int))a2; /*0x75d6f2*/
      if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) ) /*0x75d6f8*/
        (**v5)(v5, 1); /*0x75d70e*/
    }
  }
  result = *(this + 4); /*0x75d71a*/
  if ( v2 > (unsigned __int16)result ) /*0x75d721*/
    *(this + 0x24) = result; /*0x75d72d*/
  else
    *(this + 0x24) = v2; /*0x75d723*/
  return result; /*0x75d727*/
}
