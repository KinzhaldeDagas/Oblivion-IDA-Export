void __thiscall sub_6EBCB0(unsigned int *this)
{
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__stdcall ****v4)(signed int); // ecx

  v2 = (_DWORD *)*(this + 5); /*0x6ebcd9*/
  *(this + 2) = 0; /*0x6ebce6*/
  if ( v2 ) /*0x6ebced*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*v2; /*0x6ebcef*/
    if ( *v2 ) /*0x6ebcef*/
    {
      if ( v3[0xFFFFFFFF] ) /*0x6ebcf5*/
        (**v3)(v3, 3); /*0x6ebd04*/
      else
        FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6ebd09*/
    }
    v4 = (void (__stdcall ****)(signed int))v2[2]; /*0x6ebd11*/
    if ( v4 ) /*0x6ebd16*/
      sub_56B680(v4, 1); /*0x6ebd1a*/
    FormHeapFree((unsigned int)v2); /*0x6ebd20*/
  }
  FormHeapFree(*this); /*0x6ebd2b*/
}
