bool __thiscall sub_88A770(void *this)
{
  int v1; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x58))(this);
  return v1 && *(_DWORD *)(v1 + 0x3C) != 0;
}
