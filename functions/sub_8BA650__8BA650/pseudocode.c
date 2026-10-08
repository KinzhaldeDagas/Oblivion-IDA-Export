void __thiscall sub_8BA650(void *this, int a2)
{
  int v3; // eax
  char *v4; // ebx

  if ( a2 ) /*0x8ba67b*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xA0, 0x2E); /*0x8ba68f*/
    *(_WORD *)(v3 + 4) = 0xA0; /*0x8ba691*/
    v4 = sub_8CDCB0((char *)v3, (_OWORD *)(a2 + 0x20), *(_DWORD *)a2); /*0x8ba6b1*/
    (*(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8ba6c3*/
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))v4); /*0x8ba6c7*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8ba6d4*/
  }
}
