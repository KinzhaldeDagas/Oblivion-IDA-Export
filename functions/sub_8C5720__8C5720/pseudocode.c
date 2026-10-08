int __thiscall sub_8C5720(_DWORD *this, int a2)
{
  int v2; // eax

  if ( this ) /*0x8c5726*/
    v2 = *(this + 2); /*0x8c5728*/
  else
    v2 = 0; /*0x8c572d*/
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v2 + 0x10) + 0x24))(*(_DWORD *)(v2 + 0x10), a2); /*0x8c573c*/
  return sub_6EC2C0(a2); /*0x8c5746*/
}
