int __thiscall sub_435020(_BYTE *this, int a2)
{
  int result; // eax

  if ( (*(this + 0x34) & 8) == 0 ) /*0x435024*/
    return (*((int (__thiscall **)(IOManager *, _BYTE *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], this); /*0x435036*/
  return result; /*0x435038*/
}
