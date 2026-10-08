void __thiscall sub_5A66A0(_DWORD *this)
{
  unsigned int v2; // esi
  _DWORD *v3; // edi
  unsigned int v4; // eax

  v2 = 0; /*0x5a66a4*/
  if ( *(this + 0x21) ) /*0x5a66a6*/
  {
    v3 = this + 0x1E; /*0x5a66af*/
    do /*0x5a66ce*/
    {
      v4 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v3 + 4))(this + 0x1E, v2); /*0x5a66ba*/
      FormHeapFree(v4); /*0x5a66bd*/
      ++v2; /*0x5a66c2*/
    }
    while ( v2 < *(this + 0x21) ); /*0x5a66ce*/
  }
}
