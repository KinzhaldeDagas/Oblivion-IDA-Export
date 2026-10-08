int __thiscall sub_4474D0(int *this, char *Str2)
{
  int *v2; // esi
  int v3; // edi
  const char *v4; // eax

  v2 = this + 0x1D; /*0x4474d6*/
  if ( !*(this + 0x1E) && !*v2 || this == (int *)0xFFFFFF8C ) /*0x4474e3*/
    return 0; /*0x447517*/
  while ( 1 ) /*0x4474f0*/
  {
    v3 = *v2; /*0x4474f0*/
    if ( *v2 ) /*0x4474f0*/
    {
      v4 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xD4))(v3); /*0x447501*/
      if ( !CRT_StricmpLocaleDispatch(v4, Str2) ) /*0x447504*/
        break; /*0x447504*/
    }
    v2 = (int *)v2[1]; /*0x447510*/
    if ( !v2 ) /*0x447515*/
      return 0; /*0x447515*/
  }
  return v3; /*0x447517*/
}
