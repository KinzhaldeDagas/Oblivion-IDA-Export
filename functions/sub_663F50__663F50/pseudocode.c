void sub_663F50()
{
  int *v0; // esi
  _WORD *v1; // eax

  if ( dword_B3BB48 || dword_B3BB44 )
  {
    v0 = &dword_B3BB44;
    do
    {
      v1 = (_WORD *)(*(int (__thiscall **)(int))(*(_DWORD *)*v0 + 0x154))(*v0);
      if ( v1 )
      {
        v1[0xC] |= 1u;
        sub_88CF20(v1, 0, 1, 0);
      }
      v0 = (int *)v0[1];
    }
    while ( v0 );
  }
}
