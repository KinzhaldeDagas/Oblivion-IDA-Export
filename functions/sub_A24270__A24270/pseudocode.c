void __cdecl sub_A24270()
{
  _DWORD *v0; // esi
  void (__thiscall ***v1)(_DWORD, int); // ecx
  void (__stdcall ****v2)(signed int); // ecx

  v0 = dword_B12BB0; /*0x56b749*/
  dword_B12BA4 = 0; /*0x56b756*/
  if ( dword_B12BB0 ) /*0x56b75d*/
  {
    v1 = (void (__thiscall ***)(_DWORD, int))*dword_B12BB0; /*0x56b75f*/
    if ( *dword_B12BB0 ) /*0x56b75f*/
    {
      if ( v1[0xFFFFFFFF] ) /*0x56b765*/
        (**v1)(v1, 3); /*0x56b774*/
      else
        FormHeapFree((unsigned int)(v1 + 0xFFFFFFFF)); /*0x56b779*/
    }
    v2 = (void (__stdcall ****)(signed int))v0[2]; /*0x56b781*/
    if ( v2 ) /*0x56b786*/
      sub_56B680(v2, 1); /*0x56b78a*/
    FormHeapFree((unsigned int)v0); /*0x56b790*/
  }
  FormHeapFree(dword_B12B9C); /*0x56b79b*/
}
