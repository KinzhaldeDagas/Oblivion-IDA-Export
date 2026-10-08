int __thiscall sub_77B5B0(int this, int a2)
{
  int v3; // eax
  int result; // eax

  if ( a2 ) /*0x77b5ba*/
  {
    if ( *(_BYTE *)(this + 0x1000) ) /*0x77b5bc*/
    {
      if ( *(_DWORD *)(this + 0x100C) == a2 ) /*0x77b5cb*/
      {
        v3 = *(_DWORD *)(this + 0xFF8); /*0x77b5cd*/
        *(_DWORD *)(this + 0x100C) = 0; /*0x77b5d3*/
        result = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)v3 + 0x15C))(v3, 0); /*0x77b5e8*/
      }
      if ( *(_DWORD *)(this + 0x1010) == a2 ) /*0x77b5f0*/
        *(_DWORD *)(this + 0x1010) = 0; /*0x77b5f2*/
    }
  }
  return result; /*0x77b5fc*/
}
