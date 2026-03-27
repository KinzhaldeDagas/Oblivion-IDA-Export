int __thiscall sub_8A71B0(char *this)
{
  int v2; // edi
  char *v3; // esi
  _DWORD *v4; // eax
  int result; // eax

  v2 = 0x10;
  v3 = this + 0x74;
  do
  {
    for ( ;
          *(_DWORD *)v3;
          result = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int))(**((_DWORD **)this + 4) + 0x1C))(
                     *((_DWORD *)this + 4),
                     v4,
                     v2,
                     1) )
    {
      v4 = *(_DWORD **)v3;
      *(_DWORD *)v3 = **(_DWORD **)v3;
    }
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 0x11) = 0;
    --v2;
    v3 += 0xFFFFFFFC;
  }
  while ( v2 >= 0 );
  return result;
}
