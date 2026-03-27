int __thiscall sub_6DF260(char *this, float a2, float a3)
{
  char *v3; // esi
  int v4; // edi
  int result; // eax

  v3 = this + 0x38;
  v4 = 3;
  do
  {
    if ( *(_DWORD *)v3 )
      result = (*(int (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)v3 + 0x84))(
                 *(_DWORD *)v3,
                 LODWORD(a2),
                 LODWORD(a3));
    v3 += 4;
    --v4;
  }
  while ( v4 );
  return result;
}
