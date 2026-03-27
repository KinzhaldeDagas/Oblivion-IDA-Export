int __thiscall sub_8F6340(void *this)
{
  int v3; // [esp+0h] [ebp-4h]

  sub_934100((int **)this + 0xC, *((_DWORD *)this + 3), *((_DWORD *)this + 2), v3);
  return (**(int (__thiscall ***)(void *, int))this)(this, 1);
}
