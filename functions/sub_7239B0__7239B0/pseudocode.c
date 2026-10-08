void __thiscall sub_7239B0(char **this, _DWORD *a2, _DWORD **a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // esi

  sub_723EF0(this, (int)a2, a3); /*0x7239be*/
  v4 = (int)*(this + 0x3F); /*0x7239c3*/
  if ( v4 ) /*0x7239cb*/
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x54))(v4); /*0x7239d2*/
    sub_723750(a2, v5); /*0x7239d7*/
  }
  else
  {
    v6 = a2[0x3F]; /*0x7239e1*/
    if ( v6 ) /*0x7239e9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7239ef*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x723a05*/
      a2[0x3F] = 0; /*0x723a07*/
    }
  }
}
