_DWORD *__thiscall sub_700010(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax

  v2 = (_DWORD *)*(this + 3);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*v2 + 4))(v2);
    if ( v3 )
      break;
LABEL_5:
    v2 = (_DWORD *)v2[0xD];
    if ( !v2 )
      return 0;
  }
  while ( v3 != a2 )
  {
    v3 = *(_DWORD *)(v3 + 4);
    if ( !v3 )
      goto LABEL_5;
  }
  return v2;
}
