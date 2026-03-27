int __thiscall sub_47C990(_DWORD *this, float a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int v5; // eax
  char v6; // al
  int result; // eax
  _DWORD *v8; // ecx

  dword_BA7A8C = 3;
  for ( i = (_DWORD *)*(this + 3); i; i = (_DWORD *)i[0xD] )
  {
    v5 = (*(int (__thiscall **)(_DWORD *))(*i + 4))(i);
    if ( v5 )
    {
      while ( (char *)v5 != dword_B3CD7C )
      {
        v5 = *(_DWORD *)(v5 + 4);
        if ( !v5 )
          goto LABEL_5;
      }
      v6 = 1;
    }
    else
    {
LABEL_5:
      v6 = 0;
    }
    if ( (v6 != 0 ? (unsigned int)i : 0) == 0 )
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*i + 0x54))(i, LODWORD(a2));
  }
  result = (*(int (__thiscall **)(_DWORD *))(*this + 0x74))(this);
  if ( a3 )
  {
    v8 = (_DWORD *)a3[7];
    if ( v8 != this )
      (*(void (__thiscall **)(_DWORD *))(*v8 + 0x74))(v8);
    sub_47C930(a3, a2, 1);
    result = (*(int (__thiscall **)(_DWORD *))(*a3 + 0x74))(a3);
  }
  dword_BA7A8C = 0;
  return result;
}
