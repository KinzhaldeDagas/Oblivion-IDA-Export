void __thiscall TESObjectListHead_Clear(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // edi

  if ( *(this + 2) ) /*0x4b2413*/
  {
    do /*0x4b2438*/
    {
      v2 = (_DWORD *)*(this + 2); /*0x4b2420*/
      v3 = v2[7]; /*0x4b2425*/
      if ( v2 ) /*0x4b2428*/
        (*(void (__thiscall **)(_DWORD *))(*v2 + 0x10))(v2); /*0x4b2431*/
      *(this + 2) = v3; /*0x4b2435*/
    }
    while ( v3 ); /*0x4b2438*/
    TESObjectListHead_Clear_::ClearObjectListHead(this); /*0x4b243a*/
  }
  else
  {
    TESObjectListHead_Clear_::ClearObjectListHead(this); /*0x4b2417*/
  }
}
