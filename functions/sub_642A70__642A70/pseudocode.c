int __thiscall sub_642A70(Actor *this, void *a2, const char *a3)
{
  IOTask *v4; // eax
  IOTask *v5; // esi

  v4 = (IOTask *)FormHeapAlloc(0x38u);
  if ( v4 )
    v5 = sub_6428F0(v4, this, (Actor *)a2, a3);
  else
    v5 = 0;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)&v5->members.unk08);
  ((void (__thiscall *)(Actor *, void *, IOTask *, _DWORD))this->vtbl->super.super.super.super.CompareTo)(
    this,
    a2,
    v5,
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a2 + 0x16) + 0x258))(*((_DWORD *)a2 + 0x16), 0);
  return (*((int (__thiscall **)(IOManager *, IOTask *))ioManager->vtbl + 0xF))(ioManager, v5);
}
