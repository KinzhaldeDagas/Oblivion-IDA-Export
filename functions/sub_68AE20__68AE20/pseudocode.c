void __thiscall sub_68AE20(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD **v4; // esi

  v3 = this + 1;
  if ( this == (_DWORD *)0xFFFFFFFC )
  {
    v4 = 0;
  }
  else
  {
    while ( v3[1] )
      v3 = (_DWORD *)v3[1];
    v4 = (_DWORD **)*v3;
  }
  if ( v4 && DName::status(v4) == 1 )
    sub_68B200(v4, a2);
  else
    sub_68A280(this, a2);
}
