int __thiscall sub_6DF160(char *this)
{
  char *v1; // esi
  int v2; // edi
  int result; // eax

  v1 = this + 0x38;
  v2 = 3;
  do
  {
    if ( *(_DWORD *)v1 )
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v1 + 0x7C))(*(_DWORD *)v1);
    v1 += 4;
    --v2;
  }
  while ( v2 );
  return result;
}
