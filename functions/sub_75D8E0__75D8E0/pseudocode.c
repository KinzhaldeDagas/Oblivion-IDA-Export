char __thiscall sub_75D8E0(NiTriBasedGeomData *this, int a2)
{
  char result; // al

  result = sub_759C90(this, a2); /*0x75d8e9*/
  if ( result ) /*0x75d8f0*/
    return (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x1A) + 0x2C))( /*0x75d908*/
             *((_DWORD *)this + 0x1A),
             *(_DWORD *)(a2 + 0x68)) != 0;
  return result; /*0x75d8f2*/
}
