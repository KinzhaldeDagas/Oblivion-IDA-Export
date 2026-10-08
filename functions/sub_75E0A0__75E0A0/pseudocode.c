void __thiscall sub_75E0A0(unsigned int *this)
{
  _DWORD *v2; // esi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void (__stdcall ****v4)(signed int); // ecx

  v2 = (_DWORD *)*(this + 5); /*0x75e0a4*/
  *(this + 2) = 0; /*0x75e0a9*/
  if ( v2 ) /*0x75e0b0*/
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*v2; /*0x75e0b2*/
    if ( *v2 ) /*0x75e0b2*/
    {
      if ( v3[0xFFFFFFFF] ) /*0x75e0b8*/
        (**v3)(v3, 3); /*0x75e0c7*/
      else
        FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x75e0cc*/
    }
    v4 = (void (__stdcall ****)(signed int))v2[2]; /*0x75e0d4*/
    if ( v4 ) /*0x75e0d9*/
      sub_56B680(v4, 1); /*0x75e0dd*/
    FormHeapFree((unsigned int)v2); /*0x75e0e3*/
  }
  FormHeapFree(*this); /*0x75e0ee*/
}
