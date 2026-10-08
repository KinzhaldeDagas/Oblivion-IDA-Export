int __thiscall sub_8C35B0(_DWORD *this, _BYTE *a2)
{
  int v3; // eax
  _DWORD *v4; // edi
  bool v5; // zf
  int v6; // eax

  if ( *(this + 3) ) /*0x8c35b3*/
  {
    *a2 = 0; /*0x8c362c*/
    return *(this + 3); /*0x8c362f*/
  }
  else
  {
    v3 = FormHeapAlloc(0x10u); /*0x8c35bc*/
    if ( v3 ) /*0x8c35c6*/
    {
      *(_DWORD *)v3 = 0; /*0x8c35ca*/
      *(float *)(v3 + 0xC) = 1.0; /*0x8c35d0*/
      *(_DWORD *)(v3 + 4) = 0; /*0x8c35d3*/
      *(_DWORD *)(v3 + 8) = 0; /*0x8c35da*/
      v4 = (_DWORD *)v3; /*0x8c35e1*/
    }
    else
    {
      v4 = 0; /*0x8c35e5*/
    }
    v5 = *(this + 2) == 0; /*0x8c35e7*/
    *(this + 3) = v4; /*0x8c35eb*/
    if ( !v5 ) /*0x8c35ee*/
    {
      sub_8B0280(this, v4); /*0x8c35f3*/
      v6 = *(this + 2); /*0x8c35f8*/
      if ( v6 ) /*0x8c35fd*/
      {
        v4[2] = *(_DWORD *)(v6 + 0x10); /*0x8c3602*/
        *a2 = 1; /*0x8c3609*/
        return *(this + 3); /*0x8c3611*/
      }
      v4[2] = 0; /*0x8c3616*/
    }
    *a2 = 1; /*0x8c361d*/
    return *(this + 3); /*0x8c3620*/
  }
}
