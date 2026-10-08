void __thiscall sub_96E140(_DWORD *this, int *a2, _DWORD **a3)
{
  int v4; // eax

  sub_733850(this, (int)a2, a3); /*0x96e14e*/
  a2[9] = *(this + 9); /*0x96e156*/
  a2[0xA] = *(this + 0xA); /*0x96e15c*/
  if ( *(this + 0xB) ) /*0x96e15f*/
  {
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x1C))(*(this + 0xB)); /*0x96e16d*/
    sub_96D890(a2, v4); /*0x96e172*/
  }
  if ( *(this + 0xD) ) /*0x96e177*/
  {
    if ( !a2[0x10] ) /*0x96e17d*/
    {
      sub_96DCD0(a2); /*0x96e185*/
      sub_96DD40(a2); /*0x96e18c*/
    }
    sub_96DEF0(a2, 1); /*0x96e195*/
  }
}
