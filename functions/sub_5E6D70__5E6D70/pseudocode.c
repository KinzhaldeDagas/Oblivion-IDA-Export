int __thiscall sub_5E6D70(_DWORD *this, int a2)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0x16); /*0x5e6d70*/
  if ( v2 ) /*0x5e6d75*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x300))(v2, a2); /*0x5e6d7f*/
  return result; /*0x5e6d81*/
}
