// 3DTheft decode 2026-05-17: Actor wrapper for process vfunc +0xD0; writes the resolved procedure target/follow reference into the actor process.
int __thiscall sub_5E03C0(_DWORD **this, int a2)
{
  int result; // eax

  if ( *(this + 0x16) ) /*0x5e03c0*/
    return (*(int (__thiscall **)(_DWORD, int))(**(this + 0x16) + 0xD0))(*(this + 0x16), a2); /*0x5e03d1*/
  return result; /*0x5e03d3*/
}
