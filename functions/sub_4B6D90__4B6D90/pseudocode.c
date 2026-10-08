int __thiscall sub_4B6D90(_DWORD *this)
{
  int v1; // eax

  if ( this && (v1 = *(this + 2)) != 0 ) /*0x4b6d99*/
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v1 + 0x50) + 8))(*(_DWORD *)(v1 + 0x50)); /*0x4b6da3*/
  else
    return 7; /*0x4b6da5*/
}
