// QueuedTreeModel IO dispatch helper: forwards this queued entry to ioManager vtable slot 0x3C.
int __thiscall sub_4346D0(void *this)
{
  return (*((int (__thiscall **)(IOManager *, void *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], this); /*0x4346e0*/
}
