void __thiscall sub_8BD130(char **this, unsigned int *a2, _DWORD **a3)
{
  int *v4; // edi
  unsigned int v5; // esi
  int v6; // eax

  sub_7214A0(this, a2, a3); /*0x8bd140*/
  v4 = (int *)*(this + 7); /*0x8bd145*/
  sub_8BCA30((int **)a2 + 3, v4); /*0x8bd14c*/
  v5 = 0; /*0x8bd151*/
  if ( v4 ) /*0x8bd155*/
  {
    do /*0x8bd17c*/
    {
      v6 = *(_DWORD *)&(*(this + 4))[4 * v5]; /*0x8bd15a*/
      if ( v6 ) /*0x8bd15f*/
        v6 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x18))(v6, a3); /*0x8bd16d*/
      sub_8BD090(a2, v6); /*0x8bd172*/
      ++v5; /*0x8bd177*/
    }
    while ( v5 < (unsigned int)v4 ); /*0x8bd17c*/
  }
}
