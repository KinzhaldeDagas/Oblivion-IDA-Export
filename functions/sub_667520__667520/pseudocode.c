void __thiscall sub_667520(MobileObject *this)
{
  int *v1; // ebx
  int v2; // edi
  int v3; // eax
  _WORD *v4; // esi

  while ( dword_B3BB48 || dword_B3BB44 )
  {
    v1 = &dword_B3BB44;
    while ( 1 )
    {
      v2 = *v1;
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)*v1 + 0x154))(*v1);
      v4 = (_WORD *)v3;
      if ( !v3 )
        break;
      if ( !sub_6670F0(this, v3) )
      {
        v4[0xC] &= ~1u;
        sub_88CF20(v4, 1u, 1, 0);
        break;
      }
      v1 = (int *)v1[1];
      if ( !v1 )
        return;
    }
    BSSimpleList_Remove(&dword_B3BB44, v2);
  }
}
