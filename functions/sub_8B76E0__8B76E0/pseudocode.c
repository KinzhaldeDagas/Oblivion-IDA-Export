void __thiscall sub_8B76E0(void *this, int a2)
{
  int v3; // eax
  char *v4; // esi

  if ( a2 ) /*0x8b770b*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 0x24); /*0x8b771f*/
    *(_WORD *)(v3 + 4) = 0x90; /*0x8b7721*/
    v4 = sub_8F5300((char *)v3, *(_OWORD **)(a2 + 4), *(_DWORD *)(a2 + 8)); /*0x8b7742*/
    (*(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C))(this, v4); /*0x8b7754*/
    if ( *((_WORD *)v4 + 2) ) /*0x8b7756*/
    {
      if ( !--*((_WORD *)v4 + 3) ) /*0x8b7762*/
        (**(void (__thiscall ***)(char *, int))v4)(v4, 1); /*0x8b7773*/
    }
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8b777d*/
  }
}
