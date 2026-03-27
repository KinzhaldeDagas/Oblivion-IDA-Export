int __thiscall sub_435020(_BYTE *this, int a2)
{
  int result; // eax

  if ( (*(this + 0x34) & 8) == 0 )
    return (*((int (__thiscall **)(IOManager *, _BYTE *))ioManager->vtbl + 0xF))(ioManager, this);
  return result;
}
