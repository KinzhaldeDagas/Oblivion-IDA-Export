signed int __thiscall sub_68F9B0(char *this, _DWORD *a2)
{
  char *v2; // esi
  int v3; // eax
  int v4; // eax
  signed int result; // eax

  v2 = this + 0xFFFFFFFC;
  sub_8A63A0(a2, (int)(this + 0xFFFFFFFC));
  if ( v2 )
    v3 = (int)(v2 + 4);
  else
    v3 = 0;
  sub_8A6300(a2, v3);
  if ( v2 )
    v4 = (int)(v2 + 8);
  else
    v4 = 0;
  result = sub_8A6350(a2, v4);
  if ( v2 )
    return (*(signed int (__thiscall **)(char *, int))(*(_DWORD *)v2 + 0x10))(v2, 1);
  return result;
}
