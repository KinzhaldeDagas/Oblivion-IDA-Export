void __thiscall sub_663740(int *this)
{
  int *v1; // ebp
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  _DWORD *v4; // esi
  _WORD *v5; // eax

  v1 = this + 0x1E0;
  if ( *(this + 0x1E1) || *v1 )
  {
    v2 = this + 0x1E0;
    v3 = this + 0x1E0;
    if ( this != (int *)0xFFFFF880 )
    {
      do
      {
        if ( !v3[1] && !*v3 )
          break;
        v4 = (_DWORD *)*v3;
        if ( *v3 && (*(int (__thiscall **)(_DWORD))(*v4 + 0x154))(*v3) )
        {
          v5 = (_WORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 0x154))(v4);
          sub_88CF90(v5, 1u, 1, 0);
          BSSimpleList_Remove(v1, (int)v4);
          v4[2] &= ~0x400000u;
          v3 = (_DWORD *)v2[1];
        }
        else
        {
          v2 = v3;
          v3 = (_DWORD *)v3[1];
        }
      }
      while ( v3 );
    }
  }
}
