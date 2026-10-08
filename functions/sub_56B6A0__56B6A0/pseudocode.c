void __thiscall sub_56B6A0(void (__stdcall ****this)(signed int))
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void (__stdcall ****v3)(signed int); // esi

  v2 = (void (__thiscall ***)(_DWORD, int))*this; /*0x56b6a3*/
  if ( v2 ) /*0x56b6a7*/
  {
    if ( v2[0xFFFFFFFF] ) /*0x56b6a9*/
      (**v2)(v2, 3); /*0x56b6b8*/
    else
      FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF)); /*0x56b6bd*/
  }
  v3 = (void (__stdcall ****)(signed int))*(this + 2); /*0x56b6c5*/
  if ( v3 ) /*0x56b6ca*/
  {
    sub_56B6A0(v3); /*0x56b6ce*/
    FormHeapFree((unsigned int)v3); /*0x56b6d4*/
  }
}
