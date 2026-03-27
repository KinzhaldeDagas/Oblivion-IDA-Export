char __thiscall sub_6803A0(_DWORD *this, int a2, _DWORD *a3)
{
  char result; // al
  int v4; // ecx
  _DWORD *v5; // eax

  result = 0;
  if ( a2 )
  {
    if ( *(this + 2) == a2 )
    {
      v4 = *(this + 1);
    }
    else
    {
      if ( *(this + 4) != a2 )
        return result;
      v4 = *(this + 3);
    }
    if ( v4 )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x174))(v4);
      *a3 = *v5;
      a3[1] = v5[1];
      a3[2] = v5[2];
      return 1;
    }
  }
  return result;
}
