int __thiscall sub_9564D0(unsigned int *this)
{
  unsigned int v2; // edi
  int result; // eax

  v2 = (**(int (__thiscall ***)(int, unsigned int, int))unk_BA7D98)(unk_BA7D98, 2 * *(this + 2), 0x25); /*0x9564e9*/
  sub_8B1890((void *)(v2 + *(this + 2)), (const void *)*(this + 4), *(this + 2)); /*0x9564f3*/
  *(this + 2) *= 2; /*0x9564fd*/
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, *(this + 4)); /*0x95650f*/
  *(this + 4) = v2; /*0x956512*/
  return result; /*0x956515*/
}
