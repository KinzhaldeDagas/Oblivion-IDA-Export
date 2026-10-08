void __thiscall sub_694FC0(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int v3; // eax
  int v4; // eax

  v2 = (_DWORD *)*(this + 0xD9); /*0x694fc0*/
  if ( v2 ) /*0x694fc8*/
  {
    v3 = v2[2]; /*0x694fca*/
    if ( v3 ) /*0x694fcf*/
    {
      v4 = v3 + 0x14; /*0x694fd1*/
      if ( v4 ) /*0x694fd4*/
        *(_DWORD *)(v4 + 0x1C) = a2; /*0x694fda*/
    }
    (*(void (__thiscall **)(_DWORD *))(*v2 + 0x80))(v2); /*0x694fe5*/
  }
}
