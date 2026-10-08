int __thiscall sub_642A70(Actor *this, void *a2, const char *a3)
{
  IOTask *v4; // eax
  IOTask *v5; // esi

  v4 = (IOTask *)FormHeapAlloc(0x38u); /*0x642a98*/
  if ( v4 ) /*0x642ab2*/
    v5 = sub_6428F0(v4, this, (Actor *)a2, a3); /*0x642ac2*/
  else
    v5 = 0; /*0x642ac6*/
  if ( v5 ) /*0x642add*/
    InterlockedIncrement((volatile LONG *)&v5->members.unk08); /*0x642ae3*/
  ((void (__thiscall *)(Actor *, void *, IOTask *, _DWORD))this->vtbl->super.super.super.super.CompareTo)( /*0x642af1*/
    this,
    a2,
    v5,
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)a2 + 0x16) + 0x258))(*((_DWORD *)a2 + 0x16), 0); /*0x642b00*/
  return (*((int (__thiscall **)(IOManager *, IOTask *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], v5); /*0x642b10*/
}
