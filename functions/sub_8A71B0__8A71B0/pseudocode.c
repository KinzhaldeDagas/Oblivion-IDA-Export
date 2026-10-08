int __thiscall sub_8A71B0(char *this)
{
  int v2; // edi
  char *v3; // esi
  _DWORD *v4; // eax
  int result; // eax

  v2 = 0x10; /*0x8a71b5*/
  v3 = this + 0x74; /*0x8a71ba*/
  do /*0x8a71ef*/
  {
    for ( ; /*0x8a71c0*/
          *(_DWORD *)v3;
          result = (*(int (__thiscall **)(_DWORD, _DWORD *, int, int))(**((_DWORD **)this + 4) + 0x1C))(
                     *((_DWORD *)this + 4),
                     v4,
                     v2,
                     1) )
    {
      v4 = *(_DWORD **)v3; /*0x8a71c5*/
      *(_DWORD *)v3 = **(_DWORD **)v3; /*0x8a71cb*/
    }
    *(_DWORD *)v3 = 0; /*0x8a71dc*/
    *((_DWORD *)v3 + 0x11) = 0; /*0x8a71e2*/
    --v2; /*0x8a71e9*/
    v3 += 0xFFFFFFFC; /*0x8a71ea*/
  }
  while ( v2 >= 0 ); /*0x8a71ef*/
  return result; /*0x8a71f1*/
}
