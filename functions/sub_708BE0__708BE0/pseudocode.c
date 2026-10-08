void __thiscall sub_708BE0(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // ecx
  int v4; // eax
  bool v5; // zf

  if ( *(this + 0x36) ) /*0x708be6*/
  {
    v2 = this + 0x33; /*0x708bef*/
    do /*0x708c17*/
    {
      v3 = (int *)*(this + 0x34); /*0x708bf5*/
      v4 = *v3; /*0x708bf8*/
      v5 = *v3 == 0; /*0x708bfa*/
      *(this + 0x34) = *v3; /*0x708bfc*/
      if ( v5 ) /*0x708bff*/
        *(this + 0x35) = 0; /*0x708c06*/
      else
        *(_DWORD *)(v4 + 4) = 0; /*0x708c01*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 0x33, v3); /*0x708c11*/
      --*(this + 0x36); /*0x708c13*/
    }
    while ( *(this + 0x36) ); /*0x708c17*/
  }
}
