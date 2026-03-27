unsigned int *__thiscall sub_4B2980(_BYTE *this, char *a2, int a3)
{
  unsigned int *v4; // esi
  _DWORD **v6; // eax
  int v7; // eax

  v4 = 0;
  if ( *(this + 4) != 0x1E )
    return 0;
  if ( sub_55F7E0(1) )
  {
    v6 = (_DWORD **)sub_55F7E0(1);
    v4 = sub_55F800(v6, a2, (int)this);
  }
  (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x120))(this, v4);
  if ( v4 )
  {
    if ( (*(int (__thiscall **)(unsigned int *))(*v4 + 0x9C))(v4) )
    {
      if ( a2 )
      {
        v7 = (*(int (__thiscall **)(unsigned int *))(*v4 + 0x9C))(v4);
        sub_4D7880(a2, *(_DWORD *)(v7 + 0x48));
      }
    }
  }
  return v4;
}
