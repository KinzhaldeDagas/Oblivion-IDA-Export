int __stdcall sub_434350(int a1)
{
  return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);// IOManager stage 1 invokes IOTask vtable slot +4. QueuedTreeModel maps that slot to 0x4346A0. /*0x43435b*/
}
