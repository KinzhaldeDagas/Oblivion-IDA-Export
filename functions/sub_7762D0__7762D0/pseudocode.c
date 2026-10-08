void __thiscall sub_7762D0(_DWORD *this)
{
  _DWORD *v2; // esi
  int *v3; // eax
  int v4; // ecx
  bool v5; // zf
  int v6; // edi
  int v7; // edi

  if ( *(this + 7) ) /*0x7762d6*/
  {
    v2 = this + 4; /*0x7762dd*/
    do /*0x776321*/
    {
      v3 = (int *)*(this + 5); /*0x7762e0*/
      v4 = *v3; /*0x7762e3*/
      v5 = *v3 == 0; /*0x7762e5*/
      *(this + 5) = *v3; /*0x7762e7*/
      if ( v5 ) /*0x7762ea*/
        *(this + 6) = 0; /*0x7762f1*/
      else
        *(_DWORD *)(v4 + 4) = 0; /*0x7762ec*/
      v6 = v3[2]; /*0x7762f6*/
      (*(void (__thiscall **)(_DWORD *, int *))(*v2 + 8))(this + 4, v3); /*0x7762ff*/
      --*(this + 7); /*0x776301*/
      v7 = *(_DWORD *)(v6 + 0x104); /*0x776305*/
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 8) + 0xD4))( /*0x77631c*/
        *(this + 8),
        *(_DWORD *)(v7 + 0x6C),
        0);
      *(_BYTE *)(v7 + 0x71) = 0; /*0x77631e*/
    }
    while ( *(this + 7) ); /*0x776321*/
    *(this + 0xB) = *(this + 0xA); /*0x77632b*/
  }
  else
  {
    *(this + 0xB) = *(this + 0xA); /*0x776334*/
  }
}
