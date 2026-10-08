int __thiscall sub_6D5150(_DWORD *this, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v4; // eax

  v4 = *(this + 0x14); /*0x6d5150*/
  if ( v4 ) /*0x6d5155*/
  {
    *a2 = *(_DWORD *)(v4 + 0x20); /*0x6d515e*/
    *a3 = *(_DWORD *)(v4 + 0x28); /*0x6d5167*/
    *a4 = *(_BYTE *)(v4 + 0x4A); /*0x6d5170*/
    return *(_DWORD *)(v4 + 0x24); /*0x6d5172*/
  }
  else
  {
    *a2 = 0; /*0x6d5184*/
    *a3 = 0; /*0x6d518a*/
    *a4 = 0; /*0x6d5190*/
    return 0; /*0x6d5193*/
  }
}
