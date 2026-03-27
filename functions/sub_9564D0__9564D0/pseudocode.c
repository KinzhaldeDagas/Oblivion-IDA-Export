int __thiscall sub_9564D0(unsigned int *this)
{
  int v2; // edi
  int result; // eax

  v2 = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, 2 * *(this + 2), 0x25);
  sub_8B1890((void *)(v2 + *(this + 2)), (const void *)*(this + 4), *(this + 2));
  *(this + 2) *= 2;
  result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, *(this + 4));
  *(this + 4) = v2;
  return result;
}
