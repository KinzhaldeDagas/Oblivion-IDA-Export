int __thiscall sub_91BD40(_DWORD **this, int *a2)
{
  int *v3; // eax

  v3 = sub_91BA70(a2);
  return (*(int (__thiscall **)(_DWORD, int, int *, int))(**(this + 0xFFFFFFFB) + 0xC))(
           *(this + 0xFFFFFFFB),
           a2[0x14] + 0x10,
           v3,
           dword_BA8438);
}
