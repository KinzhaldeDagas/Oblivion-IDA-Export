void __thiscall sub_89D340(_DWORD *this, _WORD *a2, char a3, int a4, int a5)
{
  _WORD *v5; // esi
  _WORD *v7; // eax
  int v8; // ecx
  _WORD *v9; // eax

  v5 = a2;
  if ( a2 )
  {
    if ( a2[2] )
      ++a2[3];
  }
  else
  {
    v7 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
    v7[2] = 0x18;
    v5 = sub_899330(v7);
  }
  v8 = *(this + 0x1E);
  if ( *(_WORD *)(v8 + 4) )
  {
    if ( !--*(_WORD *)(v8 + 6) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  *(this + 0x1E) = v5;
  if ( v5 )
    v9 = v5 + 6;
  else
    v9 = 0;
  *(_DWORD *)(*(this + 0x1D) + 4) = v9;
  if ( a3 )
    sub_89BF50((int)this, a4, a5);
}
