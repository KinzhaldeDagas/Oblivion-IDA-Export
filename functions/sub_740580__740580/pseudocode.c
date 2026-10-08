char __thiscall sub_740580(NiTriBasedGeomData *this, int a2)
{
  char result; // al

  result = sub_73F270(this, a2); /*0x740589*/
  if ( result ) /*0x740590*/
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x17) + 0x2C))( /*0x7405a8*/
             *((_DWORD *)this + 0x17),
             *(_DWORD *)(a2 + 0x5C)) != 0;
  return result; /*0x740592*/
}
