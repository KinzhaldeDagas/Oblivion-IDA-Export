void __thiscall sub_8B76E0(void *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  if ( a2 )
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 0x24);
    *(_WORD *)(v3 + 4) = 0x90;
    v4 = sub_8F5300((char *)v3, *(_OWORD **)(a2 + 4), *(_DWORD *)(a2 + 8));
    (*(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C))(this, v4);
    if ( *((_WORD *)v4 + 2) )
    {
      if ( !--*((_WORD *)v4 + 3) )
        (**(void (__thiscall ***)(char *, int))v4)(v4, 1);
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2);
  }
}
