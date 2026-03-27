void __thiscall sub_8BD130(char **this, unsigned int *a2, _DWORD **a3)
{
  int *v4; // edi
  unsigned int v5; // esi
  int v6; // eax

  sub_7214A0(this, a2, a3);
  v4 = (int *)*(this + 7);
  sub_8BCA30((int **)a2 + 3, v4);
  v5 = 0;
  if ( v4 )
  {
    do
    {
      v6 = *(_DWORD *)&(*(this + 4))[4 * v5];
      if ( v6 )
        v6 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v6 + 0x18))(v6, a3);
      sub_8BD090(a2, v6);
      ++v5;
    }
    while ( v5 < (unsigned int)v4 );
  }
}
