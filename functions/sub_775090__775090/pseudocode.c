int __thiscall sub_775090(_DWORD *this, int a2)
{
  int v3; // eax
  _DWORD *v4; // ecx
  unsigned int v5; // esi
  int v6; // ebp
  int v7; // edi
  unsigned int v8; // eax

  if ( !a2 ) /*0x775097*/
    return 0; /*0x775099*/
  v3 = *(this + 5); /*0x77509f*/
  v4 = *(_DWORD **)v3; /*0x7750a2*/
  v5 = abs32(*(_DWORD *)(v3 + 8) - a2); /*0x7750b2*/
  v6 = 0; /*0x7750b4*/
  if ( *(_DWORD *)v3 ) /*0x7750a2*/
  {
    do /*0x7750db*/
    {
      v7 = v4[2]; /*0x7750c0*/
      v4 = (_DWORD *)*v4; /*0x7750c6*/
      v8 = abs32(v7 - a2); /*0x7750cf*/
      if ( v8 < v5 ) /*0x7750d3*/
      {
        v5 = v8; /*0x7750d5*/
        v6 = v7; /*0x7750d7*/
      }
    }
    while ( v4 ); /*0x7750db*/
  }
  return v6; /*0x77509b*/
}
