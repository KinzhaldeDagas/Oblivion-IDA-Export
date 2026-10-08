char __thiscall sub_778D50(unsigned int *this, int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx

  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(unsigned int *, int))(*this + 0xC))(this, a2) ) /*0x778d62*/
    return 0; /*0x778da8*/
  v3 = *(this + 3); /*0x778d68*/
  v4 = 0; /*0x778d6b*/
  if ( v3 ) /*0x778d6f*/
  {
    v5 = (_DWORD *)*(this + 1); /*0x778d71*/
    while ( *v5 != a2 ) /*0x778d76*/
    {
      ++v4; /*0x778d78*/
      ++v5; /*0x778d7b*/
      if ( v4 >= v3 ) /*0x778d80*/
        goto LABEL_7; /*0x778d80*/
    }
  }
  else
  {
LABEL_7:
    v4 = 0xFFFFFFFF; /*0x778d82*/
  }
  --*(this + 3); /*0x778d85*/
  *(_DWORD *)(*(this + 1) + 4 * v4) = *(_DWORD *)(*(this + 1) + 4 * *(this + 3)); /*0x778d92*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a2 + 0x24))(a2, 1); /*0x778d9e*/
  return 1; /*0x778da0*/
}
