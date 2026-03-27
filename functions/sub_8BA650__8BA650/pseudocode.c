void __thiscall sub_8BA650(void *this, int a2)
{
  int v3; // eax
  char *v4; // ebx

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xA0, 0x2E);
    *(_WORD *)(v3 + 4) = 0xA0;
    v4 = sub_8CDCB0((char *)v3, (_OWORD *)(a2 + 0x20), *(_DWORD *)a2);
    (*(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C))(this, v4);
    sub_8BC730((int (__stdcall ***)(signed int))v4);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
